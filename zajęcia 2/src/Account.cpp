#include "Account.h"

Account::Account()
{
    this->transactions=0;
}
void Account::set_id(int id)
{
    this->id=id;
}
void Account::set_balance(float balance)
{
    this->balance=balance;
}
int Account::get_id()
{
    return id;
}
float Account::get_balance()
{
    return balance;
}
void Account::transaction(float a)
{
    balance=balance+a;
    history[transactions]=a;
    transactions++;
}
float Account::last()
{
    return history[transactions-1];
}
void Account::showHistory()
{
    float sum = balance;

    for(int i=0;i<transactions;i++)
    {
        sum = sum + (history[i]*-1);
    }

    for(int j=0;j<transactions;j++)
    {
        std::cout << history[j]<< " "<< sum+history[j]<< std::endl;
        sum = sum+history[j];
    }
}
