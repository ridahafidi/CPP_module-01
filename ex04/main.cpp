/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:18:51 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/26 16:06:17 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CopyAndReplace.hpp"

int main(int ac, char **av)
{
    
    if (ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        CopyAndReplace cr(s1, s2, filename);
        cr.copy_replace(cr.filename, cr.s1, cr.s2);
    }
    else
        std::cerr << "Carefull with the arguments given to the program : ./CopyAndReplace filename s1 s2"
                << std::endl;
}