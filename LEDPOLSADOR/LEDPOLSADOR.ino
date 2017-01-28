/****************************************************************
 **                                                            **
 **                       LED POLSADOR                                     **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                           23-1-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
void setup() {                    //configura el final de salida
pinMode(2, OUTPUT) ;
pinMode(4, I NPUT) ;

}

void loop() {                     // inicia el bucle del programa
if(digitalRead(4)){
digitalWrite(2, HIGH);
}else{
digitalWrite(2, LOW) ;
}

//*************************** FUNCIONS **************************

