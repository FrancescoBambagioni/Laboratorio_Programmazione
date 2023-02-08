//
// Created by franc on 2023-02-08.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_HERO_H
#define LABORATORIO_PROGRAMMAZIONE_HERO_H

#include <list>
#include "GameCharacter.h"
#include "../Patterns/Subject.h"

//This class is meant for special GameCharacters that have to implement the Subject interface
class Hero : public GameCharacter, public Subject {
public:
    explicit Hero(int hp=10, sf::Vector2i nSpeed=sf::Vector2i(1,1));
    ~Hero() override;

    void registerObserver(Observer *o) override { observers.push_back(o); }
    void removeObserver(Observer *o) override { observers.remove(o); }
    void notifyObservers() override;

    int getScore() const { return score; }

    void setScore(int nScore) { (nScore > 0) ? (score = nScore) : (score = 0); }
    void modifyScore(int points) { (score+points > 0) ? (score += points) : (score = 0); }

private:
    int score;
    //Size is dynamic: I do not know when other observers may be initialized
    //Order is not important
    //It is possible to erase members in the middle
    //Frequently traversed: traversed every time Hero changes position
    //Size should not vary widely
    std::list<Observer*> observers;
    //std::list is probably the best containers for the observers
    //Insertion and erasure is cheap
};

#endif //LABORATORIO_PROGRAMMAZIONE_HERO_H
