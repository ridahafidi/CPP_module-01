/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:16:00 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 22:28:47 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string Name;
        Weapon *weapon;
    public:
        void    attack();
        void    setWeapon(Weapon &NewWeapon);
        HumanB(void)    :   Name(""), weapon(0) {};
        HumanB(std::string N) : Name(N), weapon(0) {};
        HumanB(std::string N, Weapon *W) :   Name(N), weapon(W){};
        // ~HumanB();
};

#endif