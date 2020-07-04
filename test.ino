1. complete

int buzzer = 10;

void setup() {
  pinMode(buzzer, OUTPUT);
  tone(buzzer, 800,200);
    delay(400);
    noTone(buzzer);
  
}

void loop() {
  
}


2. complete
int buzzer = 10;
void setup() {
  Serial.begin(9600);
  Serial.print("Hello MDT");
}

void loop() {

}

3. complete
int buzzer = 10;
int mt=3;
int mt1=4;
void setup(){
  Serial.begin(9600);
  pinMode(mt,OUTPUT);
  pinMode(mt1,OUTPUT);
  digitalWrite(mt,LOW);
  digitalWrite(mt1,HIGH);
  delay(2000);
  Serial.print("TURN CCW");
}

void loop(){
  
}

4. complete

int mt=3;
int mt1=4;
void setup(){
  Serial.begin(9600);
  pinMode(mt,OUTPUT);
  pinMode(mt1,OUTPUT);
  digitalWrite(mt,HIGH);
  digitalWrite(mt1,LOW);
  delay(3000);
  Serial.print("TURN CCW");
}

void loop(){
  
}

5. complete

#include <Wire.h>               // Include I2C bus library
#include <LiquidCrystal_I2C.h>  // Include LCD-I2C bus library
LiquidCrystal_I2C lcd(0x27, 16, 2); 
int buzzer = 10;

void setup() {
  pinMode(buzzer, OUTPUT);


  lcd.init();                  // Start LCD operation
  lcd.backlight();              // Turn on backlight of LCD
  lcd.setCursor(3, 0);          // Set LCD home position
  lcd.print("Hello MDT");       // Print Humidity message
  delay(1000);
  lcd.clear();

    tone(buzzer, 800,200);
    delay(400);
    noTone(buzzer);
}
void loop(){
  
}

6. complete

#include <Wire.h>               // Include I2C bus library
#include <LiquidCrystal_I2C.h>  // Include LCD-I2C bus library
LiquidCrystal_I2C lcd(0x27, 16, 2); 
int buzzer = 10;

void setup() {
  pinMode(buzzer, OUTPUT);


  lcd.init();                  // Start LCD operation
  lcd.backlight();              // Turn on backlight of LCD
  lcd.setCursor(3, 0);          // Set LCD home position
  lcd.print("Hello MDT");       // Print Humidity message
  delay(1000);
  lcd.clear();
    delay(200);
    tone(buzzer, 800,200);
    delay(500);
    noTone(buzzer);
}
void loop(){
  
}

7. complete
int mt=3;
int mt1=4;
int sw=8;
int condition=1;
int sp=0;

void setup(){
  Serial.begin(9600);
  pinMode(sw,INPUT);
  pinMode(mt,OUTPUT);
  pinMode(mt1,OUTPUT);
  analogWrite(mt);
  analogWrite(mt1,LOW);
  delay(3000);
  Serial.print("TURN CCW");
}

void loop(){
  sw=digitalRead(8);
  if (sp < 1023){
    if (sw == HIGH){
      if (condition == 1){
        analogWrite(mt,sp);
        analogWrite(mt1,0);
        condition=0;
        sp = sp + 204;
      }
    }
    else if (sw == LOW){
      condition =1;
    }
  }
}
