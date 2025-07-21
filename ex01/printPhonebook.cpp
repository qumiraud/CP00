/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:10:41 by qumiraud          #+#    #+#             */
/*   Updated: 2025/07/21 16:47:58 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"

std::string	printSpaces(std::string infocontact)
{
	int	nbrspaces = 10;
	std::string	spaces;

	if (infocontact.length() < 10)
	{
		nbrspaces -= infocontact.length();
		while (nbrspaces--)
			spaces += " ";
		spaces += infocontact;
		return (spaces);
	}
	else
	{
		spaces = infocontact;
		spaces[9] = '.';
		spaces.resize(10);
		return (spaces);
	}
}

void	printHomeMessage(void)
{
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "-        ### PHONEBOOK SARL TO SERVE YOU ###       -" << std::endl;
	std::cout << "-                __________________                -" << std::endl;
	std::cout << "-                |empty repository|                -" << std::endl;
	std::cout << "-                |________________|                -" << std::endl;
	std::cout << "-tips : try ADD to create a first contact          -" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}

void	printExitMessage(void)
{
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "-\033[31m      *#####*                                     \033[0m-" << std::endl;
	std::cout << "-\033[31m    *##########*                                  \033[0m-" << std::endl;
	std::cout << "-\033[31m  *##############                                 \033[0m-" <<std::endl;
	std::cout << "-\033[31m  ################                                \033[0m-"  <<std::endl;
	std::cout << "-\033[31m ##################         **####*               \033[0m-" <<std::endl;
	std::cout << "-\033[31m  ##################     *##########              \033[0m-" <<std::endl;
	std::cout << "-\033[31m  ##################   *#############             \033[0m-" <<std::endl;
	std::cout << "-\033[31m   #################* ###############*            \033[0m-" <<std::endl;
	std::cout << "-\033[31m    #################################*            \033[0m-" <<std::endl;
	std::cout << "-\033[31m     ###############################              \033[0m-" <<std::endl;
	std::cout << "-\033[31m       #############################*             \033[0m-" <<std::endl;
	std::cout << "-\033[31m        *##########################               \033[0m-" <<std::endl;
	std::cout << "-\033[31m          ########################                \033[0m-" <<std::endl;
	std::cout << "-\033[31m           *####################*                 \033[0m-" <<std::endl;
	std::cout << "-\033[31m            *##################                   \033[0m-" <<std::endl;
	std::cout << "-\033[31m             *###############                     \033[0m-" <<std::endl;
	std::cout << "-\033[31m              #############                       \033[0m-" <<std::endl;
	std::cout << "-\033[31m               ##########                         \033[0m-" <<std::endl;
	std::cout << "-\033[31m              *#######*                           \033[0m-" <<std::endl;
	std::cout << "-\033[31m             *######*                             \033[0m-" <<std::endl;
	std::cout << "-\033[31m             ####                                 \033[0m-" <<std::endl;
	std::cout << "-\033[31m            ###                                   \033[0m-" <<std::endl;
	std::cout << "-\033[31m           #                                      \033[0m-" << "\033[0m" <<std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "-     Thank's to use our services, see you soon    -" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}
void printSearch(Phonebook phonebook)
{
	std::string	ask_index;
	std::string	secret_key;
	std::cout << "case 2" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "--                 -------------                  --" << std::endl;
	std::cout << "--     #####       --Phonebook--        #####     --" << std::endl;
	std::cout << "--                 -------------                  --" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "|     INDEX|  F.NAME  |  L.NAME  | NICKNAME |  - ---" << std::endl;
	std::cout << "|----------|----------|----------|----------|  - ---" << std::endl;
	for (int j = 0; j < 8; j++)
		std::cout << "|#### " << j + 1 << " ###|" << printSpaces(phonebook.contact[j].getInfoContact(0)) << "|" << printSpaces(phonebook.contact[j].getInfoContact(1)) << "|" << printSpaces(phonebook.contact[j].getInfoContact(2)) << "|  - ---" << std::endl;
	std::cout << "Wich of this contact information do you need :";
	std::cin >> ask_index;
	std::cout << "His/Her first name is " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(0) <<  std::endl
		<< "and his/her last name is " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(1) << std::endl
				<< "but he/she prefers to be called " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(2)<< "," << std::endl
					<< "his/her phone number is " << phonebook.contact[std::atoi(ask_index.c_str()) - 1].getInfoContact(3) << std::endl
						<< "and if you want I have a terrible and darkest secret about him/her, if you  want know this one press 'yes'" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "choice : "; std::cin >> secret_key;
	if (secret_key == "yes")
		std::cout << "His/Her darkest secret is :" << phonebook.contact[atoi(ask_index.c_str()) - 1].getInfoContact(4) << std::endl;
	else
		std::cout << "return to phonebook" << std::endl;
}

void	printBadInput(void)
{
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "-       Sorry but I must ignore your request       -" << std::endl << "-             cause is not a good input            -" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}
