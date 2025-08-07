/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:49:45 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/07 16:15:12 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
// #include <stdlib>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << " index:" <<this->_accountIndex
		<< ";p_amount:" << this->_amount
			<< ";deposits:" << deposit
				<< ";amount:" << deposit + _amount
					<< ";nb_deposits:" << _nbDeposits + 1
						<< std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" <<this->_accountIndex
		<< ";p_amount:" << this->_amount;
	if (this->checkAmount() >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals
					<<std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

//************GET_METHODES**********/
int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
//************************************/

//????????????DISPLAY_METHODS?????????//
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" <<this->_accountIndex
		<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
					<< std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" <<getNbAccounts()
		<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
					<< std::endl;
}
void Account::_displayTimestamp(void)
{
	std::tm*	actually;
	std::time_t	t;

	t = std::time(NULL);
	actually = std::localtime(&t);


	std::cout << "[" << actually->tm_year + 1900
		<< "0" << actually->tm_mon << "0" << actually->tm_mday
			<< "_" << actually->tm_hour
				<< actually->tm_min << actually->tm_sec << "]";
}
//??????????????????????????????????


Account::Account(int initial_deposit)
	:_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
			<< ";created"
				<< std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" <<_accountIndex
		<< ";amount:" << _amount
			<< ";closed"
				<< std::endl;
}