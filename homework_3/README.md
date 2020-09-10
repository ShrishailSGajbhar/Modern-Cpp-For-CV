This repository provides the solution to questions in [homework_3.pdf](https://www.ipb.uni-bonn.de/html/teaching/modern-cpp/homeworks/homework_3.pdf) of the course ["Modern C++ for Computer Vision"](https://www.ipb.uni-bonn.de/teaching/cpp-2020) offered by university of Bonn and instructed by Ignacio Vizzo.

To check the output of this repository: 
* clone this reposotory locally to your computer.
* open the terminal and remove the build folder using **rm -r build**
* Now type the following lines at the terminal:
  * mkdir build && cd build && cmake ..
  * make
  * ./create_image_browser > ../web_app/test.html
  * cd ..
  * xdg-open web_app/test.html
