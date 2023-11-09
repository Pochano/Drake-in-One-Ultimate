#include <iostream>
#include "clases/Colisiones.h"
#include "clases/Objetos.h"
#include "clases/puzzle.h"

int main() {

  char mover;
  drake Jugador_drake(1500, 1564, 400, 464);
  Paredes Cerco_Mapa(88,1832,88,992);
  Paredes Colision(200,250,200,250);
  puzzle Puzzle1(Colision, Jugador_drake, 50);


  while(true){
    
  std::cin >> mover;
  Jugador_drake.mover(mover);
  
  Cerco_Mapa.colision_limites(mover, Jugador_drake);
  Puzzle1.campo_interaccion(Jugador_drake);
  std::cout << "Campo interacción: " << Puzzle1.get_estado() << "\n";
  Jugador_drake.correccion_interior(mover, &Cerco_Mapa);
  colisiones(mover, Jugador_drake);

  
  Jugador_drake.correccion_exterior(mover, &Muro_h1_1);
  Jugador_drake.correccion_exterior(mover, &Muro_h1_2);
  Jugador_drake.correccion_exterior(mover, &Muro_h1_3);
  Jugador_drake.correccion_exterior(mover, &Muro_h1_4);
  Jugador_drake.correccion_exterior(mover, &Muro_h1_5);
  Jugador_drake.correccion_exterior(mover, &Muro_h1_6);
  Jugador_drake.correccion_exterior(mover, &Muro_h1_7);

  
  Jugador_drake.mostrarPosicion();
    
  }
  
}