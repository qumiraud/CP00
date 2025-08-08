/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:10:41 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/08 10:59:59 by qumiraud         ###   ########.fr       */
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
