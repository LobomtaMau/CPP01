#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name) {
    if (N <= 0) {
        std::cerr << "Error: We need positive zombies..." << std::endl;
        return NULL;
    }
    
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        horde[i] = Zombie(name);
    }

    return horde;
}
