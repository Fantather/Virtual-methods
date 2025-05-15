#pragma once
#include "Pet.h"

class Humster : public Pet
{
public:
	Humster() : Pet("Todl", "Rodent", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA") {}
	Humster(const std::string& name, const std::string& type, const std::string& sound) : Pet(name, type, sound) {}

	void Sound() const override
	{
		std::cout << sound_ << "\n";
	}

	void Show() const override
	{
		std::cout << "FROM HUMSTER:\n";
		std::cout << name_ << "\n";
	}

	void Type() const override
	{
		std::cout << type_ << "\n";
	}
};