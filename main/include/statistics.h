#pragma once
#include <string>
using namespace std;

void displayAllStatistics();
void displayHighestScore();
void displayLowestScore();
void displayAverageScore();
void displayCategoryStats();
void displayStudentResults(string username);

int parseResultsFile();
double calculateAverageScore();
int findHighestScore();
int findLowestScore();
