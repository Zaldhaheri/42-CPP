#include "phonebook.hpp"

Phonebook::Phonebook () : _index(0), _count(0) {}

Phonebook::~Phonebook() {}

void Phonebook::add_contact(std::string data[5])
{
	int index;

	index = _index;
	contacts[index].setFname(data[0]);
	contacts[index].setLname(data[1]);
	contacts[index].setNickname(data[2]);
	contacts[index].setPhone(data[3]);
	contacts[index].setSecret(data[4]);
	_index = ++index % 8;
	if (_count < 8)
		_count++;
}

int Phonebook::display_phonebook()
{
	int count;
	int index;


	count = _count;
	index = 0;
	if (_count == 0)
	{
		std::cout << BOLD CYAN << "No contacts to display\n";
		return (0);
	}
	std::cout << BOLD CYAN << std::left << std::setw(10) << "Index"
				<< std::setw(10) << "First" << std::setw(10) << "Last"
				<< std::setw(10) << "Nickname" << std::endl;
	while (index < count)
	{
		std::cout << WHITE << std::left << std::setw(10) << (index + 1)
				<< BLUE << std::setw(10) << contacts[index].getFname()
				<< std::setw(10) << contacts[index].getLname()
				<< std::setw(10) << contacts[index].getNickname()
				<< std::endl;
		index++;
	}
	return (1);
}

int Phonebook::display_contact(std::string index)
{
	int i;
	i = std::atoi(index.c_str()) - 1;
	if (i < 0 || i >= _count)
		return (0);
	std::cout << BLUE BOLD << std::left
				<< std::setw(15) << "First"
				<< std::setw(15) << "Last"
				<< std::setw(15) << "Nickname"
				<< std::setw(20) << "Phonenumber"
				<< std::setw(20) << "Secret"
				<< std::endl;
	
	std::cout << WHITE BOLD << std::left
				<< std::setw(15) << contacts[i].getFname()
				<< std::setw(15) << contacts[i].getLname()
				<< std::setw(15) << contacts[i].getNickname()
				<< std::setw(20) << contacts[i].getPhone()
				<< std::setw(20) << contacts[i].getSecret()
				<< std::endl << UNBOLD;
	return (1);
}

Contact::Contact() {}

Contact::~Contact() {}