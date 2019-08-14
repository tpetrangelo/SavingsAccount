#include "SavingsAccount.h"
#include <iostream>

double SavingsAccount::annualInterestRate{ 0.0 };


SavingsAccount::SavingsAccount(double openingBalance){
	savingsBalance = openingBalance;
}

void SavingsAccount::modifyInterestRate(double rate)
{
	annualInterestRate = rate;	
}

void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance = savingsBalance + (savingsBalance * annualInterestRate) / 12;
}

double SavingsAccount::getSavingsBalance()
{
	return savingsBalance;
}



