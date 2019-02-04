
//********** Variables ********************************************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print("R1 és ");
    Serial.println(r1); 
    r2 = Serial.parseInt();
    Serial.print("R2 és ");
    Serial.println(r2);
    
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    rSerie = r1+r2;
    rParalel = ((r1*r2)/(r1+r2));
    Serial.print("La resistència equivalent en sèrie és ");
    Serial.print(rSerie);
    Serial.println(" ohms");
    Serial.print("La resistència equivalent en paral·lel és ");
    Serial.print(rParalel);
    Serial.println(" ohms");
    Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
    }
  }
}
