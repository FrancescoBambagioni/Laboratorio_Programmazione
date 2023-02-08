//
// Created by franc on 2023-02-04.
//

#include "Enemy.h"

Enemy::Enemy(Subject *flwChar, int str, int hp, sf::Vector2i nSpeed): GameCharacter(hp, nSpeed), followedCharacter(flwChar), strength(str) {
    //Subscribe to Hero?
    if(followedCharacter != nullptr)
        followedCharacter->registerObserver(this);
}

void Enemy::update() {

}

void Enemy::findPath() {

}

void Enemy::astar() {

}


