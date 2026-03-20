#include "subjects.h"
#include "utils.h"
#include <iostream>
using namespace std;

void displayBiologyMenu() {
    clearScreen();
    cout << "\n+========================================+\n";
    cout << "|            BIOLOGY (CELLS)             |\n";
    cout << "|                                        |\n";
    cout << "|  1. Display Lesson                     |\n";
    cout << "|  2. Practice Tasks                     |\n";
    cout << "|  3. Homework Assignment                |\n";
    cout << "|  4. Back                               |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displayBiologyContent() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                    BIOLOGY LESSONS\n";
    cout << "=============================================================\n\n";
    
    cout << "TOPIC 1: CELLS - THE BASIC UNIT OF LIFE\n";
    cout << "-----------------------------------------------\n";
    cout << "- Cells are the smallest units of life\n";
    cout << "- All living organisms consist of one or more cells\n";
    cout << "- There are two main types: Prokaryotic and Eukaryotic\n";
    cout << "- Prokaryotic cells lack a nucleus (bacteria, archaea)\n";
    cout << "- Eukaryotic cells have a nucleus (animals, plants, fungi)\n\n";
    
    cout << "TOPIC 2: CELL ORGANELLES\n";
    cout << "-----------------------------------------------\n";
    cout << "- Nucleus: Contains DNA, controls cell functions\n";
    cout << "- Mitochondria: Powerhouse - produces ATP energy\n";
    cout << "- Endoplasmic Reticulum: Protein synthesis\n";
    cout << "- Golgi Apparatus: Modifies and packages proteins\n";
    cout << "- Ribosome: Protein synthesis site\n";
    cout << "- Chloroplast (plants): Photosynthesis\n";
    cout << "- Lysosome: Breaks down waste materials\n\n";
    
    cout << "TOPIC 3: CELL MEMBRANE\n";
    cout << "-----------------------------------------------\n";
    cout << "- Phospholipid bilayer with embedded proteins\n";
    cout << "- Controls what enters and exits the cell\n";
    cout << "- Selectively permeable membrane\n";
    cout << "- Responsible for cell recognition\n\n";
    
    pause();
}

void displayChemistryMenu() {
    clearScreen();
    cout << "\n+========================================+\n";
    cout << "|        CHEMISTRY (ELEMENTS)            |\n";
    cout << "|                                        |\n";
    cout << "|  1. Display Lesson                     |\n";
    cout << "|  2. Practice Tasks                     |\n";
    cout << "|  3. Homework Assignment                |\n";
    cout << "|  4. Back                               |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displayChemistryContent() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                   CHEMISTRY LESSONS\n";
    cout << "=============================================================\n\n";
    
    cout << "TOPIC 1: BASIC CHEMISTRY CONCEPTS\n";
    cout << "-----------------------------------------------\n";
    cout << "- Chemistry is the study of matter and chemical reactions\n";
    cout << "- Matter: Anything that has mass and occupies space\n";
    cout << "- Atoms: Smallest unit of an element\n";
    cout << "- Molecules: Two or more atoms bonded together\n";
    cout << "- Compounds: Two or more elements in fixed ratio\n\n";
    
    cout << "TOPIC 2: THE PERIODIC TABLE\n";
    cout << "-----------------------------------------------\n";
    cout << "- Organized table of all known elements\n";
    cout << "- Arranged by atomic number and properties\n";
    cout << "- Groups (vertical): Same number of valence electrons\n";
    cout << "- Periods (horizontal): Number of electron shells\n";
    cout << "- Common elements: H, C, N, O, P, S, Fe, Ca, Na\n\n";
    
    cout << "TOPIC 3: CHEMICAL REACTIONS\n";
    cout << "-----------------------------------------------\n";
    cout << "- Breaking and forming chemical bonds\n";
    cout << "- Reactants -> Products\n";
    cout << "- Exothermic: Releases heat\n";
    cout << "- Endothermic: Absorbs heat\n";
    cout << "- Law of Conservation: Matter cannot be created/destroyed\n\n";
    
    pause();
}

void displayPhysicsMenu() {
    clearScreen();
    cout << "\n+========================================+\n";
    cout << "|          PHYSICS (MOTION)              |\n";
    cout << "|                                        |\n";
    cout << "|  1. Display Lesson                     |\n";
    cout << "|  2. Practice Tasks                     |\n";
    cout << "|  3. Homework Assignment                |\n";
    cout << "|  4. Back                               |\n";
    cout << "|                                        |\n";
    cout << "+========================================+\n";
}

