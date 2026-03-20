#include "file_manager.h"
#include <fstream>
#include <iostream>
#include <sstream>

int saveUser(string username, string hashedPassword) {
    ofstream file("data/users.txt", ios::app);
    
    if (!file.is_open()) {
        cout << "Error: Cannot open users.txt for writing.\n";
        return -1;
    }
    
    file << username << "|" << hashedPassword << "\n";
    file.close();
    
    return 0;
}

int loadUser(string username, string& storedPassword) {
    ifstream file("data/users.txt");
    
    if (!file.is_open()) {
        return -1;
    }
    
    string line;
    while (getline(file, line)) {
        size_t pos = line.find("|");
        if (pos != string::npos) {
            string storedUsername = line.substr(0, pos);
            string password = line.substr(pos + 1);
            
            if (storedUsername == username) {
                storedPassword = password;
                file.close();
                return 0;
            }
        }
    }
    
    file.close();
    return -1;
}

int userExists(string username) {
    string temp;
    return loadUser(username, temp);
}

int saveTestResult(string username, string subject, 
                   int points, int totalPoints, int correctAnswers, int totalQuestions,
                   int grade) {
    ofstream file("data/results.txt", ios::app);
    
    if (!file.is_open()) {
        cout << "Error: Cannot open results.txt for writing.\n";
        return -1;
    }
    
    double percentage = (double)points / totalPoints * 100;
    
    file << username << "|" << subject << "|" 
         << points << "|" << totalPoints << "|" << (int)percentage << "|" 
         << grade << "|" << correctAnswers << "|" << totalQuestions << "\n";
    
    file.close();
    return 0;
}

int loadAllResults(string filename) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        return -1;
    }
    
    string line;
    while (getline(file, line)) {
        if (!line.empty()) {
            cout << line << "\n";
        }
    }
    
    file.close();
    return 0;
}

int loadQuestionsFromFile(string filename) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        return -1;
    }
    
    file.close();
    return 0;
}

int loadCategoriesFromFile(string filename) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        return -1;
    }
    
    file.close();
    return 0;
}

int fileExists(string filename) {
    ifstream file(filename);
    bool exists = file.is_open();
    file.close();
    return exists ? 1 : 0;
}

int initializeDataFiles() {
    if (!fileExists("data/users.txt")) {
        ofstream file("data/users.txt");
        file << "";
        file.close();
    }
    
    if (!fileExists("data/results.txt")) {
        ofstream file("data/results.txt");
        file << "";
        file.close();
    }
    
    return 0;
}


