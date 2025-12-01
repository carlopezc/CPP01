/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:22:19 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 18:11:12 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << "HumanA created! " << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}