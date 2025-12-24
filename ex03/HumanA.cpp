/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:22:04 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 22:32:24 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << HumanA::Name << " attacks with their " 
            << HumanA::weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &NewWeapon)
{
    HumanA::weapon = NewWeapon;
}