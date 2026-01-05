/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:35:59 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:14:07 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("scasccac");
    zombie.announce();
    Zombie zombiex;
    zombiex.announce();
    zombiex.set_name("xxxxxx");
    zombiex.announce();
    randomChump("z1");
    Zombie *zombies;
    int i = 0;
    
    while (i < 10)
    {
        zombies = newZombie("reda");
        zombies->announce();
        delete zombies;
        i++;
    }
}