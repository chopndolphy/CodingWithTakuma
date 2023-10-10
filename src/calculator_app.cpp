#include <iostream>
#include "MyPluginApp.h"
#include "UserInterfaceConsole.h"
#include "UserInterfaceGUI.h"
#include "Calculator.h"

int main() {
    bool interfaceIsGUI = false;
    bool interfaceIsConsole = true;

    if (interfaceIsGUI) {
        std::cout << "GUI Interface is not yet available." << std::endl;
        return 1;

    } else if (interfaceIsConsole) {
        UserInterfaceConsole uIC;
        Calculator c;
        MyPluginApp app(&uIC, &c);
        app.startApp();
        while(!app.getIsClosing()) {
            app.runOperation();
        }
        app.closeApp();
        return 0;

    } else {
        std::cout << "Error: Invalid interface selection" << std::endl;
        return 1;
    }

}