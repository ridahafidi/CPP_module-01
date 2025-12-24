/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:22:46 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/24 21:04:37 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "This is the string address : " << &string << '\n' <<
            "This is the stringPTR address : " << stringPTR << '\n' <<
            "This is the stringREF address : " << &stringREF << std::endl;
    std::cout << "This is the string value : " << string << '\n' <<
                "This is the stringPTR value : " << *stringPTR << '\n' <<
                "This is the stringREF value : " << stringREF << std::endl;
}