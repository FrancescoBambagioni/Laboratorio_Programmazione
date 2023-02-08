//
// Created by franc on 2023-02-03.8
//

#include "GameCharacter.h"

GameCharacter::GameCharacter(int hp, sf::Vector2i nSpeed) : HP(hp), speed(nSpeed), weapon(nullptr) {
    body = new sf::RectangleShape(sf::Vector2f (100,100));
    body->setPosition(0,0);
    body->setFillColor(sf::Color::Green);
}

GameCharacter::~GameCharacter() {
    if (weapon != nullptr)
        delete weapon;
}

int GameCharacter::receiveDamage() {
    return false;
}

void GameCharacter::setSpeed(sf::Vector2i nSpeed) {
    speed = nSpeed;
}

void GameCharacter::setWeapon(Weapon *weapon) {
    this->weapon = weapon;
}

void GameCharacter::move(const sf::Vector2f &offset) {
    body->move(offset);
}

int GameCharacter::basicFight(GameCharacter &target) {
    int hit = 0;
    int damage = 1;

    if(weapon!= nullptr)
        hit = weapon->use();

    damage = target.receiveDamage();

    return damage;
}
