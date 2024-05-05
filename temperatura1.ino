#include <LiquidCrystal.h>
#define sensor A0
LiquidCrystal display(2,3,4,5,6,7);

void setup()
{
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  display.begin(16,2);
  
  display.print("termometro");
  display.setCursor(0,1);
  display.print("digital");
  delay(1000);
  display.clear();
  
  
}

void loop(){
 	initDisplay();
  
}


void initDisplay(){
  display.setCursor(3,0);
  display.print(tempC());
  display.setCursor(9,0);
  display.print("C");
}

float tempC(){
	float input = analogRead(sensor);
  	float voltage = 5*input/1023;
  	return (voltage - 0.5)*100 ;
}