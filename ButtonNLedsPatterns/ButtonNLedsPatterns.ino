/*
 
 */
 

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 13;     // the number of the pushbutton pin
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;
const int led4 = 11;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
   turnLeft();
   ledsOff();
   cruz();
   ledsOff();
   turnRight();
   
 } 

  else {
    // turn LED off:
  ledsOff();
  }
}

void ledsOff () {
      digitalWrite(led1, LOW);    
    digitalWrite(led2, LOW);   
    digitalWrite(led3, LOW);    
    digitalWrite(led4, LOW);     
}

void turnLeft (){
    int delayVal = 80;
 
    for (int x=0 ; x <3 ; x++){
    digitalWrite(led1, HIGH);    
    digitalWrite(led4, LOW);
    delay(delayVal);
    
    digitalWrite(led1, LOW);    
    digitalWrite(led2, HIGH);
    
    delay(delayVal);
    
    digitalWrite(led2, LOW);    
    digitalWrite(led3, HIGH);
    
    delay(delayVal);
    
    digitalWrite(led3, LOW);    
    digitalWrite(led4, HIGH);  
    
    delay(delayVal);

    }
     
}

void turnRight (){
   
    int delayVal = 80;
 
    for (int x=0 ; x < 3 ; x++){
    digitalWrite(led1, LOW);    
    digitalWrite(led4, HIGH);
    delay(delayVal);
    
    digitalWrite(led3, HIGH);    
    digitalWrite(led4, LOW);
    
    delay(delayVal);
    
    digitalWrite(led2, HIGH);    
    digitalWrite(led3, LOW);
    
    delay(delayVal);
    
    digitalWrite(led1, HIGH);    
    digitalWrite(led2, LOW);  
    
    delay(delayVal);

    }
    
     
}
 
void cruz () {
    for (int x=0 ; x < 3 ; x++){ 
    digitalWrite(led4, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW); 
    delay(80);
    digitalWrite(led4, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);  
    delay(80);
    }
}
