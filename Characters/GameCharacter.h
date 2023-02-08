//
// Created by franc on 2023-02-03.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_GAMECHARACTER_H
#define LABORATORIO_PROGRAMMAZIONE_GAMECHARACTER_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

#include "../Weapon.h"

class GameCharacter {
public:
    explicit GameCharacter(int hp=10, sf::Vector2i nSpeed=sf::Vector2i(1,1));
    virtual ~GameCharacter();

    int getHP() const { return HP; }
    sf::Vector2i getSpeed() const { return speed; }
    Weapon* getWeapon() const { return weapon; }
    sf::Vector2f getPosition() const { return body->getPosition(); }
    sf::Drawable& render() const { return *body; }

    void setHP(int nHP) {(nHP > 0) ? (HP = nHP) : (HP = 0);}
    int receiveDamage();
    void setSpeed(sf::Vector2i nSpeed);
    void setWeapon(Weapon *weapon); //Return false if
    virtual void move (const sf::Vector2f &offset);
    void setPosition(float nPosX, float nPosY) {body->setPosition(nPosX, nPosY);}
    void setPosition(sf::Vector2f nPos) {body->setPosition(nPos);}
protected:
    int basicFight(GameCharacter &target);

    int HP;
    sf::Vector2i speed;
    Weapon* weapon;

    sf::RectangleShape* body;
};

#endif //LABORATORIO_PROGRAMMAZIONE_GAMECHARACTER_H
