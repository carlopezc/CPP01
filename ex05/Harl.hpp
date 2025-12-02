/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 19:16:00 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/02 19:18:56 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:
        void complain(std::string level);

    private:
        Harl();
        ~Harl();
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
};

#endif