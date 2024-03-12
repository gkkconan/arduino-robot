## INTRODUCTION
Miniobot is a tiny robot build for educational purposes with the intent of bringing people closer to the fascinating and complex world of robotics.
This bot can combine the art of 3D printing with the charm of the embedded systems.

It is composed by a structure in PLA, ideal for lightness and more importantly it's a bio-based material, 98.5% recyclable.
Inside it's equipped with the Arduino Nano microcontroller, mounted on an expansion shield which allows it linking additional servo motors and sensors.

Miniobot can move, raise its arm, reproduce sounds and songs, avoid obstacles and much more.

It represents the perfect harmony between education and robotics, programmed in like-C language with the Otto DIY project’s library.
The body was designed to perfectly contain the sensors and avoid small design error previously encountered from the original model.
All of this gives it a very nice and captivating appearance, similar to the minions from the movie “Despicable me”.



## DETAILED EXPLAINATION

### Requirements
- Arduino Nano (1pz)
- Expansion Board (1pz)
- Servo Motors (6pz)
- Bluetooth Module HC-06
- 3D printed model
- [Arduino IDE](https://www.arduino.cc/en/software)

### How to run it
First of all, is essential to download and install the [Otto DIY Robot per Arduino](https://github.com/OttoDIY/OttoDIYLib) library previously mentioned in the requirements. Thereafter is necessary to open the .zip file, upload it into the Arduino IDE following this steps: Sketch --> include library --> include library from .zip file.

Later open the Arduino file (with .ino extension) and allow, to the request, the creation of a dedicated folder.

**P.S.** To make MinioBot work with remote commands is necessary to also download a bluetooth serial terminal (this is the one we used: [Bluetooth Serial Terminal](https://apps.microsoft.com/detail/9wzdncrdfst8?ocid=pdpshare&hl=en-us&gl=US)).

### A bit of code explanation
The code can be subdivided into several main parts:
- Library importing
- variables and macro declarations
- servo motors movements

**3 fundamental libraries** have been implemented in this project:
- `Servo.h`: offers the possibility of changing the servo motors' angle with high fidelity
- `SoftwareSerial.h`: allows the serial communication with digital pins
- `Otto.h`: allows to implement important functions like `Otto.walk` to facilitate the developing

The variables and macros section contains variables for communication with modules, LEDs, servo motors, and musical notes.
In the notes section a frequency has been assigned to each note, in order to make the declaration of the melodies’ array easier to understand.
In the variables part there are the declaration for every servo motor and sensor.

In the project, furthermore, you can see it s partly controlled through bluetooth.
Various commands have been set which let you command the robot on remote mode by connecting it to a Bluetooth Serial Terminal.
The **available commands** are:
- `a`: raise/lower its right arm
- `b`: raise/lower its left arm
- `c`: raise/lower both its arms
- `f`: raise/lower both its arms simultaneously
- `g`: walking forward and stop if it is already walking
- `i`: sing “Happy birthday”
- `l`: walking backwards and stop if it is already walking
- `p`: sing *We Wish You a Merry Christmas*
- `n`: turn left (it does 5 steps)
- `o`: turn right (it does 5 steps)
- `r`: sing *Never Gonna Give You Up*

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
