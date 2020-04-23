//////////////////////////
int pin1 = 14;
int pin2 = 15;
int pin3 = 16;
int pin4 = 17;
int pin5 = 18;
int pin6 = 19;
int pin7 = 20;
int pin8 = 21;

int out1 = 2;
int out2 = 3;
int out3 = 4;
int out4 = 5;
int out5 = 6;
int out6 = 7;
int out7 = 8;
int out8 = 9;
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
 /* if (temp == 4){
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
*/
  Serial.print(analogRead(pin1));
  Serial.print("  ");
  Serial.print(analogRead(pin2));
  Serial.print("  ");
  Serial.print(analogRead(pin3));
  Serial.print("  ");
  Serial.print(analogRead(pin4));
  Serial.print("  ");
  Serial.print(analogRead(pin5));
  Serial.print("  ");
  Serial.print(analogRead(pin6));
  Serial.print("  ");
  Serial.print(analogRead(pin7));
  Serial.print("  ");
  Serial.print(analogRead(pin8));
  Serial.print("  \n");
//  Serial.println(temp);
  
  temp++;
  delay(100);
}
