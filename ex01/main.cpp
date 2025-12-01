/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:25:45 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 16:49:26 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int i;

    i = 0;
    horde = zombieHorde(5, "Aitor");
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
}