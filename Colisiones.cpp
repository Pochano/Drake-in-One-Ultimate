#include "drake.h"
#include "Colisiones.h"

void Paredes::colision_muro(char tecla_presionada, drake player){

  if(tecla_presionada == 'a' && (player.get_punto_x_lft() < punto_x_rgt    && player.get_punto_x_rgt() > punto_x_rgt) && ((player.get_punto_y_up()
  >= punto_y_up - player.get_tamano_jugador_y() + 1) &&
  (player.get_punto_y_dwn() <= punto_y_dwn + 
  player.get_tamano_jugador_y() - 1))){
    estado = true;
  }

  else if(tecla_presionada == 'd' && (player.get_punto_x_rgt() >     
  punto_x_lft && player.get_punto_x_lft() < punto_x_lft) &&     
  (player.get_punto_y_up() <= punto_y_up -        
  player.get_tamano_jugador_y() + 1 && player.get_punto_y_dwn() >= 
  punto_y_dwn + player.get_tamano_jugador_y() - 1)){
    estado = true;
  }

  else if(tecla_presionada == 'w' && (player.get_punto_x_lft() >=   
  punto_x_lft - player.get_tamano_jugador_x() + 1 &&   
  player.get_punto_x_rgt() <= punto_x_rgt + 
  player.get_tamano_jugador_x() - 1) && (player.get_punto_y_up() < 
  punto_y_dwn && player.get_punto_y_dwn() > punto_y_dwn)){
    estado = true;
  }  

  else if(tecla_presionada == 's' && (player.get_punto_x_lft() >= 
  punto_x_lft - player.get_tamano_jugador_x() + 1 && 
  player.get_punto_x_rgt() <= punto_x_rgt + 
  player.get_tamano_jugador_x() - 1) && (player.get_punto_y_up() < 
  punto_y_up && player.get_punto_y_dwn() > punto_y_up)){
    estado = true;
  } 
}
void Paredes::colision_limites(char tecla_presionada, drake player){

  if(tecla_presionada == 'a' && player.get_punto_x_lft() <= punto_x_lft){
      estado = true;
    }

  else if(tecla_presionada == 'd' && player.get_punto_x_rgt() >= punto_x_rgt){
      estado = true;
  }

  else if(tecla_presionada == 'w' && player.get_punto_y_up() <= punto_y_up){
      estado = true;
  }

  else if(tecla_presionada == 's' && player.get_punto_y_dwn() >= punto_y_dwn){
      estado = true;
    }
}

  



