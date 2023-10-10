#pragma once

class UserInterface {
    public:
        virtual void displayWelcomeMessage() = 0;
        virtual float getNumberOne() = 0;
        virtual float getNumberTwo() = 0;
        virtual char getOperation() = 0;
        virtual void displayResult(float result) = 0;
        virtual bool appClosePrompt() = 0;
        virtual void displayGoodbyeMessage() = 0;
};