/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:22:04 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:10:00 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << Name << " attacks with their " 
            << weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &NewWeapon)
{
    weapon = NewWeapon;
}