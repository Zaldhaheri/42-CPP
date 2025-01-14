#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		arr[8];
		const int	max_contacts;
		int			current;
		int			num_contacts;
	public:
		PhoneBook();
		~PhoneBook();

		void add_contact();
		void search_contact();
};

#endif