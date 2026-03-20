#pragma once
#include <string>
using namespace std;

#define MAX_QUESTIONS 100
#define MAX_SUBJECTS 3
#define MAX_CATEGORIES_PER_SUBJECT 3
#define TEST_SIZE 20

extern string questionID[MAX_QUESTIONS];
extern string questionSubject[MAX_QUESTIONS];
extern string questionCategory[MAX_QUESTIONS];
extern string questionText[MAX_QUESTIONS];
extern string questionOptionA[MAX_QUESTIONS];
extern string questionOptionB[MAX_QUESTIONS];
extern string questionOptionC[MAX_QUESTIONS];
extern string questionOptionD[MAX_QUESTIONS];
extern char questionCorrectAnswer[MAX_QUESTIONS];
extern int questionCount;

extern string categoryNames[MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT];
extern string categorySubjects[MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT];
extern double categoryWeights[MAX_SUBJECTS * MAX_CATEGORIES_PER_SUBJECT];
extern int categoryCount;

int loadAllQuestions();
int loadAllCategories();
int getQuestionById(int id, int& index);
int generateRandomTest(int testIndices[], int subject);
int getSubjectQuestionCount(int subject);
int getCategoryIndex(string category, string subject);
double getCategoryWeight(string category, string subject);
