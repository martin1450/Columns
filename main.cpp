#include <SFML/Graphics.hpp>
#include <iostream>
#include "Juego.h"
#include "Piezas.h"
#include "Bloque.h"
int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(590, 960), "Columns");
    app.setFramerateLimit(60);
    //Cargo la imagen donde reside la textura del sprite
    sf::Texture tex;
    if (!tex.loadFromFile("background.jpg"))
    {
        std::cerr << "Error cargando la imagen";
        exit(0);
    }

    //Y creo el spritesheet a partir de la imagen anterior
    sf::Sprite sprite(tex);

    Juego juego;
    Bloque bloque;
    bloque.cargar("sprites.png");
    	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                app.close();
            }else{
                juego.controlador(event, bloque);
            }
        }

        // Clear screen
        app.clear();

        // Update the window
        app.draw(sprite);
        app.draw(bloque.pieza[0]);
        app.draw(bloque.pieza[1]);
        app.draw(bloque.pieza[2]);
        app.display();
    }

    return EXIT_SUCCESS;
}
