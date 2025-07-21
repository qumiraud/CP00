/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:17:49 by qumiraud          #+#    #+#             */
/*   Updated: 2025/04/14 16:06:24 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	std::string	megaphone;

	i = 1;
	if (argc < 2)
	{
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*" << std::endl;
		return (1);
	}
	while (i < argc)
	{
		megaphone += argv[i];
		i++;
	}
	i = -1;
	while (++i <= (int)megaphone.size())
		megaphone[i] = std::toupper(megaphone[i]);
	std::cout << megaphone << std::endl;
}
