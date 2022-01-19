# How to use C++ extension and run the code

## Json file
You have to tell VS Code exactly how to compile the code. You can automatically generate the instructions file tasks.json with the dropdown menu: **Terminal > Configure Default Build Task**. Then choose **C/C++: g++ bulid active file**. This will create a tasks.json file in a .vscode folder and open it in the editor. Now you can press `Crtl+Shift+B` to compile any C++ code with g++. You will see a message in the termial and you get a compiled output with the same name of the source code, which in this case is `hellworld`.

## Code Runner
There's a play button at the top-right side of the window of any open source code. To get it to actually compile and run code, you need to create a workspaece. You can designate a folder as a workspace using the dropdown menu: **File > Add Folder to Workspace...**. Just click on the play button and it will run the code without actually creating an executable file.
