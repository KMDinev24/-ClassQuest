#pragma once
#include <string>
using namespace std;

int saveUser(string username, string hashedPassword);
int loadUser(string username, string& storedPassword);
int userExists(string username);

int saveTestResult(string username, string subject, 
                   int points, int totalPoints, int correctAnswers, int totalQuestions,
                   int grade);
int loadAllResults(string filename);

int loadQuestionsFromFile(string filename);

int loadCategoriesFromFile(string filename);

int initializeDataFiles();
int fileExists(string filename);
