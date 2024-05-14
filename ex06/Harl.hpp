/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struf <struf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:02:55 by mbaptist          #+#    #+#             */
/*   Updated: 2024/04/30 15:19:40 by struf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string.h>

class Harl {
    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
        
    public:
        Harl();
        ~Harl();
        void complain(std::string level);

};

int validLvl(const std::string& level);

#endif