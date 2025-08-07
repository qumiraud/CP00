/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:19:40 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/07 10:42:42 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "MyAwesomePhonebook.hpp"
#include "Contact.class.hpp"

class Phonebook
{
	public :
		void	setPhonebookContact(int i);
		std::string	getPhonebookContact(int i, int j) const;
		Phonebook(void);
		~Phonebook(void);
	private :
		Contact	contact[8];
};

#endif