#pragma once
#include "UserInterface.h"

class UserInterfaceGUI : public UserInterface {
    public:
        void displayWelcomeMessage();
        float getNumberOne();
        float getNumberTwo();
        char getOperation();
        void displayResult(float result);
        bool appClosePrompt();
        void displayGoodbyeMessage();
};