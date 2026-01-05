/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:35:59 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:18:50 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("scasccac");
    zombie.announce();
    Zombie zombiex;
    zombiex.announce();
    zombiex.set_name("bbbbb");
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
    int N = 10;
    Zombie *zombief = zombieHorde(N, "xxxxxx");
    if (!zombief)
        return (0);
    i = 0;
    while (i < N)
    {
        zombief[i].announce();
        i++;
    }
    delete []zombief;
}