#include "bank.h"
#include<string>

using namespace std;

void bank::start(string a, int b, string c, int d)
{
    userName = a;
    accountNum = b;
    accountName = c;
    accountBalance = d;
}

void bank::withdraw(int val)
{
    if(val > accountBalance)
    {
        cout<<"\nEi tarpeeksi saldoa.";
    }
    else
    {
        accountBalance -= val;
        cout<<"\nUusi saldo on: "<<accountBalance<<endl;
    }
}

void bank::deposit(int val)
{
    accountBalance += val;
    cout<<"\nUusi saldo on: "<<accountBalance<<endl;
}

void bank::details()
{
    cout<<"\nTilin tiedot: "<<endl;
    cout<<"\nNimi: "<<userName<<endl;
    cout<<"\nTilinumero: "<<accountNum<<endl;
    cout<<"\nTilin nimi: "<<accountName<<endl;
    cout<<"\nSaldo: "<<accountBalance<<endl;
}
