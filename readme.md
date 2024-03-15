## INTRODUCTION
Miniobot is a tiny robot build for educational purposes with the intent of bringing people closer to the fascinating and complex world of robotics.
This bot can combine the art of 3D printing with the charm of embedded systems.

It is composed by a structure in PLA, a 98.5% recyclable bio-based material ideal for lightness.
It mounts an Arduino Nano microcontroller on an expansion shield which allows it to use additional servo motors and sensors.

Miniobot can move, raise its arms, reproduce sounds and songs, avoid obstacles and much more!

It represents the perfect harmony between education and robotics, programmed in C-like language with the Otto DIY project library.
The body was designed to perfectly contain the sensors and avoid small design errors previously encountered in the original model.
All of this gives it a very nice and captivating look, alike the minions from “Despicable me” movie.



## DETAILED EXPLAINATION

### Requirements
- Arduino Nano (1pz)
- Expansion Board (1pz)
- Servo Motors (6pz)
- Bluetooth Module HC-06
- 3D printed model
- [Arduino IDE](https://www.arduino.cc/en/software)

### How to run it
First, it is essential to download and install the [Otto DIY Robot per Arduino](https://github.com/OttoDIY/OttoDIYLib) library mentioned above in the requirements. Thereafter it is necessary to open the .zip file, upload it into the Arduino IDE following this steps: Sketch --> include library --> include library from .zip file.

Then, open the Arduino file (with .ino extension) and allow, to the request, the creation of a dedicated folder.

**P.S.** To make MinioBot work remotely is also necessary to download a bluetooth serial terminal (this is the one we used: [Bluetooth Serial Terminal](https://apps.microsoft.com/detail/9wzdncrdfst8?ocid=pdpshare&hl=en-us&gl=US)).

### A bit of code explanation
The code can be subdivided into several main parts:
- library importing
- variables and macro declarations
- servo motors' movements

**3 fundamental libraries** were implemented in this project:
- `Servo.h`: offers the possibility of changing the servo motors' angle with high fidelity
- `SoftwareSerial.h`: allows the serial communication via digital pins
- `Otto.h`: allows to implement important functions like `Otto.walk()` to facilitate the development

The variables and macros section contains variables for communication between modules, LEDs, servo motors, and musical notes.
In the notes section a frequency has been assigned to each note, in order to make the declaration of the melodies’ array easier to understand.
In the variables part there are the declaration for every servo motor and sensor.

In the project, furthermore, you can see it s partly controlled through bluetooth.
Various commands have been set which let you command the robot on remote mode by connecting it to a Bluetooth Serial Terminal.
The **available commands** are:
- `a`: raise/lower its left arm
- `b`: raise/lower its right arm
- `c`: raise/lower both its arms
- `d`: raise/lower both its arms simultaneously
- `e`: walking forward and stop if it's already walking
- `f`: walking backwards and stop if it's already walking
- `g`: turn left (it does 5 steps)
- `h`: turn right (it does 5 steps)
- `i`: sing *Happy birthday*
- `j`: sing *We Wish You a Merry Christmas*
- `k`: sing *Never Gonna Give You Up*

### Features
- [x] Moves
	- [x] raise/lower its right arm
	- [x] raise/lower its left arm
	- [x] raise/lower both its arms
	- [x] raise/lower both its arms simultaneously
	- [x] walk forward
	- [x] walk backwards
	- [x] turn left (doing 5 steps)
	- [x] turn right (doing 5 steps)
- [ ] Melodies
	- [ ] Star Wars Theme
	- [ ] Tetris Theme
	- [ ] Pink Panther Theme
	- [x] Happy Birthday
	- [x] We Wish You a Merry Christmas
	- [ ] Fur Elise - Beethoven
	- [x] Rick Astley - Never Gonna Give You Up