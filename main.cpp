#include <iostream>
#include <string>
#include "AuthService.h"

using namespace std;

int main() {
    AuthService auth;
    int choice;

    cout << "KalaNet Application\n";
    cout << "1. User (Signup/Login)\n";
    cout << "2. Admin Login\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        string name, username, email, phone, password;

        cout << "\nUser Signup\n";
        cout << "Name: ";
        getline(cin, name);

        cout << "Username: ";
        getline(cin, username);

        cout << "Email: ";
        getline(cin, email);
        if (!auth.validateEmail(email)) {
            cout << "Error: Invalid email. Must contain @gmail.com\n";
            return 0;
        }

        cout << "Phone (11 digits): ";
        getline(cin, phone);
        if (!auth.validatePhone(phone)) {
            cout << "Error: Invalid phone number. Must be 11 digits\n";
            return 0;
        }

        cout << "Password (min 8 chars, at least 2 letters): ";
        getline(cin, password);
        if (!auth.validatePassword(password)) {
            cout << "Error: Invalid password\n";
            return 0;
        }

        User newUser = auth.signupUser(name, username, email, phone, password);
        cout << "Signup successful! You can now login.\n";

        string loginUser, loginPass;
        cout << "\nUser Login\n";
        cout << "Username: ";
        getline(cin, loginUser);
        cout << "Password: ";
        getline(cin, loginPass);

        if (auth.loginUser(loginUser, loginPass)) {
            cout << "Login successful! Welcome " << loginUser << "\n";
        } else {
            cout << "Login failed! Incorrect username or password.\n";
        }

    } else if (choice == 2) {
        string adminPass;
        cout << "\nAdmin Login\n";
        cout << "Enter Admin password: ";
        cin >> adminPass;

        if (auth.loginAdmin(adminPass)) {
            cout << "Admin login successful!\n";
        } else {
            cout << "Admin login failed! Wrong password.\n";
        }

    } else {
        cout << "Invalid choice\n";
    }

    return 0;
}