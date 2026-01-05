/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:16:29 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:08:04 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string Name;
        Weapon &weapon;
    public:
        void    attack();
        void    setWeapon(Weapon &NewWeapon);
        HumanA(Weapon &W):Name("") ,weapon(W) {};
        HumanA(const std::string &N, Weapon &W):Name(N), weapon(W){};
        // ~HumanA();
};




#endif