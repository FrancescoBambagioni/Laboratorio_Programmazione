//
// Created by franc on 2023-02-06.
//

#ifndef LABORATORIO_PROGRAMMAZIONE_WEAPON_H
#define LABORATORIO_PROGRAMMAZIONE_WEAPON_H

class Weapon {
public:
    Weapon();
    explicit Weapon(int pwr=5, int rng=1, bool mg=false);

    Weapon* clone() const;

    int use();

    int getPower() const { return power; }
    int getRange() const { return range; }
    bool isMagic() const { return magic; }

    void setPower(int power);
    void setRange(int range);
    void setMagic(bool magic);
private:
    int power;
    int range;
    bool magic;
};


#endif //LABORATORIO_PROGRAMMAZIONE_WEAPON_H
