/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:56:32 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/09/18 16:56:32 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define BOLD "\033[1m"
# define UNBOLD "\033[22m"
# define ITALIC "\033[3m"
# define UNITALIC "\033[23m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define RESET "\033[0m"

class Contact 
{
	private:
	std::string _fname;
	std::string _lname;
	std::string _nickname;
	std::string _phone;
	std::string _secret;

	public:
	Contact(void);
	~Contact(void);

	void		setFname(const std::string &fname) { _fname = fname; };
	std::string	getFname(void) const { return _fname; };
	void		setLname(const std::string &lname) { _lname = lname; };
	std::string	getLname(void) const { return _lname; };
	void		setNickname(const std::string &nickname) { _nickname = nickname; };
	std::string	getNickname(void) const { return _nickname; };
	void		setPhone(const std::string &phone) { _phone = phone; };
	std::string	getPhone(void) const { return _phone; };
	void		setSecret(const std::string &secret) { _secret = secret; };
	std::string	getSecret(void) const { return _secret; };


};

class Phonebook
{
	private:
	Contact contacts[8];
	int _index;
	int _count;

	public:
	Phonebook(void);
	~Phonebook(void);
	void add_contact(std::string data[5]);
	int display_phonebook();
	int display_contact(std::string index);
};
#endif