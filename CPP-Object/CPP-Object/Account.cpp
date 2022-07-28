#include "Account.hpp"
#include <cstdlib>
#include <time.h>
#include <string> 


void Account::generateBankNumber()
{
    number = "1234MMM56789";
}

Account::Account()
{

}

Account::Account(const Account& old)
{
    this->balance = old.balance;
    this->number = old.number;

}

int Account::withdraw(int amount)
{
    balance -= amount;
    return 0;
}

void Account::deposit(int amount)
{
    balance += amount;
}

int Account::getBalance()
{
    return balance;
}
