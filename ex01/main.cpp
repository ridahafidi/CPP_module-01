/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:35:59 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 20:21:21 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("scasccac");
    zombie.announce();
    Zombie zombiex;
    zombiex.announce();
    randomChump("lqlawi");
    Zombie *zombies;
    int i = 0;
    
    while (i < 10)
    {
        zombies = newZombie("reda");
        zombies->announce();
        delete zombies;
        i++;
    }
    Zombie *zombief = zombieHorde(10, "xxxxxx");
    i = 0;
    while (i < 9)
    {
        zombief[i].announce();
        i++;
    }
    delete []zombief;
}