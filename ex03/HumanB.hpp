/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:22:28 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 19:27:05 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    
    public:
        HumanB(std::string name);
        ~HumanB();

    void attack();
    void setWeapon(Weapon& weapon);
};

#endif