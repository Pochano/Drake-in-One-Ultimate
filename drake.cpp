#include "drake.h"
#include "Colisiones.h"

void drake::mostrarPosicion(){
  std::cout << "Posición del jugador: (X lft - " << punto_x_lft << ", Y    Up - " << punto_y_up << ")"
  << "\n\t\t\t\t\t  (X rgt - " << punto_x_rgt << ", Y Dw - " <<            punto_y_dwn << ")" << std::endl;
}  

void drake::mover(char direccion){
    switch (direccion) {
        case 'W':
        case 'w':
            punto_y_up -= 4;
            punto_y_dwn -= 4;
            break;
        case 'A':
        case 'a':
            punto_x_lft -= 4;
            punto_x_rgt -= 4;
            break;
        case 'S':
        case 's':
            punto_y_up += 4;
            punto_y_dwn += 4;
            break;
        case 'D':
        case 'd':
            punto_x_lft += 4;
            punto_x_rgt += 4;
            break;
        default:
            break;
    }
}

void drake::correccion_interior(char mov, Paredes* Muro_1){

  if(mov == 'a' && (*Muro_1).get_estado() == 1){
    punto_x_lft = Muro_1->get_punto_x_lft();
    punto_x_rgt = Muro_1->get_punto_x_lft() + tamano_drake_x;
  }
  else if(mov == 'd' && Muro_1->get_estado() == 1){
    punto_x_rgt = Muro_1->get_punto_x_rtg();       
    punto_x_lft = Muro_1->get_punto_x_rtg() - tamano_drake_x;
    }
  else if(mov == 'w' && Muro_1->get_estado() == 1){
    punto_y_up = Muro_1->get_punto_y_up();
    punto_y_dwn = Muro_1->get_punto_y_up() + tamano_drake_y;
  }
  else if(mov == 's' && Muro_1->get_estado() == 1){
      punto_y_dwn = Muro_1->get_punto_y_dwn();
      punto_y_up = Muro_1->get_punto_y_dwn() - tamano_drake_y;
    }

  Muro_1->set_estado(0);
}

void drake::correccion_exterior(char mov, Paredes* Muro_Externo){

  if(mov == 'a' && Muro_Externo->get_estado() == 1){
    punto_x_lft = Muro_Externo->get_punto_x_rtg();
    punto_x_rgt = Muro_Externo->get_punto_x_rtg() + tamano_drake_x;
  }
  else if(mov == 'd' && Muro_Externo->get_estado() == 1){
    punto_x_rgt = Muro_Externo->get_punto_x_lft();       
    punto_x_lft = Muro_Externo->get_punto_x_lft() - tamano_drake_x;
    }
  else if(mov == 'w' && Muro_Externo->get_estado() == 1){
    punto_y_up = Muro_Externo->get_punto_y_dwn();
    punto_y_dwn = Muro_Externo->get_punto_y_dwn() + tamano_drake_y;
  }
  else if(mov == 's' && Muro_Externo->get_estado() == 1){
      punto_y_dwn = Muro_Externo->get_punto_y_up();
      punto_y_up = Muro_Externo->get_punto_y_up() - tamano_drake_y;
    }

  Muro_Externo->set_estado(0);
}