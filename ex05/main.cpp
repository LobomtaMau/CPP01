/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struf <struf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:03:02 by mbaptist          #+#    #+#             */
/*   Updated: 2024/04/30 11:56:41 by struf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main() {
    Harl harlinhas;
    harlinhas.complain("DEBUG");
    harlinhas.complain("INFO");
    harlinhas.complain("WARNING");
    harlinhas.complain("ERROR");

    Harl TOY;
    TOY.complain("TENHO SEDE");
    TOY.complain("TENHO MTA SEDE");
    TOY.complain("WARNING TENHO MESMO MTA SEDE");
    return 0;
}
