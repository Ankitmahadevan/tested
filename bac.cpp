#include<iostream>
using namespace std;
class Bank
{

    string name,type;
    int ac_no,balance,deposite,withdraw;
public:
    int input()
    {
        cout<<"enter customer name"<<endl;
        cin>>name;
        cout<<"enter ac_no"<<endl;
        cin>>ac_no;
        cout<<"enter type of account"<<endl;
        cin>>type;
        cout<<"enter current ac balance"<<endl;
        cin>>balance;
    }
    void deposit()
    {
        cout<<"enter the amount you want to deposit"<<endl;
        cin>>deposite;
        cout<<"current balance is:"<<(balance+deposite)<<endl;
    }
    void withdrawal()
    {

        cout<<"enter the amount you want to withdraw"<<endl;
        cin>>withdraw;
        if(withdraw>balance+deposite)
        {
            cout<<"balance not sufficient"<<endl;
        }
        else
        {
            cout<<"amount withdrawal is:"<<withdraw<<endl;
            cout<<"current balance is:"<<balance+deposite-withdraw<<endl;
        }
    }
    void display()
    {
        cout<<"Name"<<name<<endl;
        cout<<"current a/c balance is:"<<balance+deposite-withdraw<<endl;

    }

};
int main()
{
    Bank obj1;
    obj1.input();
    int a;
    do
    {
        cout<<"enter the operation \n"<<"1.deposit \n"<<"2.withdrawal \n"<<"3.display details \n"<<"4.exit \n"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            obj1.deposit();
            break;
        case 2:
            obj1.withdrawal();
            break;
        case 3:
            obj1.display();
            break;
        case 4:cout<<"exit";
            break;
        }
        }
        while(a!=4);
}








