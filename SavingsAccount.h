#pragma once
class SavingsAccount
{
public:
	static double annualInterestRate;
	SavingsAccount();
	SavingsAccount(double openingBalance);
	~SavingsAccount();
	void calculateMonthlyInterest();
	double getSavingsBalance() const;
	static void modifyInterestRate(double rate);
private:
	double savingsBalance{ 0.0 };
};

