/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:02:55 by mbaptist          #+#    #+#             */
/*   Updated: 2024/04/29 17:10:20 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

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

#endif