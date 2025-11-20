/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:38:22 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/11/20 20:34:13 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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