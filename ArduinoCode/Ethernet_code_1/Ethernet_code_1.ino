//////////////////////////
int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int pin5 = 6;
int pin6 = 7;
int pin7 = 8;
int pin8 = 9;

int out1 = A5;
int out2 = A4;
int out3 = A3;
int out4 = A2;
int out5 = A1;
int out6 = A0;
int out7 = 11;
int out8 = 12;
/////////////////////////
int temp = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (pin1,INPUT);
  pinMode (pin2,INPUT);
  pinMode (pin3,INPUT);
  pinMode (pin4,INPUT);
  pinMode (pin5,INPUT);
  pinMode (pin6,INPUT);
  pinMode (pin7,INPUT);
  pinMode (pin8,INPUT);

  pinMode (out1,OUTPUT);
  pinMode (out2,OUTPUT);
  pinMode (out3,OUTPUT);
  pinMode (out4,OUTPUT);
  pinMode (out5,OUTPUT);
  pinMode (out6,OUTPUT);
  pinMode (out7,OUTPUT);
  pinMode (out8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (temp == 4){
    digitalWrite(out1,HIGH);
    digitalWrite(out2,HIGH);
    digitalWrite(out3,HIGH);
    digitalWrite(out4,HIGH);
    digitalWrite(out5,HIGH);
    digitalWrite(out6,HIGH);
    digitalWrite(out7,HIGH);
    digitalWrite(out8,HIGH);
  }
  if (temp > 10){
      temp = 0;
  }if (temp == 0){
    digitalWrite(out1,LOW);
    digitalWrite(out2,LOW);
    digitalWrite(out3,LOW);
    digitalWrite(out4,LOW);
    digitalWrite(out5,LOW);
    digitalWrite(out6,LOW);
    digitalWrite(out7,LOW);
    digitalWrite(out8,LOW);
    
  }

  Serial.print(digitalRead(pin1));
  Serial.print(digitalRead(pin2));
  Serial.print(digitalRead(pin3));
  Serial.print(digitalRead(pin4));
  Serial.print(digitalRead(pin5));
  Serial.print(digitalRead(pin6));
  Serial.print(digitalRead(pin7));
  Serial.println(digitalRead(pin8));
  Serial.println(temp);
  
  temp++;
  delay(100);
}
