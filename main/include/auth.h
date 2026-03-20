#pragma once
#include <string>
using namespace std;

int registerUser();
int loginUser(string& currentUser);
int logout(string& currentUser);
string hashPassword(string password);
int verifyPassword(string inputPassword, string storedHash);
