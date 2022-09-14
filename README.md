# Heat Dustribution Over Time In Material Program

This program is designed to calculate the temperature distribution over time in material composed of two thin layers.
In this version, the temperature of each layer is set to one value and is considered the same on the entire layer.
The program was written in C++ in the Qt environment based on the implicit conservative finite difference scheme of the thermal equation.

Thermal equation, which used as basis for program, is one-dimensional. It allows to make calculations much easier and and less demanding to system resources, but this imposes a number of restrictions (layers must be thin and temperature along surface of the layers must be uniform). 

I wrote this program as my bachelor's graduate qualification work when I graduated from university with a degree in theoretical physics. "Implant final" phrase is in the name of the program because computing was to be used in biomedical applications.

# Folder contents

The first folder named "build-ImplantFinal-Desktop_Qt_6_1_3_ThickEnv(Complete_CurrentVersion)" contains ready-to-launch assembly. All you need to do is just download it and open implantFinal.exe file in the "...\build-ImplantFinal-Desktop_Qt_6_1_3_ThickEnv(Complete_CurrentVersion)\release\" directory. I have tested it and it worked fine (If it seems crashed after you clicked "Запустить" button, don't worry: it is just in calculating process. After a few seconds or minutes you will get the result). Also, intermediate calculations program saves in "heatCoord" folder which occures after first succesful run in folder with .exe

The second folder named "ImplantPost-Final_dimensionlessing" contains the source code of the program. If you want, you can watch it

That's all and have a good day :)