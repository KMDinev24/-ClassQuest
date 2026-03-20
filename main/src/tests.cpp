#include "tests.h"
#include "questions.h"
#include "utils.h"
#include "file_manager.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int currentTestIndices[20];
int currentTestSize = 0;
int currentTestSubject = 0;

int convertToGrade(int points, int totalPoints) {
    if (totalPoints == 0) return 2;
    
    int percentage = (points * 100) / totalPoints;
    
    if (percentage >= 86) return 6;      // Excellent
    if (percentage >= 71) return 5;      // Very Good
    if (percentage >= 56) return 4;      // Good
    if (percentage >= 41) return 3;      // Weak
    
    return 2; // Poor
}

int calculateScore(int correctAnswers, int totalQuestions, int subject) {
    int totalScore = 0;
    int questionsPerCategory = totalQuestions / 3;
    
    for (int i = 0; i < totalQuestions; i++) {
        int qIdx = currentTestIndices[i];
        double weight = getCategoryWeight(questionCategory[qIdx], questionSubject[qIdx]);
    }
    
    totalScore = correctAnswers * 5;
    
    return totalScore;
}

int displayQuestion(int questionIndex, int questionNumber) {
    clearScreen();
    cout << "\n====================================================\n";
    cout << "Question " << questionNumber << " of 20\n";
    cout << "Category: " << questionCategory[questionIndex] << "\n";
    cout << "====================================================\n\n";
    
    cout << questionText[questionIndex] << "\n\n";
    
    cout << "A) " << questionOptionA[questionIndex] << "\n";
    cout << "B) " << questionOptionB[questionIndex] << "\n";
    cout << "C) " << questionOptionC[questionIndex] << "\n";
    cout << "D) " << questionOptionD[questionIndex] << "\n\n";
    
    return 0;
}

int startTest(int subject) {
    if (generateRandomTest(currentTestIndices, subject) != 0) {
        clearScreen();
        cout << "\nError: Not enough questions for this subject!\n";
        pause();
        return -1;
    }
    
    currentTestSize = TEST_SIZE;
    currentTestSubject = subject;
    
    clearScreen();
    cout << "\n====================================================\n";
    cout << "                    TEST STARTED\n";
    cout << "====================================================\n\n";
    
    cout << "You will be presented with 20 questions.\n";
    cout << "Each question has 4 possible answers (A, B, C, D).\n";
    cout << "Your answers will be graded immediately.\n\n";
    
    pause();
    return 0;
}

int takeTest(string currentUser) {
    int correctAnswers = 0;
    int totalPoints = TEST_SIZE * 5;
    
    for (int i = 0; i < currentTestSize; i++) {
        int qIdx = currentTestIndices[i];
        
        displayQuestion(qIdx, i + 1);
        
        string answer = getInput("Your answer (A/B/C/D): ");
        
        if (!answer.empty()) {
            answer[0] = toupper(answer[0]);
        }
        
        if (answer[0] == questionCorrectAnswer[qIdx]) {
            cout << "Correct!\n";
            correctAnswers++;
        } else {
            cout << "Incorrect. Correct answer: " << questionCorrectAnswer[qIdx] << "\n";
        }
        
        pause();
    }
    
    int points = correctAnswers * 5;
    int grade = convertToGrade(points, totalPoints);
    
    clearScreen();
    cout << "\n====================================================\n";
    cout << "                    TEST COMPLETED\n";
    cout << "====================================================\n\n";
    
    cout << "Correct Answers: " << correctAnswers << " / " << TEST_SIZE << "\n";
    cout << "Points Earned: " << points << " / " << totalPoints << "\n";
    
    int percentage = (points * 100) / totalPoints;
    cout << "Percentage: " << percentage << "%\n";
    cout << "Grade (2-6): " << grade << "\n\n";
    
    if (grade == 2) cout << "Grade: 2 - Poor (0-40%)\n";
    else if (grade == 3) cout << "Grade: 3 - Weak (41-55%)\n";
    else if (grade == 4) cout << "Grade: 4 - Good (56-70%)\n";
    else if (grade == 5) cout << "Grade: 5 - Very Good (71-85%)\n";
    else if (grade == 6) cout << "Grade: 6 - Excellent (86-100%)\n";
    
    string subjectName;
    if (currentTestSubject == 1) subjectName = "Biology";
    else if (currentTestSubject == 2) subjectName = "Chemistry";
    else if (currentTestSubject == 3) subjectName = "Physics";
    
    saveTestResultToFile(currentUser, currentTestSubject, points, totalPoints, 
                        correctAnswers, TEST_SIZE, grade);
    
    pause();
    return 0;
}

int saveTestResultToFile(string currentUser, int subject, 
                         int points, int totalPoints, int correctAnswers, 
                         int totalQuestions, int grade) {
    
    string subjectName;
    if (subject == 1) subjectName = "Biology";
    else if (subject == 2) subjectName = "Chemistry";
    else if (subject == 3) subjectName = "Physics";
    
    return saveTestResult(currentUser, subjectName, points, totalPoints, 
                         correctAnswers, totalQuestions, grade);
}


