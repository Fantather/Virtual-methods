#pragma once
#include "Pet.h"

class Parrot : public Pet
{
	inline static const std::string quote = "Did Everyone See That ? Because I Will NOT Be Doing It Again";

public:
	Parrot() : Pet("Jack Sparrow", "Bird", quote) {}
	Parrot(const std::string& name, const std::string& type, const std::string& sound) : Pet(name, type, sound) {}
};