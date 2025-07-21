/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:19:43 by qumiraud          #+#    #+#             */
/*   Updated: 2025/07/21 10:33:32 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhonebook.hpp"
#include "Contact.class.hpp"

void	Contact::setFillContact(void)
{
	std::cout << "Fill information needed :" << std::endl;
	std::cout << "                      |---->First Name: ";
	std::cin >> this->_firstName;
	std::cout << "                      |---->Last Name: ";
	std::cin >> this->_lastName;
	std::cout << "                      |---->Nick Name: ";
	std::cin >> this->_nickName;
	std::cout << "                      |---->Phone Number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "                      |---->Darkest Secret: ";
	std::cin >> this->_darkestSecret;
}
std::string	Contact::getInfoContact(int i)
{
	if (i == 0)
	{
		return (this->_firstName);
	}
	else if (i == 1)
	{
		return (this->_lastName);
	}
	else if (i == 2)
	{
		return (this->_nickName);
	}
	else if (i == 3)
	{
		return (this->_phoneNumber);
	}
	else if (i == 4)
	{
		return (this->_darkestSecret);
	}
	else
		return ("OUPS unexpected error has been find");
}
Contact::Contact(void)
{
	std::cout << "Contact constrctor called" << std::endl;
}
Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}
