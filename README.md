# Installation of make, g++, CMake and OpenCV on Windows

## Installing g++ and make
1. Download the installer
[MSYS2](https://www.msys2.org/)
2. Follow the steps mentioned in the link above
3. After installating In the Windows search bar, type 'settings' to open your Windows Settings.
4. Search for Edit environment variables for your account.
5. Choose the Path variable and then select Edit, click new and paste ```C:\msys64\mingw64\bin``` if 
the installation is done at the default location.
6. Again click new and paste ```C:\msys64\usr\bin``` which is the path for make.exe
6. Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH 
location to be available.

## Installing CMake
1. Insall from Binary distributions
[CMake](https://cmake.org/download/)
2. Run the installer.
3. When asked for, select “Add CMake to the system PATH for all users”.
4. Complete the installation.
5. Reopen any console windows for the new PATH location to be available.

## Installing OpenCV
OpenCV by default provides binaries to compile with visual studio which is available for download
[here](https://github.com/opencv/opencv/releases/tag/4.5.3)
1. Download OpenCV for windows from above link by downloading opencv-4.5.3-vc14_vc15.exe from the 
link above and extract it in C:\opencv
### Installing OpenCV from source to compile with MinGW on Windows
2. Next download the source code (zip) from the same above link and extract in desired folder
3. Inside the opencv-4.5.3 folder create a new folder named build.
4. In command prompt navigate to the above directory and type ```cmake -G "MSYS Makefiles" ..```
5. Next type ```mingw32-make install```. This will take time to complete.
6. Once it has completed navigate to ``` ``` and copy the folder mingw and paste it in the directory 
```C:\opencv\build\x64``` where you can see v14 and vc15 folders.
7. Now add ```C:\opencv\build\x64``` and ```C:\opencv\build\x64``` to PATH by following the steps 
mentioned in the installation process for g++ and make
8. Reopen any console windows for the new PATH location to be available.

## Check proper Installation
1. Clone the repository using
```
git clone https://github.com/Abhishek-Nalawade/Installation-of-CMake-g-OpenCV-on-Windows
```
2. Create build folder.
3. ```cd build``` and type ```cmake -G "MSYS Makefiles" ..```
3. Next type ```make``` and after completion type ```shell-app```. This should display the image if 
the installation was successfull.
4. If the image is displayed OpenCV is now ready to be used with any other desired C++ projects with 
MinGW on windows.