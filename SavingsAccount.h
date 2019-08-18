///////////////////////////////////
// Tom Petrangelo - CIS 554-70618
// HW #6 SavingsAccount Class Due 8/20/19
// Page 443
///////////////////////////////////


#pragma once
class SavingsAccount
{
public:

	//blank constructor for SavingsAccount class
	SavingsAccount();

	//constructor for SavingsAccount class that has openingBalance as a parameter
	SavingsAccount(double openingBalance);

	//SavingsAccount destructor
	~SavingsAccount();

	//sets annualInterestRate to user-input "rate"
	static void modifyInterestRate(double rate);

	//calulates new savings balance by multiplying current savings balance by the annual iterest rate,
	//dividing that product by twelve and adding to the previous savings balance
	void calculateMonthlyInterest();
	
	//returns current savings balance
	double getSavingsBalance() const;
	
private:

	//initialization of private data member savingsBalance used to save current user's balance
	double savingsBalance{ 0.0 };

	//static data member that holds current annualInterestRate, used for calulating current balance
	static double annualInterestRate;
};

