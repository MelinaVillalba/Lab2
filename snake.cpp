#include "Snake.h"
#include <SFML/Graphics.hpp>

Snake::Snake()
{
    // cuerpo_text.loadFromFile("Assets/cuerpo.bmp");

    _texture.loadFromFile("Assets/cabeza.bmp");

    //Ahora el sprite esta cargado con la imagen
    _sprite.setTexture(_texture);
    //personaje.setTexture(cuerpo_text);
}

Snake::update()
{
    //Movimiento del personaje
          if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
                _sprite.move(0, -_velocidad);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
                _sprite.move(-_velocidad, 0);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
                _sprite.move(0, _velocidad);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
                _sprite.move(_velocidad, 0);
        }

        //limites LEFT del personaje
        if(_sprite.getPosition().x<0)
        {
            _sprite.setPosition(0, _sprite.getPosition().y);
        }
        //limites UP del personaje
        if(_sprite.getPosition().y<0)
        {
            _sprite.setPosition(_sprite.getPosition().x, 0);
        }
        //limites  RIGHT del personaje
        if(_sprite.getPosition().x>740)
        {
           _sprite.setPosition(740, _sprite.getPosition().y);
        }
       //limites  DOWN del personaje
       if(_sprite.getPosition().y>540)
        {
            _sprite.setPosition(_sprite.getPosition().x, 540);
        }

}

Snake::draw()
{
    window.draw(_sprite);
}
Snake::~Snake()
{
    //dtor
}

