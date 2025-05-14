#pragma once
#include "Pet.h"

class Humster : public Pet
{
public:
	Humster() : Pet("Todl", "Rodent", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA") {}
	Humster(const std::string& name, const std::string& type, const std::string& sound) : Pet(name, type, sound) {}
};