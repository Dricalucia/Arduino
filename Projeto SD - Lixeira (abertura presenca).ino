// Projeto: Uso da lixeira para abertura automatica por presença

#include <Servo.h>
int motor; 

Servo myservo;  // create servo object to control o motor
Servo myservo2;  // create servo object to control o motor

void setup()
{
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(3, INPUT); 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 9 to the servo object
}
void loop()
{
 motor = digitalRead(3); 
 if (motor == LOW) 
 {
   //   for (int i = 90;i>=10;i--){
   //   myservo.write(i);
   //   myservo2.write(i);  
    //  delay(50);    
   // }   
  
    myservo.write(10);
    myservo2.write(10);
    digitalWrite(5, LOW); //led vermelha apagada
    digitalWrite(6, HIGH); //led azul acessa
 }
 else  
 //detecta movimento, ativa o motor
 {
     //for (int i = 10;i<=90;i++){
    //  myservo.write(i);
    //  myservo2.write(i);  
    //  delay(50);    
   // }
    
    myservo.write(90);
    myservo2.write(90);
    digitalWrite(5, HIGH); // acende a lampada vermelha
    digitalWrite(6, LOW); // apaga a lampada azul
    delay(100);
 }
}