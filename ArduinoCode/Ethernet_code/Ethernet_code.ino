int count = 0;
int falt = 0;
/////////////////////////// 
// Decleration of Output Pins
int out1 = 2;
int out2 = 3;
//////////////////////////
// Declearation of Input Pins
int inp1 = A0;
int inp2 = A1;
//////////////////////////
void output(int pin = 0){
  digitalWrite(out1 , LOW);
  digitalWrite(out2 , LOW);
  delay(100);

  digitalWrite(pin, HIGH);
}

int input (){
  count = 0;
  int pin_no = 0;
  if (digitalRead(inp1)){
      count++;
      pin_no = 1;
      delay(10);
    }
  if (digitalRead(inp2)){
      count++;
      pin_no = 2;
      delay(10);
  }
  return pin_no;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode (out1 ,OUTPUT);
  pinMode (out2 ,OUTPUT);
  pinMode (inp1 ,INPUT);
  pinMode (inp2 ,INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
