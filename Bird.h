#include <iostream>
using namespace std;
#include <string>

#ifndef Mammel_H
#define Mammel_H
#include "Animal_H"


class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird();
    Bird(string name, int age, bool isHungry, float wingSpan);

    float getWingSpan() const;
    void setWingSpan(float span);


    void display();
};

#endif
