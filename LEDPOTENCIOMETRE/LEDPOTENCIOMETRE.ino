/****************************************************************
 **                                                            **
 **                       LED POTENCIOMETRE                                    **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                           23-1-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
 int sensorValue=0;
void setup() {                    //configura el final de salida
pinMode(3,OUTPUT); 

}

void loop() {                     // inicia el bucle del programa
sensorValue=analogRead(A0) ;
analogWrite(3,sensorValue/4);
}

//*************************** FUNCIONS **************************

