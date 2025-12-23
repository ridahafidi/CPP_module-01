/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 21:35:59 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/22 22:07:21 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("scasccac");
    zombie.announce();
    Zombie zombiex;
    zombiex.announce();

    Zombie *zombies;
    int i = 0;
    
    while (i < 10)
    {
        zombies = zombie.newZombie("reda");
        zombies->announce();
        delete zombies;
        i++;
    }
}