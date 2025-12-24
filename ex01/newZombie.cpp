/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:35:41 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 18:56:53 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie;
    zombie->set_name(name);
    return (zombie);
}
