
#ifndef COLISION_H
#define COLISION_H

#include "drake.h"
#include <iostream>

class Paredes{

  private:

    int punto_x_lft;
    int punto_x_rgt;
    int punto_y_up;
    int punto_y_dwn;
    bool estado = false;
  

  public: 

    Paredes(int x_lft, int x_rgt, int y_up, int y_dwn):
    punto_x_lft(x_lft), punto_x_rgt{x_rgt}, punto_y_up{y_up},       
    punto_y_dwn{y_dwn} {}

   //colision "Exterior"

    void colision_muro(char tecla_presionada, drake player);
    // colision "Interior"
  
    void colision_limites(char tecla_presionada, drake player);
    // colision "Habitaciones"



    int get_punto_x_rtg(){
      return punto_x_rgt;
    }
    int get_punto_x_lft(){
      return punto_x_lft;
    }
    int get_punto_y_up(){
      return punto_y_up;
    }
    int get_punto_y_dwn(){
      return punto_y_dwn;
    }
    bool get_estado(){
      return estado;
    }

    void set_estado(bool nuevo_estado){
      estado = nuevo_estado;
    }

};

#endif