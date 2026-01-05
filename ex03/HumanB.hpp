/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:16:00 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:08:33 by rhafidi          ###   ########.fr       */
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
        HumanB(const std::string &N) : Name(N), weapon(0) {};
        HumanB(const std::string &N, Weapon *W) :   Name(N), weapon(W){};
        // ~HumanB();
};

#endif