/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:17:54 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/07 10:44:02 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"
#include "Phonebook.hpp"

void	Phonebook::setPhonebookContact(int i)
{
	this->contact[i].setFillContact();
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