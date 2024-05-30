#ifndef SNAKE_H
#define SNAKE_H
#pragma once
#include <SFML/Graphics.hpp>

//cuerpo
//longitud
//velocidad
class Snake
{
    sf::Sprite _sprite;
    sf::Texture _texture;
    float _velocidad;
    public:
        Snake();
        void update();
        void draw(sf::RenderWindow&);
        virtual ~Snake();

    protected:

    private:
};

#endif // SNAKE_H
