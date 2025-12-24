/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:07:55 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 20:18:32 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie* zombieHorde(int N, std::string name )
{
    if (N <= 0)
        return 0;
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
    {
        horde[i].set_name(name);
    }
    return horde;
}
