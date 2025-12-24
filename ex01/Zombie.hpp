/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:47:39 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 20:06:56 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <string>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(void)  : name("NO_NAME"){};
        Zombie(std::string n)  : name(n){};
        ~Zombie();
        // Zombie(const Zombie &other);
        void        announce(void );
        std::string &get_name(void );
        void        set_name(std::string new_name);
};

Zombie* newZombie(std::string name );
void randomChump(std::string name );
Zombie* zombieHorde(int N, std::string name );
#endif