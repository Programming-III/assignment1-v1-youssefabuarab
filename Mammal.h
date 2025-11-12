#include <iostream>
using namespace std;
#include <string>

#ifndef Mammel_H
#define Mammel_H
#include "Animal_H"


class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(string name, int age, bool isHungry, string furColor);

    string getFurColor() const;
    void setFurColor(string color);


    void display();
};
#endif
