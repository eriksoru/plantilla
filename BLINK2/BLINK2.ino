/****************************************************************
 **                                                            **
 **                       BLINK                                    **      
 **                                                            **
 **                                                            **
 **      Erik Soriano                           23-1-17        **                                                      **
***************************************************************** 
//************************** INCLUDE ****************************
//************************** VARIABLES **************************
//************************** SETUP ******************************
 */
void setup() {                    //configura el final de salida
 pinMode(LED_BUILTIN, OUTPUT); 

}

void loop() {                     // inicia el bucle del programa
  digitalWrite(LED_BUILTIN, HIGH);   // encender el led con el nivel de tension alto
  delay(1000);                       // esperar un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apagar el led bajando la tension
  delay(1000);                       // esperar un segundo
}

//*************************** FUNCIONS **************************

