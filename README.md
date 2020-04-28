# Introduction to OpenGL

## Windows

### Prerequisites

* download and install the latest version of CMake: https://github.com/Kitware/CMake/releases/download/v3.17.1/cmake-3.17.1-win64-x64.msi

* if you don't have it already, download and install MS Visual Studio Community Edition (free for students): https://visualstudio.microsoft.com/downloads/


### Create the Visual Studio Solution. 
This step enables you to create the project file to load inside VS:

* unzip the code inside a folder. *Avoid to place the code in folders with spaces and accented characters*.

* open a Terminal and go to the directory containing the code.

* execute:

  * `md build`
  
  * `cd build`
  
  * `cmake -G "Visual Studio 16 2019" -A x64 -DCMAKE_BUILD_TYPE:STRING=Release ..`
  
  * `dir`
  
  > if you had a different version of VS installed (not the latest) you may need to adapt the string `Visual Studio 16 2019` to your version: e.g. Visual Studio 15 2017, Visual Studio 14 2015, Visual Studio 12 2013
  
* if everything went well you should find a file named `tp1.sln` inside the directory.


### Compile, build, execute 

* open `tp1.sln` inside VS either by double clicking on it or opening from inside VS

* build the solution (**Build Solution** from the **Build menu**)

* from the tp directory copy `freeglut\bin\x64\freeglut.dll` in `build\Release`

* execute the code.  (On the menu bar, choose **Debug**, **Start without debugging**.)

(see https://docs.microsoft.com/en-us/cpp/build/vscpp-step-2-build?view=vs-2019 for how to build, execute, etc)


### Editing the code

Edit the code according to the assignments that are given, rebuild the solution and execute. 

> You need to run the cmake line only **once**

> You need to copy the dll file only **once**.


## Linux

### Prerequisites

In order to develop with OpenGL some system packages are required:

```bash
sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev libxi-dev libxmu-devautomake
```

To build this code you can either 

* use the provided `Makefile`

* or the CMake build system. You can install CMake from the system package manager but you need a recent version >= 3.10. Check the version that is provided by your linux distribution and if it is suitable usually you need to

    ```bash
    sudo apt-get install cmake
    ```

    otherwise you can install the binaries from here: https://github.com/Kitware/CMake/releases/download/v3.17.1/cmake-3.17.1-Linux-x86_64.sh
    
    To install:
    ```bash
    wget https://github.com/Kitware/CMake/releases/download/v3.17.1/cmake-3.17.1-Linux-x86_64.sh
    chmod +x cmake-3.17.1-Linux-x86_64.sh
    sudo cmake-3.17.1-Linux-x86_64.sh --prefix=/usr/local/ --skip-license
    ```
  
 ### Build
 
 To compile and build the code you can either:
 
 * using the Makefile, just:
   ```bash
   make <name_file_without_cpp>
   ```
   
 * using CMake:
     ```bash
     mkdir build && cd build
     cmake ..
     make <name_file_without_cpp>
     ```

 In both cases,
 ```bash
make all
```
builds everything, and
 ```bash
make clean
```
cleans everything.

Execute the code:
```
./helloteapot
```

### Editing the code

Edit the code as required and then

* using `Makefile` 
  ```
  make clean && make <name_file_without_cpp>
  ```

* CMake:
  ```
  make  <name_file_without_cpp>
  ```

> the cmake line has to be run only **once**


## macOS

### Prerequisites

In order to develop with OpenGL you need to have XCode installed.

If you want to use CMake, follow the instructions for linux to install the latest version

 ### Build
 
 Same as Linux.
 
### Editing the code
 
 Same as Linux.
 
 
 ## Adding navigator.cpp
 
 * Create a new file named navigator.cpp
 
 * [Windows only] close VS
 
 * Edit `CMakeLists.txt` and uncomment (remove the `#` at the beginning) the last 3 lines
 
 * in the terminal, from the `build` directory run `cmake ..`
 
 * [Windows only] reload the solution file, now a new `navigator` target should appear. Build/execute as usual
 
 * [other os] build and execute as usual, i.e. `make navigator`, `./navigator` ...
 