// Any line after two forward slashes is a comment (should be green text in VS Code)
// This doesn't affect the program at all and is used to document the code for other programmers

#pragma once // This is used at the top of header files, so that they are not referenced more than one when compiling (causes problems)

class Calculator { // A class is an object (Think of it like a type of thing or even a specific thing. For instance, "Animal" or "Takuma")
    public: // This means that these things can be referenced/used/accessed by other classes
        Calculator(); // The constructor is a function that is called when the object is created (instantiated)
        void setNumberOne(float number); // Set functions are used by other classes to change the values of private variables
        void setNumberTwo(float number); // Float is a decimal point number
        void calculate(char operation); // Char means character
        float getResult() { // Get functions are used by other classes to "get" the value of a private variable
            return result; // Get functions often are declared AND defined in the header file.
        }
    private: // Private variables cannot be directly changed by other classes
        float numberOne; // We keep variables private so that we can limit other classes' ability to break things in our class
        float numberTwo;
        float result;

        void add(); // Private functions are usually helper functions, these are used within the class code in order to make things more clear to read
        void subtract();
};