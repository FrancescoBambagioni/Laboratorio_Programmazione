//
// Created by franc on 2023-02-06.
//

#include "Weapon.h"

Weapon::Weapon(): Weapon(5, 1, false) {}

Weapon::Weapon(int pwr, int rng, bool mg): power(pwr), range(rng), magic(mg) {}

Weapon *Weapon::clone() const {
    return new Weapon(power, range, magic);
}

int Weapon::use() {
    return power;
}

void Weapon::setPower(int power) {
    this->power = power;
}

void Weapon::setRange(int range) {
    this->range = range;
}

void Weapon::setMagic(bool magic) {
    this->magic = magic;
}
