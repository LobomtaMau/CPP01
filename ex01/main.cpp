#include "Zombie.hpp"

int main() {
    int n_Zombies = 7;
    

    Zombie* horde = zombieHorde(n_Zombies, "TOY");

    if (horde != NULL) {
        for (int i = 0; i < n_Zombies; i++) {
            horde[i].announce();
        }
        delete[] horde;
    }

    return 0;
}