#include "pch.h"
#include "../BankAccount/BankAccount.hpp"

TEST(TestBankAccount, TestEmptyAccount) 
{
	BankAccount account();

  EXPECT_EQ(account.getAvailableFunds(),0);
}

TEST(TestBankAccount, TestDeposit)
{
	BankAccount account();
	account.deposit(1000);

	EXPECT_EQ(account.getAvailableFunds(), 1000);
}

TEST(TestBankAccount, TestWithdrawal)
{
	BankAccount account;
	account.deposit(1000);

	EXPECT_FALSE(account.withdraw(100))
	
}