
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "Characters/GameCharacter.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    //Generate player
    GameCharacter player;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::W:
                        player.move(sf::Vector2f (0,-50));
                        break;
                    case sf::Keyboard::A:
                        player.move(sf::Vector2f (-50,0));
                        break;
                    case sf::Keyboard::S:
                        player.move(sf::Vector2f (0,50));
                        break;
                    case sf::Keyboard::D:
                        player.move(sf::Vector2f (50,0));
                        break;
                    case sf::Keyboard::Escape:
                        window.close();
                        break;
                    default:
                        break;
                }
            }
        }

        window.clear();
        //window.draw(shape);
        window.draw(player.render());
        window.display();
    }

    return 0;
}