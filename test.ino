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
void setup() {
  Serial.begin(9600);
  Serial.print("Hello MDT");
}

void loop() {

}

3. complete

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
