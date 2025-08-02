#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

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