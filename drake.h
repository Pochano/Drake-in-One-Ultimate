
#ifndef DRAKE_H
#define DRAKE_H

#include <iostream>

class Paredes;

class drake{
  private:


  int tamano_drake_x = 64;
  int tamano_drake_y = 64;
  int punto_x_lft = 0;
  int punto_x_rgt = 0;

  int punto_y_up = 0;
  int punto_y_dwn = 0;
   
  public:
  
  drake(int x_lft, int x_rgt, int y_up, int y_dwn):
punto_x_lft(x_lft), punto_x_rgt{x_rgt}, punto_y_up{y_up},       
punto_y_dwn{y_dwn} {}

  void mover(char direccion);

  void mostrarPosicion();

  void correccion_interior(char mov, Paredes* Muro_1);

  void correccion_exterior(char mov, Paredes* Muro_Externo);

  int get_punto_x_lft(){
    return punto_x_lft;
  }
  int get_punto_y_up(){
    return punto_y_up;
  }
  int get_punto_x_rgt(){
    return punto_x_rgt;
  }
  int get_punto_y_dwn(){
    return punto_y_dwn;
  }
  
  void set_punto_x_lft(int posx1){
    punto_x_lft = posx1;
  }

  void set_punto_y_up(int posy1){
    punto_y_up = posy1;
  }

  void set_punto_x_rgt(int posx2){
    punto_x_rgt = posx2;
  }

  void set_punto_y_dwn(int posy2){
    punto_y_dwn = posy2;
  }

  int get_tamano_jugador_x(){
    return tamano_drake_x;
  }
  int get_tamano_jugador_y(){
    return tamano_drake_y;
  }

};

#endif