/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:27:49 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:27:49 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string string;

class WrongAnimal
{
    protected:
        string _type;

    public:
        WrongAnimal();
        WrongAnimal(string name);
        WrongAnimal(const WrongAnimal &wa);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &wa);
        void makeSound() const;
        void setType(const string type);
        string getType() const;
};