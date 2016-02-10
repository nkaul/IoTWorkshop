#include <DHT.h>
#define DHTTYPE DHT11

//Set’s the pin we’re reading data from and initializes the sensor.
int DHTPIN = 2;
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  //Tell the arduino we’ll be reading data on the defined DHT pin
  pinMode(DHTPIN, INPUT);
  
  //Open the serial port for communication
  Serial.begin(9600);
  
  //start the connection for reading.
  dht.begin();
}

void loop() {
  //declare variables for storing temperature and humidity and capture
  float h = dht.readHumidity();
  float t = dht.readTemperature(true);
  
  //output data as humidity,temperature
  Serial.print(h);
  Serial.print(",");
  Serial.println(t);  //println includes linefeed
  
  //sleep for two seconds before reading again
  delay(2000);
}
