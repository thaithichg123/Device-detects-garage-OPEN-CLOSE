# General Idea
### garage CLOSES![image](https://user-images.githubusercontent.com/36321686/118550064-e93fac00-b721-11eb-8474-3ce854f59069.png)
<br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
### garage OPENS![image](https://user-images.githubusercontent.com/36321686/118550300-1ee49500-b722-11eb-8728-6b711905bded.png)
<br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
### Notification![image](https://user-images.githubusercontent.com/36321686/118550853-d679a700-b722-11eb-882b-f7037a8b4241.png)
<br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
### Architecture ![image](https://user-images.githubusercontent.com/36321686/118550605-800c6880-b722-11eb-84ee-6f5d9013bdf2.png)


## Introduction
This device is a mini security system that will detect if the garage is opened and send a message to alarm the owner.The device is built from two important components: a Seeeduino and a range sensor. The range sensor will detect whenever the distance from the sensor to the garage is changed. It will send a single pulse signal to trigger the Seeeduino Cloud device to send messages to the owner's phone via wifi. We will use IFFFT to send the notifications by triggering the event.<br/>

## Notification
Watch the video for set up<br/>
https://www.youtube.com/watch?v=fRfZ0XPjT0o

## Wiring
![image](https://user-images.githubusercontent.com/36321686/118550507-60754000-b722-11eb-81c4-30e8982765d7.png)
<br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
## Components
### 1) Seeeduino Cloud (compatible with Arduino Yun) ![image](https://user-images.githubusercontent.com/36321686/118551823-c0b8b180-b723-11eb-9e72-f25f36305104.png)
<br/><br/><br/><br/><br/><br/><br/>
### 2) Range sensor HC-SR04![image](https://user-images.githubusercontent.com/36321686/118552088-1725f000-b724-11eb-931a-e38ea1742e7d.png)
 


