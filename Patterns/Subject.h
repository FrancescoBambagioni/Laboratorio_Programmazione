//
// Created by franc on 2023-02-03.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_SUBJECT_H
#define LABORATORIO_PROGRAMMAZIONE_SUBJECT_H

#include "Observer.h"

//This is an abstract class meant to be implemented by objects maintain a value observed by other objects
class Subject {
public:
    Subject() {}
    virtual ~Subject() {}
    virtual void registerObserver(Observer *o) = 0;
    virtual void removeObserver(Observer *o) = 0;
    virtual void notifyObservers() = 0;
};

#endif //LABORATORIO_PROGRAMMAZIONE_SUBJECT_H