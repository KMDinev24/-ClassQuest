#include <iostream>

using namespace std;

int main() {
    int mainChoice;
    char subChoice;

    cout << "Welcome to ClassQuest" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Biology" << endl;
    cout << "2. Chemistry" << endl;
    cout << "3. Physics" << endl;
    cin >> mainChoice;

    if (mainChoice >= 1 && mainChoice <= 3) {
        cout << "\nYou selected " << mainChoice << endl;
        cout << "a. Plan" << endl;
        cout << "b. Test" << endl;
        cout << "Choice: ";
        cin >> subChoice;

        if (subChoice == 'a' || subChoice == 'A') {
            cout << "plan" << endl;
        }
        else if (subChoice == 'b' || subChoice == 'B') {
            cout << "You selected option b." << endl;
        }
        else {
            cout << "Invalid sub-option selected." << endl;
        }
    }
    else {
        cout << "Invalid main option selected." << endl;
    }

    return 0;
}