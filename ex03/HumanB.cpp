/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:22:26 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 19:27:20 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    weapon = NULL;
    this->name = name;
    std::cout << "HumanB created! " << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructed" << std::endl;
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}