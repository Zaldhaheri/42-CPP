/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 00:37:17 by zaldhahe          #+#    #+#             */
/*   Updated: 2025/08/17 00:37:17 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit)
{

}

Account::~Account( void )
{

}

int Account::getNbAccounts( void ) {return _nbAccounts;}
int Account::getTotalAmount( void ) {return _totalAmount;}
int Account::getNbDeposits( void ) {return _totalNbDeposits;}
int Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

void Account::displayAccountsInfos( void ) 
{
    
}

void Account::makeDeposit( int deposit )
{

}

bool Account::makeWithdrawal( int withdrawal )
{

}

int Account::checkAmount( void ) const
{

}

void Account::displayStatus( void ) const
{

}
