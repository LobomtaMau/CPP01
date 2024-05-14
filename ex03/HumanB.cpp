#include <HumanB.hpp>

HumanB::HumanB(std::string name) : _name(name), _weapon() {}

HumanB::~HumanB() {}

void HumanB::attack() {
    if (_weapon != NULL) {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    } else {
        std::cout << _name << " cannot attack because they have no weapon.\n";
    }
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}
