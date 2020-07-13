#ifndef JUEGO_H
#define JUEGO_H
#include "Bloque.h"
#include "Piezas.h"
#include <SFML/Graphics.hpp>

class Juego
{
    public:
        Juego();
        void controlador(const sf::Event &e, Bloque &bloque);
        void teclas(const sf::Event &e, Bloque &bloque);
        virtual ~Juego();
    protected:
    private:
};

#endif // JUEGO_H
