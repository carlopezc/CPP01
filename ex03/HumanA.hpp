/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:22:23 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/01 18:10:08 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& weapon;
        std::string name;
    
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

    void attack();
};

#endif