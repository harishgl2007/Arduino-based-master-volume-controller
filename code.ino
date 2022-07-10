const int trigPin = 2;
const int echoPin = 4;
void setup() { 
Serial.begin(9600);} 
void loop()
{
long duration, inches, cm, mm;
pinMode(trigPin, OUTPUT); 
digitalWrite(trigPin, LOW); 
delayMicroseconds(2000); 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(1000); 
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT); 
duration = pulseIn(echoPin, HIGH);

cm = microsecondsToCentimeters(duration);


Serial.print(cm);
//Serial.print("cm, ");

Serial.println(); 
delay(1000);
}

long microsecondsToCentimeters(long microseconds)
{return microseconds / 29 / 2;}
