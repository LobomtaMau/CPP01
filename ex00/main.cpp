#include "Zombie.hpp"

int main() 
{
    Zombie* z1 = newZombie("Zombie_1");
    Zombie* z2 = newZombie("Zombie_2");
    z1->announce();
    randomChump("Random_Z");
    z2->announce();

    delete z1;
    delete z2;

    return 0;
}