/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:51:21 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/27 18:51:18 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


    struct entry
{
    std::string table[4];
    entry(const char * debug, const char * info, const char * warning, const char * error)
    {
        table[0] = debug;
        table[1] = info;
        table[2] = warning;
        table[3] = error;
    };
};

void Harl::complain(std::string level)
{
    void (Harl::*HarlComplain[4])(void);
    Harl Object;
    int   index = 0;
    entry entry("debug", "info", "warning", "error");    
    HarlComplain[0] = &Harl::debug;
    HarlComplain[1]= &Harl::info;
    HarlComplain[2]= &Harl::warning;
    HarlComplain[3] = &Harl::error;
    while (index <= 3)
    {
        if (level == entry.table[index])
        {
            (Object.*HarlComplain[index])();
        }
        index++;
    }
}