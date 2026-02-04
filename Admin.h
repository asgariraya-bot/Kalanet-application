#pragma once
#include "User.h"

using namespace std;

class Admin : public User 
{
public:
    Admin(int id, string uname, string pass): User(id, uname, pass, Role::Admin) {}
};