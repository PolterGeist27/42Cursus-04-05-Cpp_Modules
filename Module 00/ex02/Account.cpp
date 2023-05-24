/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:49:33 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 10:56:08 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:6;amount:754;created

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
   // this->_amount = initial_deposit;
    this->_accountIndex = this->getNbAccounts();
    this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

// [19920104_091532] index:4;amount:1245;closed

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;

    _nbAccounts--;
    _totalAmount -= this->_amount;
}

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

// [19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1

void    Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount<< ";";
    std::cout << "deposit:" << deposit<< ";";
    
    this->_amount += deposit;
    std::cout << "amount:" << this->_amount<< ";";

    this->_nbDeposits++;
    std::cout << "deposits:" << this->_nbDeposits << std::endl;
    
    _totalAmount += deposit;
    _totalNbDeposits++;
}

// [19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
// [19920104_091532] index:0;p_amount:47;withdrawal:refused

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount<< ";";
    if (this->_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    
    this->_amount -= withdrawal;
    std::cout << "amount:" << this->_amount<< ";";

    this->_nbWithdrawals++;
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int		Account::checkAmount( void ) const {
    return this->_amount;
}

// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount<< ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}


// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount<< ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

// YearMonthDay_HoursMinutesSeconds

void	Account::_displayTimestamp(void)
{
    std::time_t timeNow;
    char timeString[100];

    timeNow = std::time(NULL);
    std::strftime(timeString, sizeof(timeString), "%Y%m%d_%H%M%S", std::localtime(&timeNow));
    std::cout << "[" << timeString << "] ";
}
