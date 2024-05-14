#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
