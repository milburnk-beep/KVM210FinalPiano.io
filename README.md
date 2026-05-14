# Final Project

### Why did I do this
I thought that the touch sensor capabilities of the breadboard was really cool and I wanted to do something with it. When I learned that there was a speaker in the kit that could lay different frequencies based on the code, I knew I wanted to build a little piano. This is a fun little project for anyone who is into computers or tech as well as sound because it lets you begin to understand how computers take in signals and return frequencies.

### What do you need?
- 12 Jumpers (preferably 7 or 8 different colors)
- A Passive Buzzer
- A NPN Transistor (S8050)
- An ESP32 Breadboard and Arduino IDE installed and running properly on your compute

### How to build it:
![Circuit](circuit.jpg)
Keep in mind that you will need to space out your "key" jumpers and having them be different colors will help a lot. Also, the leftmost pin on the transistor is grounded, the middle pin is connected to channel 21, and the rightmost pin is connected to the buzzer. The other buzzer pin is powered on the 5V side of the breadboard.

![UpCloseCircuit](circuitClose.jpg)
The 8 "key" jumpers are on channels 8, 3, 9, 10, 11, 12, 13, and 14. They skip 46 as it has no touch sensor.

### Challenges and Interests in C
The most interesting part of this project (and the most frustrating) was that each channel required different touch threshholds which I had to find manually. However, after finding each individual threshhold I was able to pick a number that satisfied all of the threshholds to simplify the code. I also had to create a unique boolean condition for each channel so that they wouldn't cancel each other out. 
