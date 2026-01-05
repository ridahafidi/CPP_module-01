/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:51:25 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:19:30 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::set_name(const std::string &new_name)
{
    Zombie::name = new_name;
}

std::string &Zombie::get_name(void )
{
    return (name);
}

void    Zombie::announce(void)
{
    std::cout << get_name() << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructed Zombie Name : "<< name << std::endl;
}