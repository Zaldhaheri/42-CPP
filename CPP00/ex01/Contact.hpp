#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        std::string fname;
        std::string lname;
        std::string nickname;
        std::string number;
        std::string secret;
    public:
        Contact(void);
        ~Contact(void);
        std::string get_fname(void);
        std::string get_lname(void);
        std::string get_nickname(void);
        std::string get_number(void);
        std::string get_secret(void);
        void set_fname(std::string fname);
        void set_lname(std::string lname);
        void set_nickname(std::string nickname);
        void set_number(std::string number);
        void set_secret(std::string secret);
};

#endif