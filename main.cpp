#include<iostream>
#include<string>
#include "bank.h"

using namespace std;

int main()
{
    string a,b;
    int i,n;
    int z,x,y;

    cout<<"Kuinka monta tilia haluat avata?";
    cin>>n;
    bank customer[n];
    cout<<"\nAnna tilitiedot yksi kerrallaan. ";
    for(i = 0; i < n; i++)
    {
        cout<<"\nAsiakas: "<<i+1<<endl;
        cout<<"\nSyota nimi: ";
        cin>>a;
        cout<<"\nNimea tili: ";
        cin>>b;
        cout<<"\nTilinumeronne on: "<<i+1<<endl;
        customer[i].start(a,i+1,b,0);
    }

    cout<<"\n\tPANKKI";
    cout<<"\n\t******"<<endl;
    cout<<"\nValitse: \n1 = Tilitiedot \n2 = Talleta \n3 = Nosta \n4 = Poistu ";
    while(1)
    {
        cout<<"\nSyota valinta: ";
        cin>>z;
        if(z==1)
        {
            cout<<"\nSyota tilinumero: ";
            cin>>x;
            customer[x-1].details();
        }
        else if(z==2)
        {
            cout<<"\nSyota tilinumero ja talletuksen maara: ";
            cin>>x>>y;
            customer[x-1].deposit(y);
        }
        else if(z==3)
        {
            cout<<"\nSyota tilinumero ja noston maara: ";
            cin>>x>>y;
            customer[x-1].withdraw(y);
        }
        else
        {
            break;
        }
    }
    return 0;
}
