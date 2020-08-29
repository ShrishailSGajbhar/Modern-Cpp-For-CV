# lets create the targets for sum.cpp and subtract.cpp
c++ -c -Iinclude/ src/sum.cpp -o build/sum.o
c++ -c -Iinclude/ src/subtract.cpp -o build/subtract.o
# lets organize modules into libraries
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o
# lets link the object files and libraries
c++ -std=c++17 -Iinclude/ src/main.cpp -o main -Lbuild/ -lipb_arithmetic  
# move the binary executable to the results/bin folder
mv main results/bin/ 