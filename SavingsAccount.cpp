///////////////////////////////////
// Tom Petrangelo - CIS 554-70618
// HW #6 SavingsAccount Class Due 8/20/19
// Page 443
///////////////////////////////////

#include "SavingsAccount.h"
#include <iostream>

//static data member for annualInterestRate
double SavingsAccount::annualInterestRate{ 0.0 };

//blank constructor for SavingsAccount class
SavingsAccount::SavingsAccount()
{
}

//constructor for SavingsAccount class that has openingBalance as a parameter
SavingsAccount::SavingsAccount(double openingBalance){
	savingsBalance = openingBalance;
}

//SavingsAccount destructor
SavingsAccount::~SavingsAccount()
{
}

//sets annualInterestRate to user-input "rate"
void SavingsAccount::modifyInterestRate(double rate)
{
	annualInterestRate = rate;	
}

//calulates new savings balance by multiplying current savings balance by the annual iterest rate,
//dividing that product by twelve and adding to the previous savings balance
void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance = savingsBalance + (savingsBalance * annualInterestRate) / 12;
}

//returns current savings balance
double SavingsAccount::getSavingsBalance() const
{
	return savingsBalance;
}



