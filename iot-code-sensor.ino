#pin2
#pin3
void setup()
{
  pinMode(pin2,OUTPUT);
  pinMode(pin3,INPUT);
  serial.begin(9600);
  
}

void loop()
{
  digitalWrite(pin3,LOW);
  delayMicroseconds(2); 
  //
  digitalWrite(pin3,HIGH);
  delayMicroseconds(10); 
  digitalWrite(pin3,LOW);
  //
  duration = pulseIn(pin2,HIGH);
  distance = duration*
  //
  serial.print(distance);
  serial.print("cm");
  
}