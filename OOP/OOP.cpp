// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"


int main()
{
    Animal animal; 


    animal.Travel();

    Dog dog;
    dog.Travel();

    Animal* ptrAnimal = new Animal; 
    (*ptrAnimal).Travel();
    ptrAnimal->Travel();

    Animal* ptrDog = new Dog;

    ptrDog->Travel();
    animal.GetLimbs();

    cout << animal.GetLimbs() << endl; 


}
