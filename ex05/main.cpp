#include <Harl.hpp>

int main() {
    Harl harlinhas;
    harlinhas.complain("DEBUG");
    harlinhas.complain("INFO");
    harlinhas.complain("WARNING");
    harlinhas.complain("ERROR");
    
    std::cout << std::endl;
    Harl TOY;
    TOY.complain("TENHO SEDE");
    TOY.complain("TENHO MTA SEDE");
    TOY.complain("WARNING TENHO MESMO MTA SEDE");
    return 0;
}
