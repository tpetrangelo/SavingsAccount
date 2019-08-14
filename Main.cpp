#include "SavingsAccount.h"
#include <iostream>
int main()
{
	
	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);

	SavingsAccount::modifyInterestRate(0.03);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	std::cout << "First saver balance at 3%: " << saver1.getSavingsBalance() << std::endl;
	std::cout << "Second saver balance at 3%: " << saver2.getSavingsBalance() << std::endl <<std::endl;
	
	SavingsAccount::modifyInterestRate(0.04);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	std::cout << "First saver balance at 4%: " << saver1.getSavingsBalance() << std::endl;
	std::cout << "Second saver balance at 4%: " << saver2.getSavingsBalance() << std::endl;


	return 0;
}