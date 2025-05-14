#pragma once
#include <string>
#include <iostream>


class Pet
{
protected:
	std::string name_;
	std::string type_;
	std::string sound_;

public:
	Pet() = default;
	Pet(const std::string& name, const std::string& type, const std::string& sound) : name_(name), type_(type), sound_(sound) {}

	virtual void Sound() const
	{
		std::cout << sound_ << "\n";
	}

	virtual void Show() const 
	{
		std::cout << name_ << "\n";
	}

	virtual void Type() const 
	{
		std::cout << type_ << "\n";
	}
};