#pragma once
#include "UserInterface.h" // We are including these files so that we can access their functions from within this class
#include "Calculator.h"

class MyPluginApp { // The plugin app is going to be the main controller of the program and will tell everyone what to do
    public:
        MyPluginApp(UserInterface* interface, Calculator* calculator); // The constructer has arguments being passed in it
        void startApp();
        void runOperation();
        void closeApp();
        bool getIsClosing() {
            return isClosing;
        }
    private:
        UserInterface* pInterface; // These are pointer variables to the interface and calculator objects.
        Calculator* pCalculator; // They will be assigned in the constructor so that this class can access their functions
        bool isClosing = false; // We set the default value to false, so that the loop in the calculator_app.cpp will run
};