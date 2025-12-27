/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:51:20 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/27 18:47:27 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    for(int retry = 0;retry <= 10; retry++)
    {
        harl.complain("debug");
        harl.complain("info");
        harl.complain("warning");
        harl.complain("error");
    }
}
