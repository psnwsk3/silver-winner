#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>


class Account
{
    private:

        int id;
        float balance;
        float history[100];
        int transactions;

    public:

        Account(); //ustawia wartoœæ "transactions" na 0
        void set_id(int id);
        void set_balance(float balance);
        int get_id();
        float get_balance();
        void transaction(float a);
        float last();
        void showHistory();

};

#endif // ACCOUNT_H
