/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:28:06 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/08 16:23:27 by carlopez         ###   ########.fr       */
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

        Zombie();
        ~Zombie();

    void announce(void);
    void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif