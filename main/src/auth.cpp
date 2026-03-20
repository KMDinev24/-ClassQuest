#include "auth.h"
#include "file_manager.h"
#include "utils.h"
#include <iostream>
#include <string>
using namespace std;

string hashPassword(string password) {
    string hashed = password;
    
    for (int i = 0; i < (int)hashed.length(); i++) {
        hashed[i] = hashed[i] + 5;
    }
    
    return hashed;
}

int verifyPassword(string inputPassword, string storedHash) {
    string inputHash = hashPassword(inputPassword);
    
    if (inputHash == storedHash) {
        return 0;
    }
    
    return -1;
}

int registerUser() {
    clearScreen();
    cout << "\n========================================\n";
    cout << "           USER REGISTRATION\n";
    cout << "========================================\n\n";
    
    string username;
    string password;
    string confirmPassword;
    
    while (true) {
        username = getInput("Enter username: ");
        
        if (!isValidUsername(username)) {
            continue;
        }
        
        if (userExists(username) == 0) {
            cout << "Username already taken! Please choose another.\n\n";
            continue;
        }
        
        break;
    }
    
    while (true) {
        password = getInput("Enter password: ");
        
        if (!isValidPassword(password)) {
            continue;
        }
        
        confirmPassword = getInput("Confirm password: ");
        
        if (password != confirmPassword) {
            cout << "Passwords do not match! Try again.\n\n";
            continue;
        }
        
        break;
    }
    
    string hashedPassword = hashPassword(password);
    int result = saveUser(username, hashedPassword);
    
    if (result == 0) {
        clearScreen();
        cout << "\n========================================\n";
        cout << "Registration successful!\n";
        cout << "You can now login with your credentials.\n";
        cout << "========================================\n";
    } else {
        cout << "\nRegistration failed! Please try again.\n";
    }
    
    pause();
    return result;
}

int loginUser(string& currentUser) {
    clearScreen();
    cout << "\n========================================\n";
    cout << "              USER LOGIN\n";
    cout << "========================================\n\n";
    
    string username = getInput("Enter username: ");
    string password = getInput("Enter password: ");
    
    string storedHash;
    if (loadUser(username, storedHash) != 0) {
        clearScreen();
        cout << "\nUsername not found!\n";
        pause();
        return -1;
    }
    
    if (verifyPassword(password, storedHash) != 0) {
        clearScreen();
        cout << "\nPassword incorrect!\n";
        pause();
        return -1;
    }
    
    currentUser = username;
    clearScreen();
    cout << "\n========================================\n";
    cout << "Login successful!\n";
    cout << "Welcome, " << currentUser << "!\n";
    cout << "========================================\n";
    
    pause();
    return 0;
}

int logout(string& currentUser) {
    cout << "\nYou have been logged out.\n";
    currentUser = "";
    pause();
    return 0;
}


