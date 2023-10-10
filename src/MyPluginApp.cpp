#include "MyPluginApp.h"
MyPluginApp::MyPluginApp(UserInterface* interface, Calculator* calculator) {
    pCalculator = calculator;
    pInterface = interface;
    isClosing = false;
}
void MyPluginApp::startApp() {
    pInterface->displayWelcomeMessage();
}
void MyPluginApp::runOperation() {
    pCalculator->setNumberOne(pInterface->getNumberOne());
    pCalculator->setNumberTwo(pInterface->getNumberTwo());
    pCalculator->calculate(pInterface->getOperation());

    pInterface->displayResult(pCalculator->getResult());
    isClosing = pInterface->appClosePrompt();
}
void MyPluginApp::closeApp() {
    pInterface->displayGoodbyeMessage();
}