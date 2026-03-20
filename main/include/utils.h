#pragma once
#include <string>
using namespace std;

void displayMainMenu();
void displayAuthMenu();
void displaySubjectMenu();
void displayTestMenu();
void displayStatisticsMenu();

string getInput(string prompt);
int getIntInput(string prompt);
void clearScreen();
void pause();

bool isValidUsername(string username);
bool isValidPassword(string password);
int validateMenuChoice(int choice, int minOption, int maxOption);

string trim(string str);
string toLowerCase(string str);
char split(string str, string delimiter, int index);

int getCurrentDateTimeAsString(string& dateTime);
int randomBetween(int min, int max);
