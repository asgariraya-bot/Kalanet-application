#include "User.h"

User::User() 
{
    UserId = -1;
    Wallet = 0;
    role = Role::User;
}

User::User(int id, string uname, string pass, Role r) 
{
    UserId = id;
    UserName = uname;
    Password = pass;
    role = r;
    Wallet = 0;
}

int User::getUserId() const 
{
    return UserId;
}

string User::getUserName() const 
{
    return UserName;
}

Role User::getRole() const 
{
    return role;
}

void User::setWallet(double amount) 
{
    Wallet = amount;
}

double User::getWallet() const 
{
    return Wallet;
}