#include "../inc/ScalarConverter.hpp"

bool isChar(const string &literal)
{
	return (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]));
}

bool isInt(const string &literal)
{
	size_t	i = 0;

	if (literal[i] == '-' || literal[i] == '+')
		i++;
	if (i == literal.length())
		return (false);
	for (; i < literal.length(); i++)
	{
		if (!std::isdigit(literal[i]))
			return (false);
	}
	return (true);
}

bool isFloat(const string &literal)
{
	size_t	i = 0;
	bool	dot_found = false;

	if (literal[i] == '-' || literal[i] == '+')
		i++;
	if (i == literal.length())
		return (false);
	for (; i < literal.length(); i++)
	{
		if (literal[i] == '.')
		{
			if (dot_found)
				return (false);
			dot_found = true;
		}
		else if (literal[i] == 'f' && i == literal.length() - 1)
			return (dot_found);
		else if (!std::isdigit(literal[i]))
			return (false);
	}
	return (dot_found);
}

bool isDouble(const string &literal)
{
	size_t	i = 0;
	bool 	dot_found = false;

	if (literal[i] == '-' || literal[i] == '+')
		i++;
	if (i == literal.length())
		return (false);
	for (; i < literal.length(); i++)
	{
		if (literal[i] == '.')
		{
			if (dot_found)
				return (false);
			dot_found = true;
		}
		else if (!std::isdigit(literal[i]))
			return (false);
	}
	return (dot_found);
}

bool isPseudo(const string &literal)
{
	return (literal == "nan" || literal == "+inf" || literal == "-inf" ||
			literal == "nanf" || literal == "+inff" || literal == "-inff");
}

void convertChar(const string &literal)
{
	char c = literal[0];
	if (c < 32 || c > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void convertInt(const string &literal)
{
	int i = std::atoi(literal.c_str());
	if (i < 32 || i > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void convertFloat(const string &literal)
{
	float f = std::atof(literal.c_str());
	if (f < 32 || f > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void convertDouble(const string &literal)
{
	double d = std::atof(literal.c_str());
	if (d < 32 || d > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	std::cout << "char: " << static_cast<char>(d) << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void convertPseudo(const string &literal)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << literal << std::endl;
	std::cout << "double: " << literal << std::endl;
}

void inputCheck(const string &literal)
{
	if (isChar(literal))
		convertChar(literal);
	else if (isInt(literal))
		convertInt(literal);
	else if (isFloat(literal))
		convertFloat(literal);
	else if (isDouble(literal))
		convertDouble(literal);
	else if (isPseudo(literal))
		convertPseudo(literal);
	else
		std::cerr << "Error: Invalid literal format." << std::endl;
}

void ScalarConverter::convert(const string &literal)
{
	inputCheck(literal);
}