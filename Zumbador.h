/*
  Libejemplo.h - Descripción de la librería
Creada por Nombre Autor, Fecha
Lanzado bajo licencia --- 
*/
#ifndef ZUMBADOR_H
#define ZUMBADOR_H
#include "Arduino.h"

class Zumbador {

  public:
    Zumbador(int pin, int temps, int intensitat);
    void encendreZumbador();

  private:  
    int _pin, 
        _temps,
        _intensitat;
};
#endif
