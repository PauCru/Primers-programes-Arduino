//********** Variables ********************************************************

int mida;   // variables for the results
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Quina mida té el cargol en cm?");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    mida = Serial.parseInt();// look for valid int the incoming serial stream
  
    
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    {
      if (mida>=1 & mida<3)
      {
      Serial.print("El cargol amb una mida de "); 
      Serial.print(mida);
      Serial.println(" cm és petit.");
      }
      else if (mida>=3 & mida<5)
      {
      Serial.print("El cargol amb una mida de "); 
      Serial.print(mida);
      Serial.println(" cm és mitjà.");   
      }
      else if (mida>=5 & mida<8)
      {
      Serial.print("El cargol amb una mida de "); 
      Serial.print(mida);
      Serial.println(" cm és gran.");      
      }
      else if (mida>=8 & mida<=10)
      {
      Serial.print("El cargol amb una mida de "); 
      Serial.print(mida);
      Serial.println(" cm és molt gran.");      
      }
      else
      {
      Serial.println("La mida del cargol és incorrecta.");      
      }
    }
    Serial.println(" ");
    Serial.println("Entra el número");
    }
  }
}
