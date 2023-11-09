#ifndef OBJECTS_H
#define OBJECTS_H

#include <iostream>
#include "Colisiones.h"
#include "drake.h"

// Muros Habitación 1

Paredes Muro_h1_1(87,256,512,535);
Paredes Muro_h1_2(333,503,512,535);
Paredes Muro_h1_3(480,503,536,791);
Paredes Muro_h1_4(504,1079,768,791);
Paredes Muro_h1_5(1056,1079,792, 971);
Paredes Muro_h1_6(84,1079,972,995);
Paredes Muro_h1_7(84,107,536,971);

void colisiones(char mov, drake player){

  Muro_h1_1.colision_muro(mov, player);
  Muro_h1_2.colision_muro(mov, player);
  Muro_h1_3.colision_muro(mov, player);
  Muro_h1_4.colision_muro(mov, player);
  Muro_h1_5.colision_muro(mov, player);
  Muro_h1_6.colision_muro(mov, player);
  Muro_h1_7.colision_muro(mov, player);
  
}

void correccion(char mov, drake &player){
  player.correccion_exterior(mov, &Muro_h1_1);
  player.correccion_exterior(mov, &Muro_h1_2);
  player.correccion_exterior(mov, &Muro_h1_3);
  player.correccion_exterior(mov, &Muro_h1_4);
  player.correccion_exterior(mov, &Muro_h1_5);
  player.correccion_exterior(mov, &Muro_h1_6);
  player.correccion_exterior(mov, &Muro_h1_7);
}







#endif


