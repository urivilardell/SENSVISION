
#include "arduino.h"
#include "Libsensor.h"

Libsensor::Libsensor(int pinecho, int pintrigger)    //Constructor
{
	_pinecho = pinecho;
    _pintrigger = pintrigger;
	
	pinMode(_pinecho, INPUT);
	pinMode(_pintrigger, OUTPUT);
}

void Libsensor::enviarSo()   //Funció emetre so
{
  digitalWrite(_pintrigger, LOW);   // Esta apagat
  delayMicroseconds(1000);
  digitalWrite(_pintrigger, HIGH); // Emet so
  delayMicroseconds(1000);	
}

void Libsensor::rebreSo()
{
	digitalWrite(_pintrigger, LOW); // Tornem apagar
	_temps = pulseIn(_pinecho, HIGH);  //Calculem el temps que a tardat a partir del qual obtindrem la distancia
	_temps = _temps/2;
}

bool Libsensor::controlarDistancia()  // Funció per descartar distancies nules
{   
	
	if(_distancia<120)
	{
		return true;
	}else
	{
		return false;
	}
}


void Libsensor::calcularDistancia()  //Funció per calcular distancia
{
	_distancia = _temps/29;
	delayMicroseconds(16000);
	
		if(Libsensor::controlarDistancia())
		{
			Serial.print(_distancia);
			Serial.println(" cm");
		}
}

