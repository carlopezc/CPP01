/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:24:57 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 16:49:07 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *horde;
    int i;

    i = 0;
    horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}