/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                          BLINK                              **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 23/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                 // configura sortides
 pinMode(13, OUTPUT);//Inicia pin digital 13 com a sortida

}                             //Finalitza el bloc

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
  digitalWrite(13, HIGH);   // Encen LED
  delay(1000);                       // Espera 1 segon
  digitalWrite(13, LOW);    // Apaga el LED
  delay(1000);                       // Espera 1 segon

}                          //Finalitza el bloc

//************************** FUNCIONS ***************************
