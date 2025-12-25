/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CopyAndReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:18:50 by rhafidi           #+#    #+#             */
/*   Updated: 2025/12/25 21:38:32 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_AND_REPLACE_HPP
#define COPY_AND_REPLACE_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
class CopyAndReplace
{
    public:
    std::string s1;
    std::string s2;
    std::string filename;
    void copy_replace(std::string &filename, std::string &s1, std::string &s2);
    CopyAndReplace():s1(""), s2(""), filename(""){};
    CopyAndReplace(std::string &s1, std::string &s2, std::string &filename):s1(s1), s2(s2), filename(filename){}
    // ~CopyAndReplace();
};


#endif