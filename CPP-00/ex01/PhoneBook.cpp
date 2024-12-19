/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:21:47 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/12/19 16:39:03 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : count(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::ADD(Contact contact)
{	
	_contact[count] = contact;
	count = (count + 1) % 8;
}

void PhoneBook::SEARCH()
{}

void PhoneBook::EXIT()
{}