/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:27:59 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 22:11:05 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();

Weapon club1 = Weapon("crude spiked club1");
HumanB jim("Jim");
jim.setWeapon(club1);
jim.attack();
club1.setType("some other type of club1");
jim.attack();

return 0;
}