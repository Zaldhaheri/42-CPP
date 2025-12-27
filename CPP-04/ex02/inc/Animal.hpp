/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:29:49 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:29:49 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef std::string string;

class Animal
{
    protected:
        string _type;
        Animal();

    public:
        Animal(string name);
        Animal(const Animal &a);
        virtual ~Animal();
        Animal &operator=(const Animal &a);
        virtual void makeSound() const = 0;
        void setType(const string type);
        string getType() const;
};