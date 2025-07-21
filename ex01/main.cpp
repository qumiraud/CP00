/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:20:51 by qumiraud          #+#    #+#             */
/*   Updated: 2025/07/21 16:45:07 by qumiraud         ###   ########.fr       */
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
// std::string	printSpaces(std::string infocontact)
// {
// 	int	nbrspaces = 10;
// 	std::string	spaces;

// 	if (infocontact.length() < 10)
// 	{
// 		nbrspaces -= infocontact.length();
// 		while (nbrspaces--)
// 			spaces += " ";
// 		spaces += infocontact;
// 		return (spaces);
// 	}
// 	else
// 	{
// 		spaces = infocontact;
// 		spaces[9] = '.';
// 		spaces.resize(10);
// 		return (spaces);
// 	}
// }


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
		std::cout << "entryvalue:" << entryvalue << std::endl;
		switch (entryvalue)
		{
			case 1:
			{
				std::cout << "case 1" << std::endl;
				phonebook.contact[i].setFillContact();
				i++;
				break;
			}
			case 2:
			{
				printSearch(phonebook);
				// std::cout << "case 2" << std::endl;
				// std::cout << "----------------------------------------------------" << std::endl;
				// std::cout << "--                 -------------                  --" << std::endl;
				// std::cout << "--     #####       --Phonebook--        #####     --" << std::endl;
				// std::cout << "--                 -------------                  --" << std::endl;
				// std::cout << "----------------------------------------------------" << std::endl;
				// std::cout << "|     INDEX|  F.NAME  |  L.NAME  | NICKNAME |  - ---" << std::endl;
				// std::cout << "|----------|----------|----------|----------|  - ---" << std::endl;
				// for (int j = 0; j < 8; j++)
				// 	std::cout << "|#### " << j + 1 << " ###|" << printSpaces(phonebook.contact[j].getInfoContact(0)) << "|" << printSpaces(phonebook.contact[j].getInfoContact(1)) << "|" << printSpaces(phonebook.contact[j].getInfoContact(2)) << "|  - ---" << std::endl;
				// std::cout << "Wich of this contact information do you need :";
				// std::cin >> ask_index;
				// std::cout << "His/Her first name is " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(0) <<  std::endl
				// 	<< "and his/her last name is " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(1) << std::endl
				// 			<< "but he/she prefers to be called " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(2)<< "," << std::endl
				// 				<< "his/her phone number is " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(3) << std::endl
				// 					<< "and if you want I have a terrible and darkest secret about him/her, if you  want know this one press 'yes'" << std::endl;
				// std::cout << "choice : "; std::cin >> secret_key;
				// if (secret_key == "yes")
				// 	std::cout << "His/Her darkest secret is :" << phonebook.contact[atoi(ask_index.c_str()) - 1].getInfoContact(4) << std::endl;
				// else
				// 	std::cout << "return to phonebook" << std::endl;
				break;
			}
			case 3:
			{
				printExitMessage();
				exit = true;
				break;
			}
			default:
			{
				printBadInput();
				break;
			}
		}
	}
	return(0);
}