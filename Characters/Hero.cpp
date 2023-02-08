//
// Created by franc on 2023-02-08.
//

#include "Hero.h"

Hero::Hero(int hp, sf::Vector2i nSpeed) : GameCharacter(hp, nSpeed), score(0) {

}

Hero::~Hero() {

}

void Hero::notifyObservers() {
    //For each observer call update
    //Send new position or wait for them to ask?
}
