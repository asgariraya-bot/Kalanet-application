#pragma once
#include "User.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class AuthService {
private:
    vector<User> users;
public:
    bool validatePhone(const string& phone);
    bool validateEmail(const string& email);
    bool validatePassword(const string& password);

    string hashPassword(const string& password);

    User signupUser(const string& name, const string& username, const string& email, const string& phone, const string& password);

    bool loginUser(const string& username, const string& password);
    bool loginAdmin(const string& password);

    const vector<User>& getUsers() const { return users; }
};