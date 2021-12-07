
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// #define LEDpin1 5   // 1ere LED branchée à GPIO 5
// #define LEDpin2 ?   // 2e LED branchée à GPIO ?
// #define LEDpin3 ?   // 3eme LED branchée à GPIO ?
// #define LEDpin4 ?   // 4eme LED branchée à GPIO ?

char instruction; // le message recu par bluetooth;
int humidite = 0;
int temp_ext = 0;
int temp = 0;
int humidite = 0;

void setup()
{
  SerialBT.begin("Toiture Vegetal"); // notre client Bluetooth s'appelera "ESP32?????"
  pinMode( ? , ? );
}


void loop()
{ 
  
  random(100)

  char message;

  if (SerialBT.available()) // réception d'un message
  {
    message = SerialBT.read(); // lecture du message reçu
  }
  if (message != instruction)
  { // alors il faut modifier l'état des LEDs

    instruction = message;

    if (instruction == 'a')
    {
      for(compteur = 0;compteur < 5;compteur++)
      {
      digitalWrite( ? , ? );

      }
      
    }
    
    
    delay(200);
  }
}
