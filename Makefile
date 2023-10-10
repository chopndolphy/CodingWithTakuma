CXX=g++
CXXFLAGS= -g -std=c++11 -pedantic -Wall -Wextra

BIN=bin
BUILD=build
IDIR=include
SRC=src


override CXXFLAGS += $(IDIR:%=-I%)

CXX_SRCS = calculator_app.cpp Calculator.cpp MyPluginApp.cpp UserInterfaceConsole.cpp UserInterfaceGUI.cpp
OBJS = $(CXX_SRCS:%.cpp=$(BUILD)/%.o)
HEAD = $(CXX_SRCS:%.cpp=$(IDIR)/%.h)

MAIN_DEPS = $(SRC)/calculator_app.cpp $(IDIR)/MyPluginApp.h $(IDIR)/UserInterfaceConsole.h $(IDIR)/UserInterfaceGUI.h $(IDIR)/Calculator.h

main: $(BIN)/calculator_app

# Main executable
$(BIN)/calculator_app: $(OBJS) $(BUILD)/calculator_app.o | $(BIN)
	$(CXX) -o $@ $^

# Main.o
$(BUILD)/calculator_app.o: $(MAIN_DEPS) | $(BUILD)
	$(CXX) $(CXXFLAGS) -c $(patsubst $(BUILD)/%.o,$(SRC)/%.cpp,$@) -o $@

# All .o files
$(BUILD)/%.o: $(SRC)/%.cpp $(IDIR)/%.h | $(BUILD)
	$(CXX) $(CXXFLAGS) -c $(patsubst $(BUILD)/%.o,$(SRC)/%.cpp,$@) -o $@

# Depends on UserInterface.h
$(BUILD)/UserInterfaceConsole.o $(BUILD)/UserInterfaceGUI.o $(BUILD)/MyPluginApp.o: $(IDIR)/UserInterface.h | $(BUILD)

# Depends on Calculator.h
$(BUILD)/MyPluginApp.o: $(IDIR)/Calculator.h | $(BUILD)

$(BUILD):
	mkdir -p $(BUILD)

$(BIN):
	mkdir -p $(BIN)

.phony: clean

clean:
	rm -rf $(BUILD)