void displayPhysicsContent() {
    clearScreen();
    cout << "\n=============================================================\n";
    cout << "                   PHYSICS LESSONS\n";
    cout << "=============================================================\n\n";
    
    cout << "TOPIC 1: KINEMATICS - MOTION AND FORCES\n";
    cout << "-----------------------------------------------\n";
    cout << "- Displacement: Change in position\n";
    cout << "- Velocity: Rate of change of displacement\n";
    cout << "- Acceleration: Rate of change of velocity\n";
    cout << "- Distance: Total path traveled\n";
    cout << "- Speed: Distance traveled per unit time\n\n";
    
    cout << "TOPIC 2: NEWTON'S LAWS OF MOTION\n";
    cout << "-----------------------------------------------\n";
    cout << "- First Law: Object at rest stays at rest (inertia)\n";
    cout << "- Second Law: F = ma (Force equals mass times acceleration)\n";
    cout << "- Third Law: Action and reaction are equal and opposite\n";
    cout << "- Force unit: Newton (N)\n";
    cout << "- Weight and Normal Force concepts\n\n";
    
    cout << "TOPIC 3: ENERGY AND WORK\n";
    cout << "-----------------------------------------------\n";
    cout << "- Work = Force × Distance × cos(angle)\n";
    cout << "- Kinetic Energy: Energy of motion (KE = 1/2 * m * v²)\n";
    cout << "- Potential Energy: Stored energy (PE = m * g * h)\n";
    cout << "- Conservation of Energy: Total energy remains constant\n";
    cout << "- Power: Rate of doing work\n\n";
    
    pause();
}

int selectAndDisplaySubject() {
    int choice;
    int subjectChoice;
    
    while (true) {
        displaySubjectMenu();
        choice = getIntInput("Choose a subject: ");
        
        if (choice == 1) {
            while (true) {
                displayBiologyMenu();
                subjectChoice = getIntInput("Choose an option: ");
                
                if (subjectChoice == 1) {
                    displayBiologyContent();
                } else if (subjectChoice == 2) {
                    clearScreen();
                    cout << "\n========================================\n";
                    cout << "           BIOLOGY PRACTICE TASKS\n";
                    cout << "========================================\n\n";
                    cout << "Practice Task 1: Draw and label a plant cell\n";
                    cout << "Practice Task 2: Identify organelles in microscope image\n";
                    cout << "Practice Task 3: Compare prokaryotic vs eukaryotic cells\n";
                    cout << "Practice Task 4: Study cell transport mechanisms\n\n";
                    pause();
                } else if (subjectChoice == 3) {
                    clearScreen();
                    cout << "\n========================================\n";
                    cout << "          BIOLOGY HOMEWORK\n";
                    cout << "========================================\n\n";
                    cout << "Homework Assignment:\n";
                    cout << "1. Write a 2-page essay about cell structure\n";
                    cout << "2. Create a diagram of photosynthesis\n";
                    cout << "3. Research and present on cell mutations\n";
                    cout << "4. Lab report: Observing cells under microscope\n\n";
                    pause();
                } else if (subjectChoice == 4) {
                    break;
                }
            }
        } else if (choice == 2) {
            while (true) {
                displayChemistryMenu();
                subjectChoice = getIntInput("Choose an option: ");
                
                if (subjectChoice == 1) {
                    displayChemistryContent();
                } else if (subjectChoice == 2) {
                    clearScreen();
                    cout << "\n========================================\n";
                    cout << "        CHEMISTRY PRACTICE TASKS\n";
                    cout << "========================================\n\n";
                    cout << "Practice Task 1: Balance chemical equations\n";
                    cout << "Practice Task 2: Calculate molecular mass\n";
                    cout << "Practice Task 3: Predict products of reactions\n";
                    cout << "Practice Task 4: Classify elements on periodic table\n\n";
                    pause();
                } else if (subjectChoice == 3) {
                    clearScreen();
                    cout << "\n========================================\n";
                    cout << "         CHEMISTRY HOMEWORK\n";
                    cout << "========================================\n\n";
                    cout << "Homework Assignment:\n";
                    cout << "1. Memorize 20 common chemical reactions\n";
                    cout << "2. Create a periodic table study guide\n";
                    cout << "3. Lab report: Acid-base titration\n";
                    cout << "4. Essay: Industrial chemistry applications\n\n";
                    pause();
                } else if (subjectChoice == 4) {
                    break;
                }
            }
        } else if (choice == 3) {
            while (true) {
                displayPhysicsMenu();
                subjectChoice = getIntInput("Choose an option: ");
                
                if (subjectChoice == 1) {
                    displayPhysicsContent();
                } else if (subjectChoice == 2) {
                    clearScreen();
                    cout << "\n=========================================\n";
                    cout << "         PHYSICS PRACTICE TASKS\n";
                    cout << "=========================================\n\n";
                    cout << "Practice Task 1: Calculate velocity and acceleration\n";
                    cout << "Practice Task 2: Apply Newton's second law\n";
                    cout << "Practice Task 3: Energy conservation problems\n";
                    cout << "Practice Task 4: Vector addition and resolution\n\n";
                    pause();
                } else if (subjectChoice == 3) {
                    clearScreen();
                    cout << "\n=========================================\n";
                    cout << "          PHYSICS HOMEWORK\n";
                    cout << "=========================================\n\n";
                    cout << "Homework Assignment:\n";
                    cout << "1. Solve 20 kinematics problems\n";
                    cout << "2. Create diagrams for Newton's laws\n";
                    cout << "3. Lab report: Free fall experiment\n";
                    cout << "4. Project: Build a simple physics model\n\n";
                    pause();
                } else if (subjectChoice == 4) {
                    break;
                }
            }
        } else if (choice == 4) {
            break;
        }
    }
    
    return 0;
}



