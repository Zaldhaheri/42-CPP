/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:50:39 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/12/19 16:45:57 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
    private:
        std::string _fname;
        std::string _lname;
        std::string _number;
    public:
        Contact(void);
        Contact(std::string fname, std::string lname, std::string number);
        ~Contact();
};