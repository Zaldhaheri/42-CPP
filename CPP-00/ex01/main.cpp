/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:56:14 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/18 16:56:14 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    Phonebook phonebook;
    std::string input;
    std::string inputs[5];

    
    while (1)
    {   
        std::cout << BLACK << "+========================================================================+" << RESET << std::endl;
        std::cout << BLACK << "+======================  "<< CYAN BOLD ITALIC << "PHONEBOOK MAIN MENU" << BLACK UNBOLD << "  ===========================+" << RESET << std::endl;
        std::cout << BLACK << "+========================================================================+" << RESET << std::endl;
        std::cout << CYAN << "+ (" << GREEN << "ADD" << CYAN << ")-add new contact ; (" << GREEN <<
                        "SEARCH" << CYAN << ")-contact lookup ; (" << GREEN << "EXIT" << CYAN << ")-close program +" << RESET << std::endl;
        std::cout << "+ Select Option: ";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            std::cout << BLUE BOLD << "First name: ";
            std::getline(std::cin, inputs[0]);
            std::cout << WHITE <<"Last name: ";
            std::getline(std::cin, inputs[1]);
            std::cout << BLUE << "Nickname: ";
            std::getline(std::cin, inputs[2]);
            std::cout << WHITE <<"Phone number: ";
            std::getline(std::cin, inputs[3]);
            std::cout << BLUE <<"Secret: ";
            std::getline(std::cin, inputs[4]);
            phonebook.add_contact(inputs);
            std::cout << UNBOLD ITALIC GREEN << "Contact " + inputs[0] + " " + inputs[1] + " Added!\n";
        }
        else if (input == "SEARCH")
        {
            std::cout << "Select contact index to expand\n";
            if (!phonebook.display_phonebook())
                continue;
            do {
                std::cout << CYAN << "Index: " << RESET;
                std::getline(std::cin, input);
                if (!phonebook.display_contact(input))
                    std::cout << "Invalid index\n";
                else
                    break;
            } while (1);
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << RED  BOLD << "The option " << input << " is invalid\n" << RESET UNBOLD;
        std::cout << "\n\n\n";
    }
}