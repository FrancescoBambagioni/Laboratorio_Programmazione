//
// Created by franc on 2023-02-03.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_OBSERVER_H
#define LABORATORIO_PROGRAMMAZIONE_OBSERVER_H

//This is an abstract class meant to be implemented by objects who are interested in a value maintained by a Subject

class Observer {
public:
    Observer() {}
    virtual~Observer() {}
    virtual void update() = 0;
};

#endif //LABORATORIO_PROGRAMMAZIONE_OBSERVER_H
