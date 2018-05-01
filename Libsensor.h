
#ifndef Libsensor_h
#define  Libsensor_h
#include "arduino.h"
class Libsensor {
	
  public:
   Libsensor(int pinecho, int pintrigger);
   void enviarSo();
   void rebreSo();
   void calcularDistancia();
   
  private:  
   int _pinecho;
   int _pintrigger;
   float _distancia;
   float _temps;
   bool controlarDistancia();
};
#endif