// C++ code

void setup()
{
  pinMode(4, OUTPUT); //For Green LED
  pinMode(3, OUTPUT); //For Orange/Yellow LED
  pinMode(2, OUTPUT); //For Red LED
}

void loop(){
  digitalWrite(4, HIGH); //Turn ON Green LED
  delay(5000); //wait for 5 seconds  
  digitalWrite(4, LOW); //Turn off Green LED
  
  digitalWrite(3, HIGH); //Turn ON Orange/Yellow LED
  delay(2000); //wait for 2 seconds  
  digitalWrite(3, LOW);  //Turn off Orange/Yellow LED
  
  digitalWrite(2, HIGH); //Turn ON Red LED
  delay(5000); //wait for 5 seconds  
  digitalWrite(2, LOW); //Turn off Red LED  
}