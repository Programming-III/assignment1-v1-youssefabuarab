#include <iostream>
using namespace std;
#include <string>

#ifndef Reptile_H
#define Reptile_H
#include "Animal_H"


class Reptile_H : public Animal {
    private :
    bool isVenomous  ;
    
    public : 
    Reptile_H ();
    
    
    
    float wingSpan getwingspan();
    void setwingSpan ();
    

    void display();
};

#endif
