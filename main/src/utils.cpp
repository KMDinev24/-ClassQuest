#include "utils.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <sstream>
using namespace std;

void displayMainMenu() {
    clearScreen();
    cout << "\n";
    cout << "+========================================+\n";
    cout << "|      ELECTRONIC SCHOOL                 |\n";
    cout << "|                                        |\n";
    cout << "|  1. Subject Selection                  |\n";
    cout << "|  2. Take a Test                        |\n";
    cout << "|  3. View Statistics                    |\n";
    cout << "|  4. View My Results                    |\n";
    cout << "|  5. Logout                             |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displayAuthMenu() {
    clearScreen();
    cout << "\n";
    cout << "+========================================+\n";
    cout << "|          ELECTRONIC SCHOOL             |\n";
    cout << "|                                        |\n";
    cout << "|  1. Login                              |\n";
    cout << "|  2. Register                           |\n";
    cout << "|  3. Exit                               |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displaySubjectMenu() {
    clearScreen();
    cout << "\n";
    cout << "+========================================+\n";
    cout << "|      CHOOSE A SUBJECT TO STUDY         |\n";
    cout << "|                                        |\n";
    cout << "|  1. Biology                            |\n";
    cout << "|     Cells, Genetics, Evolution         |\n";
    cout << "|                                        |\n";
    cout << "|  2. Chemistry                          |\n";
    cout << "|     Elements, Reactions, Bonding       |\n";
    cout << "|                                        |\n";
    cout << "|  3. Physics                            |\n";
    cout << "|     Motion, Forces, Energy             |\n";
    cout << "|                                        |\n";
    cout << "|  4. Back to Main Menu                  |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displayTestMenu() {
    clearScreen();
    cout << "\n";
    cout << "+========================================+\n";
    cout << "|         TAKE A TEST                    |\n";
    cout << "|                                        |\n";
    cout << "|  1. Biology Test                       |\n";
    cout << "|  2. Chemistry Test                     |\n";
    cout << "|  3. Physics Test                       |\n";
    cout << "|  4. Back to Main Menu                  |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displayStatisticsMenu() {
    clearScreen();
    cout << "\n";
    cout << "+========================================+\n";
    cout << "|      OVERALL STATISTICS                |\n";
    cout << "|                                        |\n";
    cout << "|  1. Highest Score                      |\n";
    cout << "|  2. Lowest Score                       |\n";
    cout << "|  3. Average Score                      |\n";
    cout << "|  4. Category Performance               |\n";
    cout << "|  5. Back to Main Menu                  |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

string getInput(string prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    return trim(input);
}

int getIntInput(string prompt) {
    string input;
    int number = 0;
    
    while (true) {
        cout << prompt;
        getline(cin, input);
        
        istringstream iss(input);
        if (iss >> number && iss.eof()) {
            return number;
        }
        
        cout << "Invalid input! Please enter a valid number.\n";
    }
}

void clearScreen() {
    system("cls");
}

void pause() {
    cout << "\nPress Enter to continue...";
    string temp;
    getline(cin, temp);
}

bool isValidUsername(string username) {
    if (username.length() < 3 || username.length() > 20) {
        cout << "Username must be between 3 and 20 characters.\n";
        return false;
    }
    
    for (int i = 0; i < (int)username.length(); i++) {
        char c = username[i];
        if (!isalnum(c) && c != '_') {
            cout << "Username can only contain letters, numbers, and underscore.\n";
            return false;
        }
    }
    
    return true;
}

bool isValidPassword(string password) {
    if (password.length() < 4 || password.length() > 30) {
        cout << "Password must be between 4 and 30 characters.\n";
        return false;
    }
    return true;
}

int validateMenuChoice(int choice, int minOption, int maxOption) {
    if (choice >= minOption && choice <= maxOption) {
        return choice;
    }
    return -1;
}

string trim(string str) {
    size_t start = 0;
    while (start < str.length() && isspace(str[start])) {
        start++;
    }
    
    size_t end = str.length();
    while (end > start && isspace(str[end - 1])) {
        end--;
    }
    
    return str.substr(start, end - start);
}

string toLowerCase(string str) {
    string result = str;
    for (int i = 0; i < (int)result.length(); i++) {
        result[i] = tolower(result[i]);
    }
    return result;
}

char split(string str, string delimiter, int index) {
    int count = 0;
    size_t start = 0;
    size_t end = str.find(delimiter);
    
    while (end != string::npos && count < index) {
        start = end + delimiter.length();
        end = str.find(delimiter, start);
        count++;
    }
    
    if (count == index) {
        if (end == string::npos) {
            return str[start];
        }
        return str[start];
    }
    
    return '\0';
}

int getCurrentDateTimeAsString(string& dateTime) {
    dateTime = "";
    return 0;
}

int randomBetween(int min, int max) {
    return min + rand() % (max - min + 1);
}


