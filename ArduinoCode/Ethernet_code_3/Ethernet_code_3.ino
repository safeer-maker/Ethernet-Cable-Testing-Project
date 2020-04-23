/////////////////////////
int pin1 = 21;
int pin2 = 20;
int pin3 = 19;
int pin4 = 18;
int pin5 = 17;
int pin6 = 16;
int pin7 = 15;
int pin8 = 14;

int out1 = 2;
int out2 = 3;
int out3 = 4;
int out4 = 5;
int out5 = 6;
int out6 = 7;
int out7 = 8;
int out8 = 9;

int error = 10;
int cross = 11;
int straight = 12;
/////////////////////////
//int temp = 0;
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
    Serial.print ("\nPin_low pin is ");Serial.println(pin);
    digitalWrite(pin,LOW);  
}

void data_read (){
  count ++;
  Serial.print("\nIn data_read function");
  for (int x = 0; x < 8; x++)  
    if (analogRead(21-x) < 200)
    {
      Serial.print("\nData_read pin ");Serial.print(x+1);Serial.print(" is LOW");
      pins[x] = true;
      sequence[x] = count;
    }
}


int pin_inp(){
  int data = 0;
  for (int x = 0 ; x < 8 ; x++ ){
    delay(10);
    int temp = analogRead(21-x);
 //   Serial.print("\npin_inp analog read : "),Serial.print(21-x); Serial.print(" is : ");Serial.print(temp);
    if( temp > 800 )
      data++;
  }
  Serial.print("pin_inp data value : "),Serial.print(data);
  return data;
}


void setup() {
  // put your setup code here, to run once:
 /* pinMode (pin1,INPUT);
  pinMode (pin2,INPUT);
  pinMode (pin3,INPUT);
  pinMode (pin4,INPUT);
  pinMode (pin5,INPUT);
  pinMode (pin6,INPUT);
  pinMode (pin7,INPUT);
  pinMode (pin8,INPUT);
*/
  pinMode (error,OUTPUT);
  pinMode (cross,OUTPUT);
  pinMode (straight,OUTPUT);
  
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
 
 {count = 0;          //Redeclearation of all variables
  pins [8] = {false};
  sequence [8] = {0};
  digitalWrite (error, LOW);
  digitalWrite (cross, LOW);
  digitalWrite (straight, LOW);
  }
  
  pin_low();
  int pin_in = pin_inp();
  if (pin_in >2){
    for (int x = 0 ; x < 8 ; x++){
      pin_low (2+x);
      data_read();
    }
    Serial.println ("\npins");  
    for (int x = 0;  x < 8; x++)
      Serial.print(pins[x]);
    
    Serial.println ("\nSequence");
    for (int x = 0;  x < 8; x++)
      Serial.print(sequence[x]);

    for (int x = 0; x <8 ;x++)
      if (pins[x] == false){
        Serial.print("Any Wire is not connected");
        digitalWrite (error, HIGH);
        break;
      }
      
    if (sequence[0] == 1 && sequence[1] == 2 && sequence[2] == 3 && sequence[3] == 4 && sequence[4] == 5 && sequence[5] == 6 && sequence[6] == 7 && sequence[7] == 8){
      Serial.print("\nStraight connection\n");
      digitalWrite (straight, HIGH);
    }
    else if (sequence[0] == 1 && sequence[1] == 2 && sequence[2] == 7 && sequence[3] == 3 && sequence[4] == 5 && sequence[5] == 8 && sequence[6] == 4 && sequence[7] == 6){
      Serial.print("\nCross connection\n");
      digitalWrite (cross, HIGH);
    }else{
      Serial.print("\nAny Wire is not connected\n");
      digitalWrite (error, HIGH);
    }
      

    while (true){
      int temp = pin_inp();
      if (temp == 0)
        break;
      else
        continue;
      delay(100);
    }
  }

 // while(true)
    delay(130);
  
}
