/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:25:50 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 22:29:30 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << HumanB::Name << " attacks with their ";
    if (HumanB::weapon)
        std::cout << HumanB::weapon->getType();
    else
        std::cout << "(unarmed)";
    std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon &NewWeapon)
{
    HumanB::weapon = &NewWeapon;
}