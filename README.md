# SelfDrivingCar


This project focuses on making a remote control toy car to drive on it's own without manual intervention. 

The basic desing of the project is as follows:

* The car is loaded with a RaspberryPi camera, which takes images of what the car is 'seeing' and streams the images to a server (my laptop). 
* Depending upon the image, a classification model (logestic regression/convolutional neural network), running on the laptop, predicts the direction in which the car should move. 
* This information is then transmitted from the laptop to the remote control of the car using an Arduino. 


Ever since I heard Andrew Ng's lecture on machine learning where he mentions about [Alvin](https://www.youtube.com/watch?v=jet4vwPUfh8), I was fascinated to make an autonomous car myself, albeit a smaller one.  

<p align="center">
  <img src="https://github.com/spookyQubit/SelfDrivingCar/blob/master/setup.jpg" width="350"/>
</p>
