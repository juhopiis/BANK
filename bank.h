#ifndef BANK_H
#define BANK_H
#include<iostream>
#include<string>

using namespace std;

class bank
{
    string userName;
    int accountNum;
    string accountName;
    int accountBalance;

    public:
        void start(string a, int b, string c, int d);
        void withdraw(int val);
        void deposit(int val);
        void details();
};

#endif // BANK_H
