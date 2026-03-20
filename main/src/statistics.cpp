#include "statistics.h"
#include "utils.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int parseResultsFile() {
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        cout << "No test results found yet.\n";
        return -1;
    }
    
    file.close();
    return 0;
}

double calculateAverageScore() {
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        return 0.0;
    }
    
    string line;
    double totalScore = 0.0;
    int resultCount = 0;
    
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        int pipeCount = 0;
        size_t start = 0;
        size_t pos = 0;
        
        for (int i = 0; i < 7; i++) {
            pos = line.find("|", start);
            if (pos == string::npos) break;
            start = pos + 1;
        }
        
        if (start < line.length()) {
            pos = line.find("|", start);
            if (pos != string::npos) {
                string pointsStr = line.substr(start, pos - start);
                totalScore += stoi(pointsStr);
                resultCount++;
            }
        }
    }
    
    file.close();
    
    if (resultCount == 0) return 0.0;
    return totalScore / resultCount;
}

int findHighestScore() {
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        return 0;
    }
    
    string line;
    int highestScore = 0;
    
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        size_t start = 0;
        for (int i = 0; i < 3; i++) {
            start = line.find("|", start) + 1;
        }
        
        size_t end = line.find("|", start);
        if (end != string::npos) {
            string pointsStr = line.substr(start, end - start);
            int points = stoi(pointsStr);
            if (points > highestScore) {
                highestScore = points;
            }
        }
    }
    
    file.close();
    return highestScore;
}

int findLowestScore() {
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        return 0;
    }
    
    string line;
    int lowestScore = 100;
    int foundResult = 0;
    
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        foundResult = 1;
        size_t start = 0;
        for (int i = 0; i < 3; i++) {
            start = line.find("|", start) + 1;
        }
        
        size_t end = line.find("|", start);
        if (end != string::npos) {
            string pointsStr = line.substr(start, end - start);
            int points = stoi(pointsStr);
            if (points < lowestScore) {
                lowestScore = points;
            }
        }
    }
    
    file.close();
    return foundResult ? lowestScore : 0;
}

void displayAllStatistics() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                  OVERALL STATISTICS\n";
    cout << "=============================================================\n\n";
    
    ifstream testFile("data/results.txt");
    if (!testFile.is_open()) {
        cout << "No test results available yet.\n";
        testFile.close();
        pause();
        return;
    }
    
    string line;
    int resultCount = 0;
    while (getline(testFile, line)) {
        if (!line.empty() && line[0] != 'u') {
            resultCount++;
        }
    }
    testFile.close();
    
    if (resultCount == 0) {
        cout << "No test results available yet.\n";
        pause();
        return;
    }
    
    cout << "Total Tests Taken: " << resultCount << "\n\n";
    
    double avgScore = calculateAverageScore();
    cout << "Average Score: " << (int)avgScore << " / 100\n";
    
    int highestScore = findHighestScore();
    cout << "Highest Score: " << highestScore << " / 100\n";
    
    int lowestScore = findLowestScore();
    cout << "Lowest Score: " << lowestScore << " / 100\n\n";
    
    pause();
}

void displayHighestScore() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                   HIGHEST SCORE\n";
    cout << "=============================================================\n\n";
    
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        cout << "No results available.\n";
        pause();
        return;
    }
    
    string line;
    string bestLine;
    int bestScore = 0;
    
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        size_t start = 0;
        for (int i = 0; i < 3; i++) {
            start = line.find("|", start) + 1;
        }
        
        size_t end = line.find("|", start);
        if (end != string::npos) {
            int points = stoi(line.substr(start, end - start));
            if (points > bestScore) {
                bestScore = points;
                bestLine = line;
            }
        }
    }
    
    file.close();
    
    if (!bestLine.empty()) {
        cout << "Best Result: " << bestScore << " / 100\n\n";
        
        size_t pos = bestLine.find("|");
        string username = bestLine.substr(0, pos);
        
        pos = bestLine.find("|", pos + 1);
        string subject = bestLine.substr(username.length() + 1, pos - username.length() - 1);
        
        cout << "Student: " << username << "\n";
        cout << "Subject: " << subject << "\n";
    } else {
        cout << "No results available.\n";
    }
    
    pause();
}

