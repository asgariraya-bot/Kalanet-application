#pragma once
#include "User.h"

using namespace std;

class Admin : public User 
{
    
public:

 Admin(string uname) { username = uname; role = Role::ADMIN;}
};