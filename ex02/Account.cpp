/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:49:45 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/06 16:09:21 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <stdlib.h>
#include <iostream>

int	Account::_nbAccounts = 0;

// void	Account::displayStatus(void) const
// {
// 	//?
// }

Account::Account(int initial_deposit)
	:_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount << "created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount << "closed" << std::endl;
}