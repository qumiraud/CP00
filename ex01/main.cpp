/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:20:51 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/08 11:00:24 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"


void	entryAttribution(std::string entry, int *entryvalue)
{
	if (entry == "ADD")
		*entryvalue = 1;
	else if (entry == "SEARCH")
		*entryvalue = 2;
	else if (entry == "EXIT")
		*entryvalue = 3;
	else
		*entryvalue = 0;
	return;
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	entry;
	std::string	ask_index;
	std::string	secret_key;
	int			entryvalue = 0;
	int			i = 0;
	bool		exit = false;

	printHomeMessage();
	while (exit == false)
	{
		if (i == 8)
			i = 0;
		std::cout << std::endl << "options : 'ADD' 'SEARCH' 'EXIT'" << std::endl;
		std::cout << "entry : ";
		if (!(std::cin >> entry))
			return (1);
		entryAttribution(entry, &entryvalue);
		switch (entryvalue)
		{
			//ADD
			case 1:
			{
				phonebook.setPhonebookContact(i);
				i++;
				break;
			}
			//SEARCH
			case 2:
			{
				phonebook.printSearch();
				break;
			}
			//EXIT
			case 3:
			{
				printExitMessage();
				exit = true;
				break;
			}
			//BAD INPUT
			default:
			{
				phonebook.printBadInput();
				break;
			}
		}
	}
	return(0);
}
