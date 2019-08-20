///////////////////////////////////
// Tom Petrangelo - CIS 554-70618
// HW #6 SavingsAccount Class Due 8/20/19
// Page 443
///////////////////////////////////

#include "SavingsAccount.h"
#include <iostream>
int main()
{
	//initialization of balance and interestRate, used for user-input balances and interest rates
	double balance{ 0.0 };
	double interestRate{ 0.0 };

	//user-input balance for account 1
	std::cout << "Please input a positive opening balance for the first savings account (format 1234.56) : ";
	std::cin >> balance;


	//Double validation for balance
	while (!std::cin) {
		std::cout << "Invalid data type, please enter a double: ";
		
		//repair the instream
		std::cin.clear();
		
		//clear the buffer
		std::cin.ignore();
		std::cin >> balance;
	}

	//input validation checking for a positive opening balance
	while (balance < 0.00) {
		std::cout << "Input negative, please input a positive opening balance for the first savings account (format 1234.56) : ";
		std::cin >> balance;
	}
	std::cout << std::endl;
	
	//initialize SavingsAccount object with user-input "balance"
	SavingsAccount saver1(balance);
	
	//user-input balance for account 2
	std::cout << "Please input a positive opening balance for the second savings account (format 1234.56) : ";
	std::cin >> balance;


	//Double validation for balance
	while (!std::cin) {
		std::cout << "Invalid data type, please enter a double: ";

		//repair the instream
		std::cin.clear();

		//clear the buffer
		std::cin.ignore();
		std::cin >> balance;
	}

	//input validation checking for a positive opening balance
	while (balance < 0.00) {
		std::cout << "Input negative, please input a positive opening balance for the second savings account (format 1234.56) : ";
		std::cin >> balance;
	}
	std::cout << std::endl;

	//initialize SavingsAccount object with user-input "balance"
	SavingsAccount saver2(balance);

	//user-input for annual interest rate
	std::cout << "Please input an annual interest rate for both savings accounts (format 1234.56, input 5 equals 500%) : ";
	std::cin >> interestRate;


	//Double validation for interestRate
	while (!std::cin) {
		std::cout << "Invalid data type, please enter a double for interest rate: ";

		//repair the instream
		std::cin.clear();

		//clear the buffer
		std::cin.ignore();
		std::cin >> interestRate;
	}


	//input validation for a postiive annual interest rate
	while (interestRate < 0.00) {
		std::cout << "Input negative, please input a positive annual interest rate for both savings account (format 1234.56, input 5 equals 500%) : ";
		std::cin >> interestRate;
	}
	std::cout << std::endl;

	//modify static annual interest rate based on user-input
	SavingsAccount::modifyInterestRate(interestRate);

	//calculates current savings balance for both savings accounts
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	//output displaying balances for both accounts
	std::cout << "First saver balance at " << interestRate * 100 << "%: " << saver1.getSavingsBalance() << std::endl;
	std::cout << "First saver balance at " << interestRate * 100 << "%: " << saver2.getSavingsBalance() << std::endl << std::endl;

	//user-input to adjust annual interest rate
	std::cout << "Please input a new annual interest rate for both savings accounts (format 1234.56, input 5 equals 500%) : ";
	std::cin >> interestRate;

	//Double validation for interestRate
	while (!std::cin) {
		std::cout << "Invalid data type, please enter a double for interest rate: ";

		//repair the instream
		std::cin.clear();

		//clear the buffer
		std::cin.ignore();
		std::cin >> interestRate;
	}

	//input validation for a postiive annual interest rate
	while (interestRate < 0.00) {
		std::cout << "Input negative, please input a positive annual interest rate for both savings account (format 1234.56, input 5 equals 500%) : ";
		std::cin >> interestRate;
	}
	std::cout << std::endl;

	//modify static annual interest rate based on user-input
	SavingsAccount::modifyInterestRate(interestRate);

	//calculates new current savings balance for both savings accounts
	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	//output displaying balances for both accounts
	std::cout << "First saver balance at " << interestRate * 100 << "%: " << saver1.getSavingsBalance() << std::endl;
	std::cout << "First saver balance at " << interestRate * 100 << "%: " << saver2.getSavingsBalance() << std::endl << std::endl;

	return 0;
}