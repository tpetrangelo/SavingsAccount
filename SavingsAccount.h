#pragma once
class SavingsAccount
{
public:
	SavingsAccount(double openingBalance);
	void calculateMonthlyInterest();
	double getSavingsBalance();

	static void modifyInterestRate(double rate);

private:
	double savingsBalance{ 0.0 };
	
	static double annualInterestRate;
};

