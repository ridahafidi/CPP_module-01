/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:10:25 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 21:13:17 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string& Weapon::getType()
{
    return (Weapon::Type);
}

void        Weapon::setType(std::string NewType)
{
    Weapon::Type = NewType;
}