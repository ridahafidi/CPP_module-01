/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:51:25 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/22 21:57:09 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::set_name(std::string new_name)
{
    Zombie::name = new_name;
}

std::string &Zombie::get_name(void )
{
    return (Zombie::name);
}

void    Zombie::announce(void)
{
    std::cout << Zombie::get_name() << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructed Zombie Name : "<< name << std::endl;
}