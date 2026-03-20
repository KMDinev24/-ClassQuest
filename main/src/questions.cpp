#include "questions.h"
#include "utils.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>

string questionID[MAX_QUESTIONS];
string questionSubject[MAX_QUESTIONS];
string questionCategory[MAX_QUESTIONS];
string questionText[MAX_QUESTIONS];
string questionOptionA[MAX_QUESTIONS];
string questionOptionB[MAX_QUESTIONS];
string questionOptionC[MAX_QUESTIONS];
string questionOptionD[MAX_QUESTIONS];
char questionCorrectAnswer[MAX_QUESTIONS];
int questionCount = 0;

string categoryNames[MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT];
string categorySubjects[MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT];
double categoryWeights[MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT];
int categoryCount = 0;

int loadAllQuestions() {
    ifstream file("data/questions.txt");
    
    if (!file.is_open()) {
        cout << "Warning: questions.txt not found.\n";
        return -1;
    }
    
    string line;
    int count = 0;
    
    while (getline(file, line) && count < MAX_QUESTIONS) {
        if (line.empty() || line[0] == 'I') continue;
        
        istringstream iss(line);
        string id, subject, category, question, optA, optB, optC, optD, correct;
        
        size_t pos = 0;
        size_t nextPos = line.find("|");
        
        if (nextPos == string::npos) continue;
        questionID[count] = line.substr(0, nextPos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionSubject[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionCategory[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionText[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionOptionA[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionOptionB[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionOptionC[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        questionOptionD[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        if (pos < line.length()) {
            questionCorrectAnswer[count] = line[pos];
        }
        
        count++;
    }
    
    file.close();
    questionCount = count;
    return 0;
}

int loadAllCategories() {
    ifstream file("data/categories.txt");
    
    if (!file.is_open()) {
        cout << "Warning: categories.txt not found.\n";
        return -1;
    }
    
    string line;
    int count = 0;
    
    while (getline(file, line) && count < (MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT)) {
        if (line.empty() || line[0] == 'S') continue;
        
        size_t pos = 0;
        size_t nextPos = line.find("|");
        
        if (nextPos == string::npos) continue;
        categorySubjects[count] = line.substr(0, nextPos);
        
        pos = nextPos + 1;
        nextPos = line.find("|", pos);
        if (nextPos == string::npos) continue;
        categoryNames[count] = line.substr(pos, nextPos - pos);
        
        pos = nextPos + 1;
        if (pos < line.length()) {
            categoryWeights[count] = stod(line.substr(pos));
        }
        
        count++;
    }
    
    file.close();
    categoryCount = count;
    return 0;
}

int getQuestionById(int id, int& index) {
    for (int i = 0; i < questionCount; i++) {
        if (stoi(questionID[i]) == id) {
            index = i;
            return 0;
        }
    }
    return -1;
}

int getSubjectQuestionCount(int subject) {
    int count = 0;
    string subjectName;
    
    if (subject == 1) subjectName = "Biology";
    else if (subject == 2) subjectName = "Chemistry";
    else if (subject == 3) subjectName = "Physics";
    
    for (int i = 0; i < questionCount; i++) {
        if (questionSubject[i] == subjectName) {
            count++;
        }
    }
    
    return count;
}

int generateRandomTest(int testIndices[], int subject) {
    string subjectName;
    
    if (subject == 1) subjectName = "Biology";
    else if (subject == 2) subjectName = "Chemistry";
    else if (subject == 3) subjectName = "Physics";
    else return -1;
    
    int subjectIndices[MAX_QUESTIONS];
    int subjectCount = 0;
    
    for (int i = 0; i < questionCount; i++) {
        if (questionSubject[i] == subjectName) {
            subjectIndices[subjectCount] = i;
            subjectCount++;
        }
    }
    
    if (subjectCount < TEST_SIZE) {
        return -1;
    }
    
    for (int i = 0; i < TEST_SIZE; i++) {
        int randomIdx = rand() % subjectCount;
        testIndices[i] = subjectIndices[randomIdx];
    }
    
    return 0;
}

int getCategoryIndex(string category, string subject) {
    for (int i = 0; i < categoryCount; i++) {
        if (categoryNames[i] == category && categorySubjects[i] == subject) {
            return i;
        }
    }
    return -1;
}

double getCategoryWeight(string category, string subject) {
    int idx = getCategoryIndex(category, subject);
    if (idx >= 0) {
        return categoryWeights[idx];
    }
    return 1.0;
}


