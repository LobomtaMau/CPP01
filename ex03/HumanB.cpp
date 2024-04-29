#include <HumanB.hpp>

static Weapon noWeapon("NO WEAPON");

HumanB::HumanB(std::string name) : _name(name), _weapon(&noWeapon) {}

HumanB::~HumanB() {}

void HumanB::attack() {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}