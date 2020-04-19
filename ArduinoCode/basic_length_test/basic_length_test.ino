int pin1 = 3;
int pin2 = 10;
int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  Serial.print("Value on PIN is ");
  Serial.println(digitalRead(pin2));
  count++;

  if(count > 4)
  {
    digitalWrite (pin1, HIGH);
    if (count > 9)
      count =0;  
  }
  else
    digitalWrite (pin1, LOW);
    
}
