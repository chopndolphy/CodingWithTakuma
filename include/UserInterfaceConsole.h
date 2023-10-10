#pragma once
#include <iostream> // These C++ Standard Template Library header files are required for our console implementation
#include <string> // <> are usually used for STL header files and "" are usually used for user-generated header files
#include "UserInterface.h" // We need to reference the parent class

class UserInterfaceConsole : public UserInterface { // the colon and the public tells you which parent class this one inherits from
    public:
        void displayWelcomeMessage(); // We don't have to technically get rid of the word "virtual", but it makes it more apparent that it isnt a parent class
        float getNumberOne(); // We need to retype out each function that we will be redifining in the child class
        float getNumberTwo(); // They need to be typed out the same way (except the virtual and the = 0)
        char getOperation();
        void displayResult(float result);
        bool appClosePrompt();
        void displayGoodbyeMessage();
};