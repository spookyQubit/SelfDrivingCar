# SelfDrivingCar


This project focuses on using machine learning to make a remote control toy car to drive on it's own without manual intervention. 

### Basic desing of the project

* The car is loaded with a RaspberryPi camera, which takes images of what the car is 'seeing' and streams the images to a server (my laptop). 
* Depending upon the input image, a classification model (logestic regression/convolutional neural network), running on the laptop, predicts the direction in which the car should move. 
* This information is then transmitted from the laptop to the remote control of the car using an Arduino. 

### Code Structure
* Rccar.py : This is the main file of the project. The script can be run in the following two modes
  * GENERATE_TRAINING_DATA : In this mode, the program stores the incoming images received from RaspberryPi and the corresponding direction which the car makes as a result of keyboard strokes made by the user, and transmits the input direction to Arduino. 
  * SELF_DRIVE_CAR : The code handles the incoming images from RaspberryPi, makes the prediction and transmits the predicted direction to Arduino.
* learningModels.ipynb : Deals with data analysis and selecting the classification model.
* RaspberryPi -> pi_client.py : Sends images from RaspberryPi to the laptop. 

* Arduino -> receivePyCommandAndExecute.ino : Handles the input from the laptop for transmitting the directions to the remote control car.

### Acknowledgement

* Ever since I heard Andrew Ng's lecture on machine learning where he mentions about [Alvin](https://www.youtube.com/watch?v=jet4vwPUfh8), I was fascinated to make an autonomous car myself. So here it is, albeit a much smaller one!
* I found the book: Python Machine Learning by Sabastian Raschka very helpful for data analysis and for learning machine learning techniques in sknn.  
* A lot of the project was putting things together from what others have already done in some way or another. This project was greatly inspired from a similar project by Wang Zheng.
* Kenny Fong for helping me with concepts in TCP/IP connections. 
* Sneha Rath for helping me a lot with setup and video.   

<p align="center">
  <img src="https://github.com/spookyQubit/SelfDrivingCar/blob/master/setup_images/setup2.jpg" width="350"/>
  <img src="https://github.com/spookyQubit/SelfDrivingCar/blob/master/setup_images/car.jpeg" width="350"/>
</p>

[![Video](https://github.com/spookyQubit/SelfDrivingCar/blob/master/setup_images/play-sign.jpg)](http://www.youtube.com/watch?v=T-D1KVIuvjA)
