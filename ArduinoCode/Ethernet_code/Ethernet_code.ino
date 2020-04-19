int count = 0;
int falt = 0;
/////////////////////////// 
// Decleration of Output Pins
int out1 = 2;
int out2 = 3;
//////////////////////////
// Declearation of Input Pins
int inp1 = A5;
int inp2 = A4;
//////////////////////////


void output(int pin = 0){
  digitalWrite(out1 , LOW);
  digitalWrite(out2 , LOW);
  delay(50);

  digitalWrite(pin, HIGH);
  Serial.print("OUTPUT pin no = ");Serial.println (pin);
  delay(50);
}

int input (){
  count = 0;
  int pin_no = 0;
  bool data1 = digitalRead(inp1);
  Serial.print ("Input from data1 is ");Serial.println(data1);
  if (data1){
      Serial.println("Input  inp 1");
      count++;
      pin_no = 1;
      delay(10);
    }
  bool data2 = digitalRead(inp2);
  Serial.print ("Input from data1 is ");Serial.println(data1);
  if (data2){
      Serial.println("Input  inp 2");
      count++;
      pin_no = 2;
      delay(10);
  }
  return pin_no;
}

void initial(){
  Serial.println("Iniated the test");
  output (out1);
  int data = input();
  Serial.print ("Data from inital is ");Serial.println(data);
  if (data == 1 && count == 1){
    Serial.println ("Pin 1 is working");
  }else{
    Serial.println ("Pin 1 is faulty");
  }
  output (out2);
  data = input ();
  Serial.print ("Data from inital is ");Serial.println(data);
  if (data == 2 && count == 1){
    Serial.println ("Pin 2 is working");
  }else{
    Serial.println ("Pin 2 is faulty");
  }
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
  char ser_inp = 0;
  if (Serial.available())
    ser_inp = Serial.read();
  Serial.print ("Serial data recived is : "); Serial.println(ser_inp);
  if (ser_inp == 's'){
  //  Serial.println("Iniated the test");
    initial();
  }
  
  Serial.println("IN LOOP");
  delay(1000);
}
