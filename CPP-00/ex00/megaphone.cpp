/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:38:52 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/12/19 13:14:41 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int j;
	char c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = ((argv[i][j] - 'a') % 26) + 'A';
			if (argv[i][j] >= 'a' && argv [i][j] <= 'z')
				std::cout << c;
			else
				std::cout << argv[i][j];
			j++;
		}
	}
	std::cout << '\n';
	return 0;
}