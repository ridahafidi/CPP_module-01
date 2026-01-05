/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CopyAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 15:18:52 by rhafidi           #+#    #+#             */
/*   Updated: 2026/01/05 21:32:54 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CopyAndReplace.hpp"

void    CopyAndReplace::copy_replace(std::string &filename, std::string &s1, std::string &s2)
{
    std::ifstream infile(filename.c_str());
    if (!infile) 
    { 
        std::cerr << "Cannot open input\n";
        return ;
    }
    std::ostringstream buf;
    buf << infile.rdbuf();
    std::string file_str = buf.str();
    infile.close();
    if (infile.fail())
        std::cerr << "Close failed\n";
    size_t  LastPos = 0;
    size_t  file_length = 0;
    size_t  s1_len = 0;
    size_t  s2_len = s2.length();

    file_length = file_str.length();
    if (s1.empty())
        std::cerr << "s1 is empty\n";
    if (s2.empty())
        std::cerr << "s2 is empty\n";
    while(true)
    {
        LastPos = file_str.find(s1, LastPos);
        if (LastPos == std::string::npos)
            break;
        s1_len = s1.length();
        file_str.erase(LastPos, s1_len);
        file_str.insert(LastPos, s2);
        LastPos += s2_len;
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile) 
    { 
        std::cerr << "Cannot open output\n";
        return;
    }
    outfile << file_str;
}
