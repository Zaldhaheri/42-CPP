/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:28:51 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/10/02 16:28:51 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string string;

class Brain
{
    private:
        string ideas[100];
    
    public:
        Brain();
        Brain(const Brain &b);
        ~Brain();
        Brain &operator=(const Brain &b);
        string getIdea(int index) const;
        void setIdea(int index, const string idea);
};