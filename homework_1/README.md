# Solutions to homework_1.pdf

This repository provides the solution to questions in [homework_1.pdf](https://www.ipb.uni-bonn.de/html/teaching/modern-cpp/homeworks/homework_1.pdf) of the course "Modern C++ for Computer Vision" offered by [university of Bonn](https://www.ipb.uni-bonn.de/) and instructed by [Ignacio Vizzo](https://github.com/nachovizzo).

This repo contains 3 folders:
1) task_1 
2) task_2_using_build.sh
3) task_2_using_cmake

Folder *task_1* is related to using the terminal and to get the answers of the question, run: <br />
**sh commands.sh** at the terminal.

Folders *task_2_using_build.sh* and *task_2_using_cmake* are related to build system questions. 

Folder task_2_using_build.sh uses shell script *build.sh* to create a build folder, necessary object and library files as well as final executable file which is stored into results/bin folder.<br />
Run **sh build.sh** at the terminal to build the target. <br />
To check the output, **cd results/bin** and run **./main** at the terminal.

Folder task_2_using_cmake uses *CMake* and *Make* tools to generate a build system, necessary object and library files along with final executable.<br />
Run **sh run.sh** at the terminal to build the target. <br />
To check the output, **cd build/** and run **./main** at the terminal.

You should get the output of the main (executable) file as:
he sum of 1+2 = 3
The sub of 1-2 = -1