void displayLowestScore() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                   LOWEST SCORE\n";
    cout << "=============================================================\n\n";
    
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        cout << "No results available.\n";
        pause();
        return;
    }
    
    string line;
    string worstLine;
    int worstScore = 101;
    int foundResult = 0;
    
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        foundResult = 1;
        size_t start = 0;
        for (int i = 0; i < 3; i++) {
            start = line.find("|", start) + 1;
        }
        
        size_t end = line.find("|", start);
        if (end != string::npos) {
            int points = stoi(line.substr(start, end - start));
            if (points < worstScore) {
                worstScore = points;
                worstLine = line;
            }
        }
    }
    
    file.close();
    
    if (foundResult && !worstLine.empty()) {
        cout << "Worst Result: " << worstScore << " / 100\n\n";
        
        size_t pos = worstLine.find("|");
        string username = worstLine.substr(0, pos);
        
        pos = worstLine.find("|", pos + 1);
        string subject = worstLine.substr(username.length() + 1, pos - username.length() - 1);
        
        cout << "Student: " << username << "\n";
        cout << "Subject: " << subject << "\n";
    } else {
        cout << "No results available.\n";
    }
    
    pause();
}

void displayAverageScore() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                   AVERAGE SCORE\n";
    cout << "=============================================================\n\n";
    
    double avg = calculateAverageScore();
    cout << "Average Score Across All Tests: " << (int)avg << " / 100\n\n";
    
    if (avg >= 86) {
        cout << "Overall Performance: Excellent (6)\n";
    } else if (avg >= 71) {
        cout << "Overall Performance: Very Good (5)\n";
    } else if (avg >= 56) {
        cout << "Overall Performance: Good (4)\n";
    } else if (avg >= 41) {
        cout << "Overall Performance: Weak (3)\n";
    } else {
        cout << "Overall Performance: Poor (2)\n";
    }
    
    pause();
}

void displayCategoryStats() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "              CATEGORY PERFORMANCE\n";
    cout << "=============================================================\n\n";
    
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        cout << "No results available.\n";
        pause();
        return;
    }
    
    int biologyCount = 0, biologyPoints = 0;
    int chemistryCount = 0, chemistryPoints = 0;
    int physicsCount = 0, physicsPoints = 0;
    
    string line;
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        size_t pos1 = line.find("|");
        size_t pos2 = line.find("|", pos1 + 1);
        string subject = line.substr(pos1 + 1, pos2 - pos1 - 1);
        
        size_t pos3 = line.find("|", pos2 + 1);
        size_t pos4 = line.find("|", pos3 + 1);
        int points = stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));
        
        if (subject == "Biology") {
            biologyCount++;
            biologyPoints += points;
        } else if (subject == "Chemistry") {
            chemistryCount++;
            chemistryPoints += points;
        } else if (subject == "Physics") {
            physicsCount++;
            physicsPoints += points;
        }
    }
    
    file.close();
    
    cout << "Subject Performance:\n\n";
    
    if (biologyCount > 0) {
        int avgBio = biologyPoints / biologyCount;
        cout << "Biology:   " << avgBio << " / 100 (" << biologyCount << " tests)\n";
    }
    
    if (chemistryCount > 0) {
        int avgChem = chemistryPoints / chemistryCount;
        cout << "Chemistry: " << avgChem << " / 100 (" << chemistryCount << " tests)\n";
    }
    
    if (physicsCount > 0) {
        int avgPhys = physicsPoints / physicsCount;
        cout << "Physics:   " << avgPhys << " / 100 (" << physicsCount << " tests)\n";
    }
    
    pause();
}

void displayStudentResults(string username) {
    clearScreen();
    cout << "\n===========================================================\n";
    cout << "           PERSONAL TEST RESULTS FOR: " << username << "\n";
    cout << "===========================================================\n\n";
    
    ifstream file("data/results.txt");
    
    if (!file.is_open()) {
        cout << "No results available.\n";
        pause();
        return;
    }
    
    string line;
    int testCount = 0;
    
    while (getline(file, line)) {
        if (line.empty() || line[0] == 'u') continue;
        
        size_t pos = line.find("|");
        string storedUsername = line.substr(0, pos);
        
        if (storedUsername == username) {
            testCount++;
            cout << "Test " << testCount << ": " << line << "\n";
        }
    }
    
    file.close();
    
    if (testCount == 0) {
        cout << "No test results found for this user.\n";
    }
    
    pause();
}


