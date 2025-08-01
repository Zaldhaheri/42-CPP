/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:10:49 by marvin            #+#    #+#             */
/*   Updated: 2025/07/17 20:10:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string input;

    while (1)
    {
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            std::cout << "ADD chosen\n";
        }
        else if (input == "SEARCH")
        {
            std::cout << "SEARCH chosen\n";
        }
        else if (input == "EXIT")
        {
            std::cout << "EXIT chosen\n";
        }
        else
            std::cout << "The option " << input << " is invalid\n";
    }
}