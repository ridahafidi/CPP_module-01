/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:25:50 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:10:15 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << Name << " attacks with their ";
    if (weapon)
        std::cout << weapon->getType();
    else
        std::cout << "(unarmed)";
    std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon &NewWeapon)
{
    weapon = &NewWeapon;
}