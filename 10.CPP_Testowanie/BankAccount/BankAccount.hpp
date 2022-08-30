#pragma once

class BankAccount
{
	BankAccount();
private:
	int accountBalance;

public:
	bool withdraw(int amount);
	void deposit(int amount);
	int getAvailableFunds()const;

};