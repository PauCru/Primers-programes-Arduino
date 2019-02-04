/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
** Pau Crusellas Ginesta                                                 3/12/18 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operació que vols realitzar?");
  Serial.println(" 1. Comprovar numero de targeta de credit");
  Serial.println(" 2. Comprovar numero de compte bancari");
  Serial.println(" 3. Buscar un digit perdut de tarjeta de credit");// prints Hello world! with brake line
}

//********** Loop *****************************************************************
void loop()   // run over and over again
{
           // do nothing
}

//********** Funcions *************************************************************
