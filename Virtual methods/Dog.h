#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
	Dog() : Pet("Ball", "Dog", "Auuuuuu, baby i am praying on you tonight") {}
	Dog(const std::string& name, const std::string& type, const std::string& sound) : Pet(name, type, sound) {}
};