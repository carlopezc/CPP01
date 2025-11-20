/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlotalcd <carlotalcd@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:15:29 by carlotalcd        #+#    #+#             */
/*   Updated: 2025/11/20 20:37:00 by carlotalcd       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    std::cout << "Zombie declarado en HEAP" << std::endl;
    randomChump("Carlota");
    std::cout << "Zombie declarado en STACK" << std::endl;
    zombie = newZombie("Marco");
    zombie->announce();
    delete zombie;
    return (1);
}