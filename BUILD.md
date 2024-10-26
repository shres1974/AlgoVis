# AlgoVis Build Instructions

## Prerequisites
Before you start, ensure you have the following installed:

- **CMake**: [Download CMake](https://cmake.org/download/)
- **SFML**: Make sure SFML is installed. You can find it [here](https://www.sfml-dev.org/download.php).
- **C++**

## Building the Project
1. **Open your terminal**.
2. **Navigate to the AlgoVis project directory**:
   cd /path/to/AlgoVis


4. **Create new build and binary directories**:
   mkdir build bin

5. **Change to the build directory**:
   cd build

6. **Run CMake to configure the project with C++11**:
   cmake -DCMAKE_CXX_STANDARD=11 ..
**This command will configure the project to use C++11 and check for the required compilers and libraries, including SFML.**

7. **Build the project**:
   make

8. **Run the application**: Navigate to the binary directory and execute the application:
   cd ../bin
   ./AlgoVis
