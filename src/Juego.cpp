#include "Juego.h"
#include <iostream>
#include "Bloque.h"
#include "Piezas.h"
Juego::Juego()
{
    //ctor
}

void Juego::controlador(const sf::Event &e, Bloque &bloque) {
    switch (e.type) {
    case sf::Event::KeyPressed:
         teclas(e,bloque);

   // case sf::Event::KeyReleased:

    default:
        break;
    }
}

void Juego::teclas(const sf::Event &e, Bloque &bloque) {

    switch(e.key.code) {

        case sf::Keyboard::Right:
            std::cout << "derecha" << std::endl;
              bloque.pos[0]=bloque.pos[0]+24;
              bloque.pieza[0].modificar(bloque.pos[0],bloque.pos[1]);
              bloque.pieza[1].modificar(bloque.pos[0],bloque.pos[1]+24);
              bloque.pieza[2].modificar(bloque.pos[0],bloque.pos[1]+48);
        break;

        case sf::Keyboard::Left:
              std::cout << "izquierda" << std::endl;
              bloque.pos[0]=bloque.pos[0]-24;
              bloque.pieza[0].modificar(bloque.pos[0],bloque.pos[1]);
              bloque.pieza[1].modificar(bloque.pos[0],bloque.pos[1]+24);
              bloque.pieza[2].modificar(bloque.pos[0],bloque.pos[1]+48);
        break;

        case sf::Keyboard::Down:
              std::cout << "abajo" << std::endl;
              bloque.pos[1]=bloque.pos[1]+24;
              bloque.pieza[0].modificar(bloque.pos[0],bloque.pos[1]);
              bloque.pieza[1].modificar(bloque.pos[0],bloque.pos[1]+24);
              bloque.pieza[2].modificar(bloque.pos[0],bloque.pos[1]+48);
        break;

        case sf::Keyboard::Space:
              std::cout << "espacio" << std::endl;
        break;

        default:
            std::cout << "estas teclas no se usan por ahora" << std::endl;
        break;

    }
     std::cout << bloque.pos[1] << std::endl;
}

Juego::~Juego()
{
    //dtor
}
