#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "utils.h"
#include "auth.h"
#include "subjects.h"
#include "questions.h"
#include "tests.h"
#include "statistics.h"
#include "file_manager.h"

string currentUser = "";

int main() {
    srand((unsigned)time(0));
    
    initializeDataFiles();
    
    loadAllQuestions();
    loadAllCategories();
    
    while (currentUser == "") {
        displayAuthMenu();
        int authChoice = getIntInput("Choose an option: ");
        
        if (authChoice == 1) {
            if (loginUser(currentUser) == 0) {
                break;
            }
        } else if (authChoice == 2) {
            registerUser();
        } else if (authChoice == 3) {
            clearScreen();
            cout << "\nBye!\n";
            return 0;
        } else {
            cout << "Invalid choice. Please try again.\n";
            pause();
        }
    }
    
    while (currentUser != "") {
        displayMainMenu();
        int mainChoice = getIntInput("Choose an option: ");
        
        if (mainChoice == 1) {
            selectAndDisplaySubject();
        } else if (mainChoice == 2) {
            displayTestMenu();
            int testChoice = getIntInput("Choose a test: ");
            
            if (testChoice >= 1 && testChoice <= 3) {
                if (startTest(testChoice) == 0) {
                    takeTest(currentUser);
                }
            } else if (testChoice == 4) {
                continue;
            } else {
                cout << "Invalid choice.\n";
                pause();
            }
        } else if (mainChoice == 3) {
            displayStatisticsMenu();
            int statsChoice = getIntInput("Choose an option: ");
            
            if (statsChoice == 1) {
                displayHighestScore();
            } else if (statsChoice == 2) {
                displayLowestScore();
            } else if (statsChoice == 3) {
                displayAverageScore();
            } else if (statsChoice == 4) {
                displayCategoryStats();
            } else if (statsChoice == 5) {
                continue;
            }
        } else if (mainChoice == 4) {
            displayStudentResults(currentUser);
        } else if (mainChoice == 5) {
            logout(currentUser);
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
            pause();
        }
    }
    
    return 0;
}


