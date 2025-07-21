/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:19:40 by qumiraud          #+#    #+#             */
/*   Updated: 2025/07/21 08:55:33 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "MyAwesomePhonebook.hpp"
#include "Contact.class.hpp"

class Phonebook
{
	public :
		Phonebook(void);
		~Phonebook(void);
		Contact	contact[8];

	private :
};

#endif