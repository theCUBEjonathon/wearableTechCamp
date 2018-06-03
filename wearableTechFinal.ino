#include <Adafruit_CircuitPlayground.h>



float tempF;
int lightButton = A1;
int tempButton = A2;
int soundButton = A4;


void setup() {
  CircuitPlayground.begin();
  pinMode(lightButton, INPUT);
  pinMode(tempButton, INPUT);
  pinMode(soundButton, INPUT);
}

void loop() {
  Serial.begin(9600);
  int lightButtonRead = analogRead(lightButton);
  int tempButtonRead = analogRead(tempButton);
  int soundButtonRead = analogRead(soundButton);
  tempF = CircuitPlayground.temperatureF();
  CircuitPlayground.clearPixels();

  delay(500);

  Serial.print("lightButton: ");
  Serial.print(lightButtonRead);
  Serial.print("  tempButton: ");
  Serial.print(tempButtonRead);
  Serial.print("  soundButton: ");
  Serial.println(soundButtonRead);

if (lightButtonRead > 1000 && lightButtonRead < 1023 ){

  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 128, 128);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
 
  delay(1000);

  CircuitPlayground.clearPixels();
} 
else if(tempButtonRead > 1000 && tempButtonRead < 1023){
  if (tempF > 60 && tempF < 70){

  CircuitPlayground.setPixelColor(0,0xFF0000);
  CircuitPlayground.setPixelColor(1,0xFF0000);
  delay(1000);

  CircuitPlayground.clearPixels();
}
else if (tempF > 70 && tempF < 80){
  CircuitPlayground.setPixelColor(0, 0xFF0000);
  CircuitPlayground.setPixelColor(1, 0xFF0000);
  CircuitPlayground.setPixelColor(2, 0xFF0000);
  CircuitPlayground.setPixelColor(3, 0xFF0000);
  delay(1000);

  CircuitPlayground.clearPixels();
}
else if (tempF > 80 && tempF < 90){
  CircuitPlayground.setPixelColor(0, 0xFF0000);
  CircuitPlayground.setPixelColor(1, 0xFF0000);
  CircuitPlayground.setPixelColor(2, 0xFF0000);
  CircuitPlayground.setPixelColor(3, 0xFF0000);
  CircuitPlayground.setPixelColor(4, 0xFF0000);
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0xFF0000);
  delay(1000);

  CircuitPlayground.clearPixels();
}
else if (tempF > 90) {
  CircuitPlayground.setPixelColor(0, 0xFF0000);
  CircuitPlayground.setPixelColor(1, 0xFF0000);
  CircuitPlayground.setPixelColor(2, 0xFF0000);
  CircuitPlayground.setPixelColor(3, 0xFF0000);
  CircuitPlayground.setPixelColor(4, 0xFF0000);
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0xFF0000);
  CircuitPlayground.setPixelColor(7, 0xFF0000);
  CircuitPlayground.setPixelColor(8, 0xFF0000);
  CircuitPlayground.setPixelColor(9, 0xFF0000);
  delay(1000);

  //CircuitPlayground.clearPixels();
}
}
else if (soundButtonRead > 1000 && soundButtonRead < 1023){
  CircuitPlayground.playTone(500, 100);
  delay(1000);
}
else if (lightButtonRead > 1000 && tempButtonRead > 1000 && soundButtonRead > 1000){
   CircuitPlayground.clearPixels();
}
else{
  CircuitPlayground.clearPixels();
}






}
