int condensateur =7;
float mesure;
float tension;
void setup() {
pinMode(condensateur, OUTPUT) ;
Serial.begin(9600) ;
 }
void loop() {
 
// Charge condensateur
Serial.println("Charge du condensateur") ;
digitalWrite(condensateur, HIGH) ;
mesure = analogRead(A0) ;
tension = mesure*5.0/1023 ;
Serial.print("tension=") ;
Serial.println(tension) ;
delay(2000);
Serial.println("----") ;
// Décharge
Serial.println("Decharge du condensateur") ;
digitalWrite(condensateur, LOW) ;
mesure = analogRead(A0) ;
tension = mesure*5.0/1023 ;
Serial.print("tension :") ;
Serial.println(tension) ;
delay(2000);
  }
