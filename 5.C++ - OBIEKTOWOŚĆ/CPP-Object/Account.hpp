#pragma once
#include <string>

class Account {
	int balance = 0;
	std::string number;
	
	
public:
	Account();
	Account(const Account& old);
	int withdraw(int amount);           
	void deposit(int amount);
	int getBalance();
	void generateBankNumber();
};