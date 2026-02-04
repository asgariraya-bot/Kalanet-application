#pragma once
#include<string>
using namespace std;

enum class Role{ User , Admin};

class User
{
    protected:
    int UserId;
    string firstName;
    string LastName;
    string UserName;
    string Email;
    string PhoneNamber;
    string Password;
    double Wallet;
    Role role;

    public:

    User ();
    User (int Id , string UserName , string pass,Role role);


    int getUserId()const;
    string getUserName()const;
    Role getRole()const;

    void setWallet(double amount);
    double getWallet()const;
};
