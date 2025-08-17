#include "phonebook.hpp"

Phonebook::Phonebook () : _index(0), _count(0) {}

Phonebook::~Phonebook() {}

void Phonebook::add_contact(std::string data[5])
{
	int index;
	
	std::cout << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << " " << data[4] << "\n";
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
		std::cout << "No contacts to display\n";
		return (0);
	}
	std::cout << std::left << std::setw(10) << "Index" << std::setw(10) << "First" << std::setw(10) << "Last" << std::setw(10) << "Nickname" << std::endl;
	while (index < count)
	{
		std::cout << std::left << std::setw(10) << (index + 1) << std::setw(10) << contacts[index].getFname() << std::setw(10) << contacts[index].getLname() << std::setw(10) << contacts[index].getNickname() << std::endl;
		index++;
	}
	return (1);
}

int Phonebook::display_contact(std::string index)
{
	int i;
	i = std::atoi(index.c_str()) - 1;
	std::cout << "Selected index: " << i << "\n";
	if (i < 0 || i >= _count)
		return (0);
	std::cout << std::left <<
					std::setw(15) << "First" <<
					std::setw(15) << "Last" <<
					std::setw(15) << "Nickname" <<
					std::setw(20) << "Phonenumber" <<
					std::setw(20) << "Secret" <<
					std::endl;
	
	std::cout << std::left <<
					std::setw(15) << contacts[i].getFname() <<
					std::setw(15) << contacts[i].getLname() <<
					std::setw(15) << contacts[i].getNickname() <<
					std::setw(20) << contacts[i].getPhone() <<
					std::setw(20) << contacts[i].getSecret() <<
					std::endl;
	return (1);
}

Contact::Contact() {}

Contact::~Contact() {}