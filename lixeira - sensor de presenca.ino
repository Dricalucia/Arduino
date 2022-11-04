// Projeto: Uso da lixeira para abertura automatica por presença

#include <Servo.h>

int p_led_vermelha = 5; 
int p_led_azul = 6; 
int motor; 

Servo myservo;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo

void setup()
{
  pinMode(p_led_vermelha, OUTPUT); //Define pino como saida
  pinMode(p_led_azul, OUTPUT); //Define pino como saida
  pinMode(pinopir, INPUT);   //Define pino sensor como entrada
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 9 to the servo object
}
void loop()
{
 acionamento = digitalRead(3); //Le o valor do sensor PIR
 if (acionamento == LOW)  //Sem movimento, mantem led azul ligado
 {
   //   for (int i = 90;i>=10;i--){
   //   myservo.write(i);
   //   myservo2.write(i);  
    //  delay(50);    
   // }   
  
    myservo.write(10);
    myservo2.write(10);
    digitalWrite(p_led_vermelha, LOW);
    digitalWrite(p_led_azul, HIGH);
 }
 else  //detecta movimento, ativa led e motor
 {
 
    //for (int i = 10;i<=90;i++){
    //  myservo.write(i);
    //  myservo2.write(i);  
    //  delay(50);    
   // }
    
    myservo.write(90);
    myservo2.write(90);
    delay(100)
    digitalWrite(p_led_vermelha, HIGH);
    digitalWrite(p_led_azul, LOW);
 }
}