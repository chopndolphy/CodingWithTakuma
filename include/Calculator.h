#pragma once

class Calculator {
    public:
        Calculator();
        void setNumberOne(float number);
        void setNumberTwo(float number);
        void calculate(char operation);
        float getResult() {
            return result;
        }
    private:
        float numberOne;
        float numberTwo;
        float result;

        void add();
        void subtract();
};