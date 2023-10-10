# CalculatorApp
Version 1.10.09
- An educational tool for Takuma
## Changelog
### Version 1.10.09
- App is functional, but very basic
- Include files are fully commented/documented
- Src files have yet to be commented/documented
- Makefile and .gitignore have also not been commente/documented
## How to Run and Edit Code
### Git
Type in the terminal:
```
git --version
```
It will then prompt you to install it if you havent already. Afterwards, navigate to your Repositories folder:
```
cd Repositories
```
Then create a clone of this repository by typing:
```
git clone https://github.com/chopndolphy/CodingWithTakuma.git
```
### Make
First we need homebrew. This makes it easy to install certain coding related software.
Type in the terminal to install the command line tools:
```
xcode-select --install
```
Click "install" and "agree". After, download the homebrew installation script by typing:
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"
```
Enter you password when prompted, press return, and then press return one last time and the installation should be successful.

Now to install make simply type:
```
brew install make
```
### Visual Studio Code
- First [install](https://code.visualstudio.com/Download) VS Code.
- Then open the terminal and first navigate to the CalculatorApp repository:
```
cd Repositories/CodingWithTakuma
```
- Then open the app in Visual Studio Code by typing (this is how you will always open the project):
```
code .
```
(the period essentially means "here". So you are telling VS Code to open the project located in the folder that I am currently in)
- Now because VS Code works with any coding language, we need to install specific extensions to get useful features for what we will be using. Go to the extensions tab on the left side, 5th icon down (looks like 4 squares(one of them is lonely :( ))
- Search for and install the following:
    - C/C++ by Microsoft
    - C/C++ Extension Pack by Microsoft
    - Git Extension Pack by Don Jayamanne
    - Makefile Tools by Microsoft
### Building, Running, and Editing the App from the Terminal
Always first make sure you are located within the CodingWithTakuma folder. You can go there from the home directory by typing:
```
cd Repositories/CodingWithTakuma
```
Now to build the project type:
```
make
```
If the build was successful (good luck if it wasn't lol), then you can run the app with (when located within the CodingWithTakuma folder):
```
./bin/calculator_app
```
And again, if you want to open the project and edit with VS Code, (from the CodingWithTakuma folder) type:
```
code .
```
Feel free to mess around with the code. Make sure you save in VS Code and recompile in the terminal, before you run the project again (otherwise there won't be any changes).
## App Summary
### Purpose
This calculator app is a basic example of how to structure an application. The app asks for two numbers and an operation symbol and outputs the result of the equation. This can be repeated indefinitely. The app is also structed to anticapte adding a graphical user interface.
### Architecture
The main file creates a calculator instance and a user interface instance. When the app is instantiated afterwards, it is passed a reference to these instances. The MyPluginApp object is used to keep the calculator and the user interface objects independent from eachother. (More on general design principles later)
## Files
### Bin Folder
- The bin folder is what contains your executable, after you build the application.
### Build Folder
- The build folder holds all of the object files (machine code) when the application is built.
### Include Folder
- The include folder holds all of your user-generated header files (More on header files later).
- Calculator.h: The actual logic for the calculator. It does not have any knowledge of any other class.
- MyPluginApp.h: The interface or controller or manager of all the different parts of the application. It tells the other classes what to do, so that they don't have to communicate with each other.
- UserInterface.h: This is the abstract class. This is how we can get information from the user interface, without caring whether or not we type it into the console or later we use a mouse to click on a button. The UserInterfaceConsole and UserInterfaceGUI inherit from this class and make specific versions of the functions. But the names will be the same, so that we can use the functions without having to know which version we are using.
- UserInterfaceConsole.h: This is the console version. The user interface functions will be specifically implemented to work with the console.
- UserInterfaceGUI.h: This is the GUI version. The user interface functions will be specifically implemented to work with a GUI.
### Src Folder
- The src folder holds all of your .cpp files (Definitions of declared functions in the corresponding header file... as well as the calculator_app.cpp which is your main file)
- calculator_app.cpp: This is the main file. It creates instances of the necessary objects, starts the app, runs a loop until the app is closed, and then closes the app.
- Calculator.cpp: This contains the definitions of the calculator class. The class simply has two numbers that can be set and a calculate function that requires a character of a mathematical operation symbol (currently either + or -). The calculate function runs the required helper function (a function that is private and exists only to make code clearer) with the numbers and operation and saves the result. The result can then be retrieved from outside the class.
- MyPluginApp.cpp: The app has a constructor that links the references to the user interface and calculator class, so that they can be accessed (and told what to do) from within the MyPluginApp class. The app contains the logic for starting the app, closing the app, and running one single operation (the loop to do multiple operations is within the main calculator_app.cpp)
- UserInterfaceConsole.cpp: This is the implementation of the console specific user interface functions. The functions return data when asking for input and they require data to be passed to them when they are outputing. It doesn't save any data, just passes it to either the MyPluginApp or to the terminal.
- UserInterfaceGUI.cpp: This is empty and can remain empty until we decide to implement a GUI. The functions will return the same data types and require the same data types as the console user interface. The difference is how the input is retrieved (clicking buttons instead of console typing) and how the input is displayed (pretty graphical display instead of console text).
### Other 
- .gitignore: this tells git which files or folders or types of files should not be tracked or published. Generally you want to ignore build files, IDE specific files, and the executable (users will have to build the app themselves instead of using an installer, until we make one). .gitignore files use certain syntax to denotate whener to ignore an entire directory, just a directory's contents, specific files, or even all files of a certain type.
- Makefile This contains the instructions for building the file. The goal is make sure we only recompile files that has been changed or files that are dependent on files that have been changed. Makefiles have their own coding language.
- README.md This file (the one you are reading lol) usually contains a summary of the application, version history/changes, instructions for building the application, a guide for using the application, a list of known bugs, and planned additions/changes. README files use the markdown coding language.