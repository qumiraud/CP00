/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:17:54 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/08 10:57:32 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"
#include "Phonebook.hpp"

void	Phonebook::setPhonebookContact(int i)
{
	this->contact[i].setFillContact();
}

void	Phonebook::printBadInput(void)
{
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "-       Sorry but I must ignore your request       -" << std::endl;
	std::cout << "-             cause is not a good input            -" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}

void	Phonebook::printSearch(void)
{
	//If no contact yes
	if (this->getPhonebookContact(0, 0).empty() != 0)
	{
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "-         Please 'ADD' before search.              -" << std::endl;
		std::cout << "-            return to main menu                   -" << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
		return ;
	}
	std::string	ask_index;
	std::string	secret_key;

	//print phonebook
	std::cout << "case 2" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "--                 -------------                  --" << std::endl;
	std::cout << "--     #####       --Phonebook--        #####     --" << std::endl;
	std::cout << "--                 -------------                  --" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "|     INDEX|  F.NAME  |  L.NAME  | NICKNAME |  - ---" << std::endl;
	std::cout << "|----------|----------|----------|----------|  - ---" << std::endl;
	for (int j = 0; j < 8; j++)
		std::cout << "|#### " << j + 1 << " ###|" << printSpaces(static_cast <std::string>(this->getPhonebookContact(j, 0))) << "|" << printSpaces(this->getPhonebookContact(j, 1)) << "|" << printSpaces(this->getPhonebookContact(j, 2)) << "|  - ---" << std::endl;
	std::cout << "Wich of this contact information do you need :";

	//take index on entry
	std::cin >> ask_index;
	int index = std::atoi(ask_index.c_str()) - 1;
	//bad entry on index
	if (ask_index != "1" && ask_index != "2" && ask_index != "3" && ask_index != "4" && ask_index != "5" && ask_index != "6" && ask_index != "7" && ask_index != "8")
	{
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "-      Error, you fill a bad entry on index.       -" << std::endl;
		std::cout << "-            return to main menu                   -" << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
		return ;
	}
	//the value of this entry is on an empty contact
	if (this->getPhonebookContact(index, 0).empty())
	{
		std::cout << "----------------------------------------------------" << std::endl;
		std::cout << "-     This contact index is still empty.           -" << std::endl;
		std::cout << "-            return to main menu                   -" << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
		return ;
	}
	//print info about the contact of the index
	std::cout << "His/Her first name is " << this->getPhonebookContact(index, 0) <<  std::endl
		<< "and his/her last name is " << this->getPhonebookContact(index, 1) << std::endl
				<< "but he/she prefers to be called " << this->getPhonebookContact(index, 2)<< "," << std::endl
					<< "his/her phone number is " << this->getPhonebookContact(index, 3) << std::endl
						<< "and if you want I have a terrible and darkest secret about him/her, if you  want know this one press 'yes'" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	//secret question
	std::cout << "choice : "; std::cin >> secret_key;
	if (secret_key == "yes")
		std::cout << "His/Her darkest secret is :" << this->getPhonebookContact(index, 4) << std::endl;
	else
		std::cout << "return to phonebook" << std::endl;
}

std::string	Phonebook::getPhonebookContact(int i, int j) const
{
		return (this->contact[i].getInfoContact(j));
}


Phonebook::Phonebook(void)
{
	// std::cout << "Phonebook constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	// std::cout << "destructor called" << std::endl;
	return;
}