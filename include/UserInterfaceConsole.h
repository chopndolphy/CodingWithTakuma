#pragma once
#include <iostream>
#include <string>
#include "UserInterface.h"

class UserInterfaceConsole : public UserInterface {
    public:
        void displayWelcomeMessage();
        float getNumberOne();
        float getNumberTwo();
        char getOperation();
        void displayResult(float result);
        bool appClosePrompt();
        void displayGoodbyeMessage();
};