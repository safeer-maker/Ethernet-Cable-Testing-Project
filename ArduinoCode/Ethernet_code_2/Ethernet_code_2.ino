/////////////////////////
int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int pin5 = 6;
int pin6 = 7;
int pin7 = 8;
int pin8 = 9;

int out1 = A7;
int out2 = A6;
int out3 = A5;
int out4 = A4;
int out5 = A3;
int out6 = A2;
int out7 = A1;
int out8 = A0;
/////////////////////////
int temp = 0;
int count = 0;
bool pins [8] = {false};
int sequence [8] = {0};
/////////////////////////
void pin_low(int pin = 0){
    digitalWrite(out1,HIGH);
    digitalWrite(out2,HIGH);
    digitalWrite(out3,HIGH);
    digitalWrite(out4,HIGH);
    digitalWrite(out5,HIGH);
    digitalWrite(out6,HIGH);
    digitalWrite(out7,HIGH);
    digitalWrite(out8,HIGH);
    delay(10);
    Serial.print ("Pin_low pin is ");Serial.println(pin);
    digitalWrite(pin,LOW);
    
}

void data_read (){
  count ++;
  Serial.print("In data_read function");
  for (int x = 0; x < 8; x++)  
    if (!digitalRead(2+x))
    {
      Serial.print("Data_read pin ");Serial.print(x+1);Serial.print(" is LOW");
      pins[x] = true;
      sequence[x] = count;
    }
}


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

  pin_low(out1);
  data_read();

  pin_low(out2);
  data_read();

  pin_low(out3);
  data_read();

  pin_low(out4);
  data_read();

  pin_low(out5);
  data_read();

  pin_low(out6);
  data_read();

  pin_low(out7);
  data_read();

  pin_low(out8);
  data_read();

  

  Serial.println ("\npins");  
  for (int x = 0;  x < 8; x++)
    Serial.print(pins[x]);
    
  Serial.println ("\nSequence");
  for (int x = 0;  x < 8; x++)
    Serial.print(sequence[x]);
  while (true)
  delay(1000);
}
