#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Humster.h"
#include "Parrot.h"
#include "Cat.h"

static void TEST(Pet& obj)
{
    obj.Show();
    obj.Type();
    obj.Sound();
    std::cout << "\n";
}

int main()
{
    Humster a1;
    TEST(a1);

    Dog a2;
    TEST(a2);

    Parrot a3;
    TEST(a3);

    Cat a4;
    TEST(a4);
}

