/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:19:40 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/08 10:57:00 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "MyAwesomePhonebook.hpp"
#include "Contact.class.hpp"

class Phonebook
{
	public :
		static void	printBadInput(void);
		void		printSearch(void);
		void		setPhonebookContact(int i);
		std::string	getPhonebookContact(int i, int j) const;
		Phonebook(void);
		~Phonebook(void);
	private :
		Contact	contact[8];
};

#endif