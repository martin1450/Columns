#ifndef PIEZAS_H
#define PIEZAS_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>

class Piezas : public sf::Drawable
{
    public:

        bool load(const std::string& sprite , int x){

            if (!m_tex.loadFromFile(sprite))
            {
                std::cerr << "Error cargando la imagen sprites.png";
                exit(0);
            }
        m_sprite.setTexture(m_tex);


        //std::cout << x << std::endl;
        m_sprite.setTextureRect(sf::IntRect(x*24, 2*24, 24, 24));
        return true;
        }

        void modificar(int x, int y){
            m_sprite.setPosition(x,y);
        }
    protected:
    private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
        {
            target.draw(m_sprite);
        }
        sf::Sprite m_sprite;
        sf::Texture m_tex;
};

#endif // PIEZAS_H
