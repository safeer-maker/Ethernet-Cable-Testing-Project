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

  delay(100);
}
