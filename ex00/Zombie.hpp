/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:38:22 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/12/10 17:07:10 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();

        void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif