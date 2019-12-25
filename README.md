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
The motion activated turret is not too difficult to build but it does require time and effort to set it up. The main requirement for the “turret” is that it has to be motorized and have the ability to continuously shoot when the trigger is being pressed. The water gun I bought has an external switch and it had three buttons on it; swivel left, swivel right and shoot. 

![alt text](https://i.imgur.com/MOtlcCS.jpg)

The first step is to open the housing of the external switch. This did take considerable effort because even after the two screws on the back were removed, it had to be pried open. Keeping in mind that the circuit inside should not be damaged, this step took me 20-30 minutes.

![alt text](https://i.imgur.com/wiOjsT0.jpg)

The next step is to solder an extension wire onto each switch terminal. The picture of the circuit can be seen above. The switch terminals tend to be marked on the circuit board and there’s also one common positive terminal. My water gun had three switches, since it could swivel left and right and for firing. So with those three switches and one common positive terminal, I had to solder four extension wires. In the picture below, I show what the circuit looked like after I soldered extension wires on it.

![alt text](https://i.imgur.com/Fr3Vpft.jpg)

To control the water gun from the Arduino, it needs to go through a relay. A relay are switches that open and close electronically, so this allows us to control the water gun depending on what the output of the PIR sensor is. If the sensor sees something, the switch opens and it directs the water gun to shoot. I used a 4 channel relay, but for my use, I only needed three relays due to there being three buttons. The picture below shows how I was testing the relay and the water gun.

![alt text](https://i.imgur.com/tgPJiiE.jpg)

The difficulty I had in the next step was that the relay was using the 5V pin on the Arduino, and the PIR sensor needed that pin as well. So one way to overcome this would have been to use an Arduino Nano to supply the power for that sensor and to create a master-slave relationship. This is a step that I did not do.

The ultrasonic is not too difficult to build but a soldering iron is required for the gear motors. The first step would be to solder extension wires to the gear motor and each motor will require two wires; a ground and positive. After doing do, they need to be mounted to a surface i.e the body of the vehicle, which in my case was an acrylic sheet. I had used hot glue for it. Then it’s a matter of attaching the wheels to each rotor. I had drilled holes through the acyclic sheet so that I could push the wires from the gear rotors through them for a cleaner look. The picture below shows what the drill holes looked like and the overall design of it. It is a little hard to see though, because of how reflective the sheet is.

![alt text](https://i.imgur.com/97okaNo.jpg)

The next step is to attach the driver motor shield to the Arduino. To attach them, all the pins in the shield need to line up with that on the Arduino and then it is just a matter of connecting them. After doing so, I attached the Arduino on the acrylic sheet via hot glue. The Arduino was on a plastic case so I was able to do that with no problem but the other way to mount the Arduino on a surface is to drill holes on the surface being used and to use screws to secure the Arduino in place.

The next step is to attach the wires from the gear motors to the motor driver shield. The motor driver shield I used had four bi-directional DC motors, each of which were marked by M1, M2, M3 and M4. Since it is bi-directional, the wires from the gear rotors can go into either port on each DC motor and it will still work the same.

The servo motor needs to be connected to the shield next. It’s best to hot glue the servo motor at the very front of the surface being used and the forward direction of the vehicle, since the ultrasonic will be mounted on top of it to see obstacles ahead. The ultrasonic sensor is very directional and it calculates the distance between an object in front by how long it takes the signal from the sensor to bounce back. The servo motor’s wirings will be connected to the motor driver shield on the port labelled “SERVO” which should be at the top left corner.

The ultrasonic sensor is to be mounted on top of the servo. I did that by cutting out the corner of an ice cream box and attaching to ultrasonic on that. I then applied a very minimal amount of hot glue on the white plastic of the servo and mounted the ultrasonic sensor on top of that. The ultrasonic sensor has four connections: VCC (power), ground, trigger pin (input) and echo pin (output). All of these need to be connected to the shield. The VCC will be connected to the 5V, ground goes to GND, the trigger pin goes to Analog pin 0 and the echo pin is on Analog pin 1. All of the pins are labeled on the shield.

After all of that, an external power is required for the ultrasonic car. A battery holder with a barrel port can be attached to the Arduino to power it. I mounted the battery housing at the bottom of the acrylic sheet. The picture below shows the ultrasonic car being completed.

![alt text](https://i.imgur.com/qAXOShY.jpg)

The final step is the plug the Arduino into a computer to upload the code onto it. Before that, a few libraries have to be installed. In the code, the libraries needed to be installed are linked and it goes into how it can be installed. After that, upload it on the Arduino and it should work.

Then to bring it all together, the water gun and the Arduino and the relay should be mounted on top of the ultrasonic car. Upload the code for the water gun turret and it should be good to go. 

# Firmware Installation
For the motion activated water gun turret, all that needs to be done is to download the code labelled "motion_activated_turret.ino" and to upload it on the Arduino responsible for controlling the turret.

For the ultrasonic car, however, three libraries need to be installed.

- AFMotor Library: https://learn.adafruit.com/adafruit-motor-shield/library-install 

-NewPing Library: https://github.com/livetronic/Arduino-NewPing

Servo Library: https://github.com/arduino-libraries/Servo.git

From the links, the zip files of those libraries need to be dowloaded first. Then in the Arduino IDE, go to Sketch >> Include Library >> Highlight the zip files that you downloaded >> Restart the Arduino IDE and it should work and upload onto the Arduino for the ultrasonic vehicle.

# Usage
The ultrasonic car moves around and keeps scanning for objects in front of it. If it sees something, it will stop, look to the left and the right and redirect itself to be the best option. The motion activated water gun turret on top will try to detect movements through its PIR sensor. If it seens something move, the water gun will shoot out water but the ultrasonic vehicle will still be in motion while this is happening. The turret will stop shooting water after a little while and the whole process will repeat itself.
