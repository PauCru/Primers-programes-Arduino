//********** Variables ********************************************************
int num;             // variables for the R's
int residu;   // variables for the results
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un número");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    num = Serial.parseInt();// look for valid int the incoming serial stream
  
    
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    residu = num%2;
    {
      if (residu==1)
      {
      Serial.print("El ");
      Serial.print(num);
      Serial.println(" és senar");
      }
      else
      {
      Serial.print("El ");
      Serial.print(num);
      Serial.println(" és parell");
      }
    }
    Serial.println("Entra el número");
  }
}
}
