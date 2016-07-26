/*
Trying to run car
*/

int forward_pin  = 6;
int backward_pin = 7;
int left_pin     = 10;
int right_pin    = 11;

// These should match the values in Rccar.py
int FORWARD_COMMAND        = 1;
int BACKWARD_COMMAND       = 2;
int LEFT_COMMAND           = 3;
int RIGHT_COMMAND          = 4;
int FORWARD_RIGHT_COMMAND  = 6;
int FORWARD_LEFT_COMMAND   = 7;
int BACKWARD_RIGHT_COMMAND = 8;
int BACKWARD_LEFT_COMMAND  = 9;

// When self driving, it seems that
// delay_time = 100 for forward
// delay_time = 300 for forward_right
// delay_time = 300 for forward_left
// works the best

// When training, 
// delay_time = 600 for forward
// delay_time = 600 for forward_right
// delay_time = 600 for forward_left
// works the best

int delay_time = 600;
int command = 0;

void setup(){
  pinMode(forward_pin,  OUTPUT);
  pinMode(backward_pin, OUTPUT);
  pinMode(right_pin,    OUTPUT);
  pinMode(left_pin,     OUTPUT);
  reset();  
  Serial.begin(115200);
}



void loop(){
  reset();
  
  if (Serial.available() > 0){
    command = Serial.read();
    executeCommand(command);
  }
}

void moveForward()
{
  digitalWrite(forward_pin, LOW);  
  delay(delay_time);
}
void moveBackward()
{
  digitalWrite(backward_pin, LOW);
  delay(delay_time);
}

void moveLeft()
{
  digitalWrite(left_pin, LOW);
  delay(delay_time);
}

void moveRight()
{
  digitalWrite(right_pin, LOW);
  delay(delay_time);
}

void moveForwardRight()
{
  digitalWrite(right_pin, LOW);
  digitalWrite(forward_pin, LOW); 
  delay(delay_time);
}

void moveForwardLeft()
{
  digitalWrite(forward_pin, LOW);
  digitalWrite(left_pin, LOW);
  delay(delay_time);
}

void moveBackwardRight()
{
  digitalWrite(right_pin, LOW);
  digitalWrite(backward_pin, LOW);
  delay(delay_time);
}

void moveBackwardLeft()
{
  digitalWrite(backward_pin, LOW);
  digitalWrite(left_pin, LOW);
  delay(delay_time);
}

void executeCommand(int command)
{
  Serial.println(command);
  switch(command){
    case 1: moveForward();  break;
    case 2: moveBackward(); break;
    case 3: moveLeft();     break;
    case 4: moveRight();    break;
    
    case 6: moveForwardRight();  break;
    case 7: moveForwardLeft();   break;
    case 8: moveBackwardRight(); break;
    case 9: moveBackwardLeft();  break;
    
    default:Serial.println("Invalid command");
  } 
}

void reset()
{
  Serial.println("reset");
  digitalWrite(forward_pin,  HIGH);
  digitalWrite(backward_pin, HIGH);
  digitalWrite(right_pin,    HIGH);
  digitalWrite(left_pin,     HIGH);   
}

