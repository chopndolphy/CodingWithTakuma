#include "Calculator.h"
Calculator::Calculator() {
    //This is a constructor with nothing in it, so it is going to use the default constructor. We don't need to do anything special to set up the calculator.
}
void Calculator::setNumberOne(float number) {
    numberOne = number;
}
void Calculator::setNumberTwo(float number) {
    numberTwo = number;
}
void Calculator::calculate(char operation) {
    if (operation == '+') {
        add();
    } else if (operation == '-') {
        subtract();
    } else {
        //Send an error message (but this hasn't been implemented yet)
    }
}
void Calculator::add() {
    result = numberOne + numberTwo;
}
void Calculator::subtract() {
    result = numberOne - numberTwo;
}