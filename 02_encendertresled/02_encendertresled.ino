// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.

  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {

  digitalWrite( 13 , HIGH) ;
  delay (200) ;
  digitalWrite( 13 , LOW);
  delay (200) ;

  digitalWrite( 12 , HIGH) ;
  delay (200) ;
  digitalWrite( 12 , LOW);
  delay (200) ;

  digitalWrite( 14 , HIGH) ;
  delay (200) ;
  digitalWrite( 14 , LOW);
  delay (200) ;
}

