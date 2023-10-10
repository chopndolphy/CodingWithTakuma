#pragma once

class UserInterface { // This is an abstract class. We use it so that we can reference a userinterface without having to care about what kind it is, which makes it easier to add other types later
    public:
        virtual void displayWelcomeMessage() = 0; // virtual functions are functions that are capable of changing in the sub class (UserInterfaceConsole and UserInterfaceGUI)
        virtual float getNumberOne() = 0; // The = 0 makes it a pure virtual function. This means that it doesnt have a default implementation.
        virtual float getNumberTwo() = 0; // These functions should behave the same on the outside, whether its a GUI or Console
        virtual char getOperation() = 0; // The type of output and input of the functions is the same, but its how you get there that changes
        virtual void displayResult(float result) = 0; // Meaning mouse-clicking-buttons or console-typing
        virtual bool appClosePrompt() = 0; // Abstract classes cannot be instantiated and don't really need a .cpp file
        virtual void displayGoodbyeMessage() = 0; // Think of like a category. You can go to zoo and see a "Tiger", but you can't go to the zoo to see "Animal"
};