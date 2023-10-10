#include "UserInterfaceConsole.h"

void UserInterfaceConsole::displayWelcomeMessage() {
    std::cout << "Welcome to Takuma's Calculator App!" << std::endl;
}
float UserInterfaceConsole::getNumberOne() {
    float input;
    std::cout << "Enter the first number: ";
    std::cin >> input;
    return input;
}
float UserInterfaceConsole::getNumberTwo() {
    float input;
    std::cout << "Enter the second number: ";
    std::cin >> input;
    return input;
}
char  UserInterfaceConsole::getOperation() {
    char operation;
    std::cout << "Enter the operation symbol ( + or -): ";
    std::cin >> operation;
    return operation;
}
void  UserInterfaceConsole::displayResult(float result) {
    std::cout << "The result is: " << result << std::endl;
}
bool  UserInterfaceConsole::appClosePrompt() {
    while (true) {
        std::string appCloseInput;
        std::cout << "Do you want to run another calculation? (yes or no)" << std::endl;
        std::cin >> appCloseInput;
        if (appCloseInput == "no") {
            return true;
        } else if (appCloseInput == "yes") {
            return false;
        } else {
            std::cout << "Invalid input. Try Again." << std::endl;
        }
    }
}
void UserInterfaceConsole::displayGoodbyeMessage() {
    std::cout << "Goodbye!" << std::endl;
}