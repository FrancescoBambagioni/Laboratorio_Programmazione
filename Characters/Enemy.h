//
// Created by franc on 2023-02-04.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_ENEMY_H
#define LABORATORIO_PROGRAMMAZIONE_ENEMY_H

#include "GameCharacter.h"
#include "../Patterns/Subject.h"

//This class extends GameCharacter adding the pathfinding capabilities of the A* algorithm

class Enemy : public GameCharacter, public Observer {
public:
    explicit Enemy(Subject *flwChar= nullptr, int str=10, int hp=10, sf::Vector2i nSpeed=sf::Vector2i(1,1));

    void update() override;

    Subject* getFollowedCharacter() const { return followedCharacter; }
    int getStrength() const { return strength; }

    bool setFollowedCharacter(Subject* nFlwChar) { this->followedCharacter = nFlwChar; }
    void setStrength(int str) { (str > 0) ? (strength = str) : (strength = 0);}
private:
    void findPath();
    void astar();

    Subject* followedCharacter;
    int strength;
};

#endif //LABORATORIO_PROGRAMMAZIONE_ENEMY_H
