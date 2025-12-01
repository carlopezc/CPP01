/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:28:06 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 16:39:24 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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