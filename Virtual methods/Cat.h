#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
	Cat() : Pet("Galaxy Destroyer", "Cat", "Meou") {}
	Cat(const std::string& name, const std::string& type, const std::string& sound) : Pet(name, type, sound) {}
};