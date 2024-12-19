/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:46:43 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/12/19 16:52:52 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        int count;
        Contact _contact[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void ADD(Contact contact);
        void SEARCH();
        void EXIT();
};
