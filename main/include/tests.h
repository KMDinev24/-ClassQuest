#pragma once
#include <string>
using namespace std;

extern int currentTestIndices[20];
extern int currentTestSize;
extern int currentTestSubject;

int startTest(int subject);
int takeTest(string currentUser);
int displayQuestion(int questionIndex, int questionNumber);
int calculateScore(int correctAnswers, int totalQuestions, int subject);
int convertToGrade(int points, int totalPoints);
int saveTestResultToFile(string currentUser, int subject, 
                         int points, int totalPoints, int correctAnswers, 
                         int totalQuestions, int grade);
