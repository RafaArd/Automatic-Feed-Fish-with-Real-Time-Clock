#include <Servo.h>
Servo mekanik;//menampung struct / class Servo ke var name mekanik(dibuat var global)

void setup() {
 mekanik.attach(4);//fungsi menampung mekanik ke pin 4
 mekanik.write(0);//men set posisi servo diposisi (derajad 0)
}

void loop() {
 mekanik.write(0);
 delay(20000);
 mekanik.write(150);
 delay(100);
 mekanik.write(0);
 delay(100);
 mekanik.write(150);
 delay(100);
 mekanik.write(0);

}
