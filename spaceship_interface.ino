// the code below is for a program which controls the behaviour of LEDs based on a switch (mimicking a control panel!)

int switchState = 0;

void setup(){

  // the pinMode() function configures the digital pins to be either inputs or outputs

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

// loop() is where to check for voltage on the inputs

void loop(){

  // the digitalRead() function checks a chosen pin for voltage, it stores the state of the pin in the switchState variable

  switchState = digitalRead(2);

  if (switchState == LOW){
 
    // the button is not pressed

    digitalWrite(3, LOW); // green LED
    digitalWrite(4, LOW); // yellow LED
    digitalWrite(5, HIGH); // red LED

  }

  else {

    // the button is pressed

    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

    delay(500); // wait for 0.5 sec

    // toggle the LEDs
    
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(500);

  }
} // go back to the beginning of the loop



