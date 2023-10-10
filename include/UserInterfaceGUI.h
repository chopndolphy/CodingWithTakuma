#pragma once
#include "UserInterface.h"

class UserInterfaceGUI : public UserInterface {
    public:
        void displayWelcomeMessage(); // Same deal as the Console UI, but in the corresponding .cpp we will have a different implementation
        float getNumberOne(); // We don't really have to write anything in the .cpp file yet, everything will work fine.
        float getNumberTwo(); // I should have mentioned earlier, these are declarations. This basically means "Hey this function is a thing"
        char getOperation(); // In the .cpp file, we will define the functions "This is how the thing works"
        void displayResult(float result); // Notice how none of the UI's have any private variables or variables at all
        bool appClosePrompt(); // The class won't store any information and will just take input to send to the terminal or
        void displayGoodbyeMessage(); // Get info from the terminal and return it to the MyPluginApp
};