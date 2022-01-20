# How to use C++ extension and run the code

## C++ Extension
The C++ extension has many features. One of the best features is linting. Just get it.

## Code Runner
There's a play button at the top-right side of the window of any open source code. To get it to actually compile and run code, you need to create a workspaece. You can designate a folder as a workspace using the dropdown menu: **File > Add Folder to Workspace...**. Make sure you have the `helloworld.cpp` file open. Then just click on the play button and it will run the code without actually creating an executable file.

## The Json file
Json files contain instructions that VS Code reads. It's very easy for a human to read. When you change settings in your VS Code, you are actually modifying the `settings.json` on the backend.

### Build instructions with Json
You have to tell VS Code exactly how to compile the code. You can automatically generate the instructions file `tasks.json` with the dropdown menu: **Terminal > Configure Default Build Task**. Then choose **C/C++: g++ bulid active file**. This will create a tasks.json file in a .vscode folder and open it in the editor. Now you can press `Crtl+Shift+B` to compile any C++ code with g++. You will see a message in the termial and you get a compiled output with the same name of the source code, which in this case is `hellworld`. To run it, you type `./helloworld` in the terminal.


### Debugging instructions with Json
From the main menu, choose **Run > Add Configuration...** and then choose **C++ (GDB/LLDB)**. This will create the `launch.json` in a separate directory. It feels very clunky to me. There is a GUI at the top center to let you go step-by-step or step out from the inner function. So, that's good. The debug console is filled with garbage yellow text. Not sure what that's about.

### Tuning C++ Configs with Json
VS Code is highly customizable. You can even give it special instructions to handle .cpp files. You can view the C/C++ configuration UI by running the command **C/C++: Edit Configurations (UI)** from the Command Palette (Ctrl+Shift+P). This will open up a settings GUI and it will create a .json file containing special instructions for .cpp files for VS Code to use.