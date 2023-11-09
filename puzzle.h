#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include "drake.h"
#include "Colisiones.h"                                                                                                                 
using namespace std;

class puzzle {

  private:

    Paredes A;
    drake P;
    int space = 0;
    int x_rgt = 0;
    int x_lft = 0;
    int y_up = 0;
    int y_dwn = 0;

    bool estado = false;

    
  public:
    puzzle(Paredes P1, drake Player, int espacio):
      A{P1}, P{Player}, space{espacio},      
      x_rgt{P1.get_punto_x_rtg() + space - 1}, 
      x_lft{P1.get_punto_x_lft() - space + 1},
      y_up{P1.get_punto_y_up() - space + 1},
      y_dwn{P1.get_punto_y_dwn() + space - 1} {}

    void campo_interaccion(drake Player){
      if((Player.get_punto_y_up() >= y_up && 
      Player.get_punto_y_dwn() <= y_dwn) && 
      (Player.get_punto_x_rgt() <= x_rgt && 
      Player.get_punto_x_lft() >= x_lft))
      {
        estado = true;
      }
      else{estado = false;}
    }

    


    bool get_estado(){
      return estado;
    }




};
#endif
