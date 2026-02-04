#include "AuthService.h"
#include <iostream>

using namespace std;

bool AuthService::validatePhone(const string& phone) {
    if (phone.length() != 11) return false;
    for (char c : phone) {
        if (c < '0' || c > '9') return false;
    }
    return true;
}

bool AuthService::validateEmail(const string& email) {
    return email.find("@gmail.com") != string::npos;
}

bool AuthService::validatePassword(const string& password) {
    if (password.length() < 8) return false;
    int letterCount = 0;
    for (char c : password) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letterCount++;
    }
    return letterCount >= 2;
}

string AuthService::hashPassword(const string& password) {
    string hash = "";
    for (char c : password) hash += c + 1;
    return hash;
}

User AuthService::signupUser(const string& name,
                             const string& username,
                             const string& email,
                             const string& phone,
                             const string& password) {

    string hash = hashPassword(password);
    int generatedId = users.size() + 1;

    User user(generatedId, name, username, email, phone, hash, Role::USER);
    users.push_back(user);

    return user;
}

bool AuthService::loginUser(const string& username, const string& password) {
    string hash = hashPassword(password);
    for (User& u : users) {
        if (u.getUsername() == username &&
            u.getPasswordHash() == hash) {
            return true;
        }
    }
    return false;
}

bool AuthService::loginAdmin(const string& password) {
    return password == "1111";
}