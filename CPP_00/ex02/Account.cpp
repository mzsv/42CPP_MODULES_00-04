/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:46:42 by amenses-          #+#    #+#             */
/*   Updated: 2023/11/23 16:16:48 by amenses-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() :
    _accountIndex(0),
    _amount(0),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
}

/* [19920104_091532] index:0;amount:42;created */
Account::Account(int initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
        << ";created" << std::endl;
}

/* [19920104_091532] index:7;amount:8942;closed */
Account::~Account()
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
        << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

/* [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 */
void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
        << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
        << std::endl;
}

/* [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1 */
void Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount
        << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits 
        << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

/* [19920104_091532] index:0;p_amount:47;withdrawal:refused */
bool Account::makeWithdrawal(int withdrawal)
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount
        << ";withdrawal:";
    if (withdrawal > this->_amount) {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:"
        << this->_nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount() const
{
    return this->_amount;
}

/* [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0 */
void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
        << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

/* [19920104_091532] */
void Account::_displayTimestamp()
{
    time_t  currentTime = std::time(0);
    char    ptr[18];
    size_t  maxsize = 18;
    const struct tm *timeptr = localtime(&currentTime);

    strftime(ptr, maxsize,"[%Y%d%m_%I%M%S]", timeptr);
    std::cout << ptr;
}
