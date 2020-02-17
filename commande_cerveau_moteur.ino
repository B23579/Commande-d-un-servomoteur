#include <Servo.h>
int pinservo=3;
Servo cerv;
void setup() {
  // put your setup code here, to run once:
  cerv.attach(pinservo); //définir le pin de commande du cerveau moteur
  // put your setup code here, to run once:
  
}

void loop() {
  servoMoteur(0);// mettre le cerveau moteur a la position 90 dégré
  delay(500);
   servoMoteur(90);
   delay(500);
    servoMoteur(180);
    delay(500);
     servoMoteur(90);
   delay(500);
   
  
  // put your main code here, to run repeatedly:

}
// fonction permettant de faire tourne le cerveau moteur d'un angle donné
 void servoMoteur(int angle) {
    cerv.write(angle); //pour faire tourne le cerveau moteur d'un angle angle
    }
