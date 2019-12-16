# CS 207: Arduino Project
This repository is going to consist of the code used for the project I've done over the Fall 2019 semester for CS207, as well as the materials used and on how to replicate it.


I will be basing my project off of a project done by Jason Poel Smith from makezine.com. His project comprises of a toy water gun that shoots water out to anyone who may walk in front of it. It utilizes an infrared motion sensor and an Arduino. When a person walks in front of the PIR sensor, the sensor sends a signal to the Arduino which in turn activates a relay that is connected to the trigger and it then fires the gun. 


Along with that, I wanted to mount the turret on top of an ultrasonic vehicle. That way, it will be a mobile turret hunting down people to shoot water at. I will be following an ultrasonic car project done by a user called “DIY Builder” on YouTube. I liked his version of the project the best, and the way he did it was in a fairly simple and neat manner compared to some other projects I've seen

References:
Smith, Jason Poel. “Motion Activated Water Gun Turret: Make:” Make, Make: Projects, 20 Apr. 2015, https://makezine.com/projects/motion-activated-water-gun-turret/

DIY Builder. “How To Make A DIY Arduino Obstacle Avoiding Car At Home” Online video clip. YouTube. 20 Feb. 2019,  Web, https://www.youtube.com/watch?v=1n_KjpMfVT0

![alt text](https://i.imgur.com/36CgO3F.jpg)

# Repository Contents
This repository will contain all the matrials and requirements needed to build this project. That entails the librarys that need to be installed and the materials I used, all of which will have a link if you wanted to know the exact one I used.
# Requirements and Materials
- Motorized Nerf gun or water gun: [Amazon.ca](https://www.amazon.ca/gp/product/B00KERBL66/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)

- Two Arduino's: [Amazon.ca](https://www.amazon.ca/gp/product/B01EWOE0UU/ref=ppx_yo_dt_b_asin_title_o08_s00?ie=UTF8&psc=1)

- USB connector cable/power supply

- Relay: [Amazon.ca](https://www.amazon.ca/gp/product/B06XCKQ1M9/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)

- Jumper Wires: [Amazon.ca](https://www.amazon.ca/Preformed-Breadboard-Assorted-Prototyping-Circuits/dp/B07WR9N52Y/ref=sr_1_7?crid=WZQ4QDRDIZJV&keywords=jumper+wires+male+to+male&qid=1575763109&s=hi&sprefix=jumper+wires+ma%2Ctools%2C176&sr=1-7)

- Motor Driver Shield: [Amazon.ca](https://www.amazon.ca/gp/product/B01FXDWI9Y/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1)

- 4x Wheels: [Amazon.ca](https://www.amazon.ca/gp/product/B00Q6ZHCHM/ref=ppx_yo_dt_b_asin_title_o01_s01?ie=UTF8&psc=1)

- 4x TT Gear Motor: [Amazon.ca](https://www.amazon.ca/gp/product/B07DPNQMXS/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)

- Servo Motor

- Ultrasonic Sensor: [Amazon.ca](https://www.amazon.ca/gp/product/B01COSN7O6/ref=ppx_yo_dt_b_asin_title_o01_s01?ie=UTF8&psc=1)

- PIR Sensor: [Amazon.ca](https://www.amazon.ca/gp/product/B019SX734A/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)

- 2x Battery

- Battery Holder: [Amazon.ca](https://www.amazon.ca/gp/product/B07CM4N56Z/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1)

- A base that everything is going to be on top off: [Amazon.ca](https://www.lowes.ca/product/polycarbonate-acrylic-sheets/optix-008-in-x-8-in-x-10-in-clear-acrylic-sheet-55844)

- Soldering Iron

# Build Instructions
How to build it.

# Firmware Installation
For the motion activated water gun turret, all that needs to be done is to download the code labelled "motion_activated_turret.ino" and to upload it on the Arduino responsible for controlling the turret.

For the ultrasonic car, however, three libraries need to be installed.

- AFMotor Library: https://learn.adafruit.com/adafruit-motor-shield/library-install 

-NewPing Library: https://github.com/livetronic/Arduino-NewPing

Servo Library: https://github.com/arduino-libraries/Servo.git

From the links, the zip files of those libraries need to be dowloaded first. Then in the Arduino IDE, go to Sketch >> Include Library >> Highlight the zip files that you downloaded >> Restart the Arduino IDE and it should work and upload onto the Arduino for the ultrasonic vehicle.

# Usage
The ultrasonic car moves around and keeps scanning for objects in front of it. If it sees something, it will stop, look to the left and the right and redirect itself to be the best option. The motion activated water gun turret on top will try to detect movements through its PIR sensor. If it seens something move, the water gun will shoot out water but the ultrasonic vehicle will still be in motion while this is happening. The turret will stop shooting water after a little while and the whole process will repeat itself.
