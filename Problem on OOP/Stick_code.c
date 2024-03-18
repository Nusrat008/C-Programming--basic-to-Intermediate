int sensorPin = A1;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor


#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

#define vib 5

#define MQ2pin (0)
float mqValue;

unsigned long p=0;
unsigned long mq_t=0;

#define bzr 13
void setup() {

 pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
 pinMode(echoPin, INPUT);
pinMode(bzr, OUTPUT);
pinMode(vib, OUTPUT);
Serial.begin(9600);
  delay(5000);
  // put your setup code here, to run once:
}

void loop()
{
ultrasonic();
water();
fire();
}


void ultrasonic()
{
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


    if(distance<100){
   // buzzer();
           digitalWrite(bzr,HIGH);
  digitalWrite(vib,HIGH);
  delay(300);
  digitalWrite(bzr,LOW);
  digitalWrite(vib,LOW);
}
}


void water()
{
  sensorValue = analogRead(sensorPin);
  delay(100);
  Serial.println(sensorValue);
  if(sensorValue<700){
  buzzer();

}
}

void buzzer()
{

  digitalWrite(bzr,HIGH);
  digitalWrite(vib,HIGH);
  delay(300);
  digitalWrite(bzr,LOW);
  digitalWrite(vib,LOW);

 /*if (millis() - p>= 500)
  {
    tone(bzr,2000,HIGH);
    digitalWrite(vib,HIGH);
    p=millis();
  }*/
 }


void fire()
{
  if (millis() - mq_t >= 2000)
  {
   sensorValue = analogRead(MQ2pin); // read analog input pin 0

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);

  if(sensorValue > 400)
  {
    Serial.print(" | Smoke detected!");
           digitalWrite(bzr,HIGH);
  digitalWrite(vib,HIGH);
  delay(500);
  digitalWrite(bzr,LOW);
  digitalWrite(vib,LOW);

  //buzzer();
  }
}
  }
  }
