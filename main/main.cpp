#include <iostream>
#include <string>

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

    int choice;
    string answer;

    // If user chose "Test" in the first menu, skip the subject prompt once
    bool skipPrompt = false;
    if (mainChoice >= 1 && mainChoice <= 3 && (subChoice == 'b' || subChoice == 'B')) {
        skipPrompt = true;
        // map: initial menu 1=Biology,2=Chemistry,3=Physics
        // test-menu expects 1=Physics,2=Chemistry,3=Biology
        if (mainChoice == 1) choice = 3;
        else if (mainChoice == 2) choice = 2;
        else /* mainChoice == 3 */ choice = 1;
    }

    while (true) {
        if (!skipPrompt) {
            cout << "\n=== SUBJECT MENU ===\n";
            cout << "1. Physics\n";
            cout << "2. Chemistry\n";
            cout << "3. Biology\n";
            cout << "4. Exit\n";
            cout << "Choose a subject: ";
            cin >> choice;
        }
        else {
            // only skip the prompt once
            skipPrompt = false;
        }

        if (choice == 4) {
            cout << "Exiting program...\n";
            break;
        }

        // ---------------- PHYSICS ----------------
        if (choice == 1) {
            cout << "\n=== PHYSICS TEST ===\n\n";

            cout << "1. What is drift velocity?\n";
            cout << "A) Random motion\nB) Directed movement of electrons\nC) Movement of ions\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Directed movement of electrons\n\n";

            cout << "2. Why does the resistance of metals increase when heated?\n";
            cout << "A) Number of electrons decreases\nB) Ions vibrate more strongly\nC) The metal cools down\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Ions vibrate more strongly\n\n";

            cout << "3. What does the increase of specific resistance with temperature show?\n";
            cout << "A) Resistance decreases\nB) Metal becomes superconductive\nC) Resistance increases\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "C" || answer == "c") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: C) Resistance increases\n\n";

            cout << "4. What happens to resistance at the critical temperature Tk?\n";
            cout << "A) It increases\nB) It stays the same\nC) It becomes zero\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "C" || answer == "c") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: C) It becomes zero\n\n";

            cout << "5. Where are superconductors used?\n";
            cout << "A) Microwave ovens\nB) MRI machines\nC) Televisions\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) MRI machines\n\n";

            cout << "6. What is special about high‑temperature superconductors?\n";
            cout << "A) They work at higher temperature\nB) They do not conduct electricity\nC) They have negative resistance\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "A" || answer == "a") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: A) They work at higher temperature\n\n";
        }

        // ---------------- CHEMISTRY ----------------
        if (choice == 2) {
            cout << "\n=== CHEMISTRY TEST ===\n\n";

            cout << "1. To which group does benzene belong?\n";
            cout << "A) Alkanes\nB) Arenes\nC) Alkynes\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Arenes\n\n";

            cout << "2. What is delocalization?\n";
            cout << "A) Breaking of bonds\nB) Distribution of electrons across the ring\nC) Formation of new atoms\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Distribution of electrons across the ring\n\n";

            cout << "3. Why does benzene float on water?\n";
            cout << "A) It is denser than water\nB) It is lighter than water\nC) It reacts with water\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) It is lighter than water\n\n";

            cout << "4. What does benzene damage in the human body?\n";
            cout << "A) Stomach\nB) Central nervous system\nC) Skin\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Central nervous system\n\n";

            cout << "5. What reactions are typical for benzene?\n";
            cout << "A) Addition\nB) Substitution\nC) Decomposition\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Substitution\n\n";

            cout << "6. What is toluene?\n";
            cout << "A) Alkane\nB) Homologue of benzene\nC) Aldehyde\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Homologue of benzene\n\n";

            cout << "7. Why is benzene added to fuels?\n";
            cout << "A) To lower the price\nB) To increase the octane number\nC) To change the color\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) To increase the octane number\n\n";
        }

        // ---------------- BIOLOGY ----------------
        if (choice == 3) {
            cout << "\n=== BIOLOGY TEST ===\n\n";

            cout << "1. How many amino acids build proteins?\n";
            cout << "A) 5\nB) 10\nC) 20\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "C" || answer == "c") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: C) 20\n\n";

            cout << "2. Which bond connects amino acids?\n";
            cout << "A) Ionic\nB) Peptide\nC) Hydrogen\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Peptide\n\n";

            cout << "3. What determines the sequence of amino acids?\n";
            cout << "A) Temperature\nB) DNA\nC) Food\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) DNA\n\n";

            cout << "4. Which is a type of secondary structure?\n";
            cout << "A) Ionic helix\nB) Alpha helix\nC) Globule\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Alpha helix\n\n";

            cout << "5. What stabilizes tertiary structure?\n";
            cout << "A) Only peptide bonds\nB) Only hydrogen bonds\nC) Disulfide, hydrogen and hydrophobic interactions\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "C" || answer == "c") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: C) Disulfide, hydrogen and hydrophobic interactions\n\n";

            cout << "6. What characterizes quaternary structure?\n";
            cout << "A) One polypeptide chain\nB) Two or more chains\nC) Only alpha helices\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Two or more chains\n\n";

            cout << "7. What is denaturation?\n";
            cout << "A) Breakdown of DNA\nB) Destruction of protein structure\nC) Formation of a new protein\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "B" || answer == "b") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: B) Destruction of protein structure\n\n";

            cout << "8. What function is related to enzymes?\n";
            cout << "A) Catalytic\nB) Protective\nC) Energy\n";
            cout << "Answer: ";
            cin >> answer;
            if (answer == "A" || answer == "a") cout << "true\n\n";
            else cout << "false\nIncorrect. Correct answer: A) Catalytic\n\n";
        }
    }

    return 0;
}