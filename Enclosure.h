#include <iostream>
using namespace std;
#include <string>

#ifndef Enclosure_H
#define Enclosure_H

class Enclosure {
private:
    Animal* animals;   
    int capacity;
    int currentCount;

public:
    Enclosure();
    Enclosure(int capacity)

    ~Enclosure();

    void setCapacity(int cap);
    int getCapacity() const;

    void setCurrentCount(int count);
    int getCurrentCount() const;

    void addAnimal(const Animal& a);
    void displayAnimals() const;


#endif
