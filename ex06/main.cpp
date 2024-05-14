/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struf <struf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:03:02 by mbaptist          #+#    #+#             */
/*   Updated: 2024/04/30 15:30:01 by struf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Use: " << argv[0] << " <log lvl in 1 arg>\n";
        return 1;
    }
    
    std::string level = argv[1];
    Harl toy;
    int levelInd = validLvl(level);
    
    switch (levelInd) {
    case 0 :
        toy.complain("DEBUG");
        // fall through
    case 1 :
        toy.complain("INFO");
        // fall through
    case 2 :
        toy.complain("WARNING");
        // fall through
    case 3 :
        toy.complain("ERROR");
        break;
    default:
        std::cerr << "[ Probably complaining about insignificant problems ]\n" << std::endl;
    }
    
    return 0;
}
