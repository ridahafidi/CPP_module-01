/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:07:13 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 21:27:20 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string Type;
    public:
        std::string &getType();
        void        setType(std::string NewType);
        Weapon():Type(""){};
        Weapon(std::string NewType):Type(NewType){};
        // ~Weapon();
};


#endif