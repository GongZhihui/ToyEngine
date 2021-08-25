#include <iostream>
#include "ToyEngine/actor/actor.h"

int main()
{
    TE_NSPACE::Actor actor{ 3 };

    std::cout << actor.show() << std::endl;
    std::cin.get();
    return 0;
}