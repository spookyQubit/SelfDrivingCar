# SelfDrivingCar


This project focuses on making a remote control toy car to drive on it's own without manual intervention. 

### Basic desing of the project

* The car is loaded with a RaspberryPi camera, which takes images of what the car is 'seeing' and streams the images to a server (my laptop). 
* Depending upon the input image, a classification model (logestic regression/convolutional neural network), running on the laptop, predicts the direction in which the car should move. 
* This information is then transmitted from the laptop to the remote control of the car using an Arduino. 

### Code Structre
* Rccar.py : This is the main file of the project. This can be run in two modes:  * GENERATE_TRAINING_DATA : In this mode, the program stores the incoming images received from RaspberryPi and the corresponding direction which the car makes as a result of keyboard strokes made by the user, and transmits the input direction to Arduino. 
  * SELF_DRIVE_CAR : In this mode, the code handles the incoming images from RaspberryPi, makes the prediction and transmits the predicted direction to Arduino.
* RaspberryPi -> pi_client.py : This file deals with sending images from RaspberryPi to the laptop. 

* Arduino -> receivePyCommandAndExecute.ino : This file handles the input from the laptop for transmitting the directions to the remote control car.


Ever since I heard Andrew Ng's lecture on machine learning where he mentions about [Alvin](https://www.youtube.com/watch?v=jet4vwPUfh8), I was fascinated to make an autonomous car myself, albeit a much smaller one!
  

<p align="center">
  <img src="https://github.com/spookyQubit/SelfDrivingCar/blob/master/setup.jpg" width="350"/>
</p>
