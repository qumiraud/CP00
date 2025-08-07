/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:05:49 by qumiraud          #+#    #+#             */
/*   Updated: 2025/07/23 10:34:30 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWESOMEPHONEBOOK_HPP
# define MYAWESOMEPHONEBOOK_HPP

# include <iostream>
#include <string.h>
#include <stdlib.h>
# include "Phonebook.hpp"
# include "Contact.class.hpp"
# include "Phonebook.hpp"

//   #PRINT_MESSAGE#   //
void	printExitMessage(void);
void	printHomeMessage(void);
void	printBadInput(void);
void printSearch(Phonebook &phonebook);
std::string	printSpaces(std::string infocontact);




#endif