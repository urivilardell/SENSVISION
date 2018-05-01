/*
Libejemplo.cpp -Descripción cpp
Creada por Nombre Autor, Fecha
Lanzado bajo licencia---
*/

#include "Arduino.h"
#include "Zumbador.h"

Zumbador::Zumbador(int pin, int temps, int intensitat)
{
    _pin = pin;
    _temp = temps;
    _intestitat = intensitat;
    
    pinMode(_pin, OUTPUT);
}
void Zumbador::encendreZumbador()
{
    tone(_pin, _intestitat, _temps);
    digitalWrite(_pin, HIGH);
    delayMicroseconds(100);
    digitalWrite(_pin, LOW); 
}
