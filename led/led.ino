/****************************************************************
 **                                                            **
 **                       LED                                     **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                           23-1-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
void setup() {                    //configura el final de salida
 pinMode(13, OUTPUT) ;
}

void loop() {                     // inicia el bucle del programa
  digitalWrite(13, HIGH) ;  // s'encen el led al pin 13
delay(1000); //espera un segon
digitalWrite(13, LOW) ;  // s'apaga el led al pin 13
delay(1000) ; // espera un segon
}

//*************************** FUNCIONS **************************

