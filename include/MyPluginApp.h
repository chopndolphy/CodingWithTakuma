#pragma once
#include "UserInterface.h"
#include "Calculator.h"

class MyPluginApp {
    public:
        MyPluginApp(UserInterface* interface, Calculator* calculator);
        void startApp();
        void runOperation();
        void closeApp();
        bool getIsClosing() {
            return isClosing;
        }
    private:
        UserInterface* pInterface;
        Calculator* pCalculator;
        bool isClosing = false;
};