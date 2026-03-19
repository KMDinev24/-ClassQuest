#include <iostream>
#include <string>
#include <cctype>

using namespace std;

static char ReadABCAnswer() {
    string ans;
    while (true) {
        cin >> ans;
        if (!ans.empty()) {
            char c = static_cast<char>(tolower((unsigned char)ans[0]));
            if (c == 'a' || c == 'b' || c == 'c') return c;
        }
        cout << "Please answer with A, B or C: ";
    }
}

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
            if (mainChoice == 3) {
                // Detailed Physics study plan for Plan option
                cout << "\n";
                cout << "============================================================================\n";
                cout << "               PHYSICS STUDY PLAN: ELECTRIC CURRENT                        \n";
                cout << "                    & SUPERCONDUCTIVITY                                     \n";
                cout << "============================================================================\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 1. DRIFT VELOCITY                                                          \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: The average velocity attained by charged particles\n";
                cout << "   (electrons) in a material due to an electric field.\n\n";
                cout << "   Key Point: It is DIRECTED MOVEMENT of electrons\n";
                cout << "   (not random motion)\n";
                cout << "   * Random motion = thermal motion (happens even without field)\n";
                cout << "   * Drift velocity = net movement in one direction when field applied\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 2. TEMPERATURE & RESISTANCE IN METALS                                      \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "   Why resistance increases when metals are heated:\n";
                cout << "   * IONS VIBRATE MORE STRONGLY at higher temperatures\n";
                cout << "   * Increased vibration = more collisions for flowing electrons\n";
                cout << "   * More collisions = higher resistance\n\n";

                cout << "   What DOES NOT happen:\n";
                cout << "   * Number of electrons does NOT decrease significantly\n";
                cout << "   * The metal does NOT cool down (it heats up)\n\n";

                cout << "   Specific resistance (resistivity) and temperature:\n";
                cout << "   * When specific resistance increases with temperature -> \n";
                cout << "     RESISTANCE INCREASES (normal for most conductors)\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 3. SUPERCONDUCTIVITY                                                       \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "   Critical Temperature (Tk):\n";
                cout << "   * At this special temperature, resistance BECOMES ZERO\n";
                cout << "   * Below Tk: Superconducting state (zero resistance)\n";
                cout << "   * Above Tk: Normal conducting state\n\n";

                cout << "   Applications of Superconductors:\n";
                cout << "   * MRI MACHINES (Magnetic Resonance Imaging) [YES]\n";
                cout << "   * Particle accelerators\n";
                cout << "   * Magnetic levitation trains\n";
                cout << "   * Power cables (lossless transmission)\n\n";

                cout << "   NOT typically used in:\n";
                cout << "   * Microwave ovens [NO]\n";
                cout << "   * Televisions (conventional) [NO]\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 4. HIGH-TEMPERATURE SUPERCONDUCTORS                                        \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "   What makes them \"special\":\n";
                cout << "   * They WORK AT HIGHER TEMPERATURES than conventional SC\n";
                cout << "   * \"High-temperature\" is relative (still cold, but less extreme)\n";
                cout << "   * Discovered in 1980s (ceramic materials)\n";
                cout << "   * Can operate above liquid nitrogen temperature (77K / -196C)\n\n";

                cout << "   Key advantage:\n";
                cout << "   * Easier and cheaper to cool\n";
                cout << "   * More practical for real-world applications\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << "                    QUICK REFERENCE TABLE                                   \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << " Concept                         | Key Characteristic                       \n";
                cout << "---------------------------------+-----------------------------------------\n";
                cout << " Drift velocity                  | Directed movement of electrons           \n";
                cout << " Resistance in heated metals     | Ions vibrate more strongly               \n";
                cout << " Specific resistance up with temp| Resistance increases                     \n";
                cout << " At critical temperature (Tk)    | Resistance becomes zero                  \n";
                cout << " Superconductor application      | MRI machines                             \n";
                cout << " High-temp superconductors       | Work at higher temperature               \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << "                       ANSWER KEY FOR TEST                                  \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << " Question | Correct Answer                                                  \n";
                cout << "----------+-----------------------------------------------------------------\n";
                cout << " 1        | B - Directed movement of electrons                              \n";
                cout << " 2        | B - Ions vibrate more strongly                                  \n";
                cout << " 3        | C - Resistance increases                                        \n";
                cout << " 4        | C - It becomes zero                                             \n";
                cout << " 5        | B - MRI machines                                                \n";
                cout << " 6        | A - They work at higher temperature                             \n";
                cout << "----------------------------------------------------------------------------\n";
            }
            else if (mainChoice == 2) {
                // Detailed Chemistry study plan for Plan option
                cout << "\n";
                cout << "============================================================================\n";
                cout << "               CHEMISTRY STUDY PLAN: ARENES & BENZENE                       \n";
                cout << "============================================================================\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 1. BENZENE CLASSIFICATION                                                  \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: Benzene is the simplest member of the ARENES family\n\n";
                cout << "   Key Point: Benzene belongs to the ARENES group (also called aromatic\n";
                cout << "   hydrocarbons)\n\n";
                cout << "   Comparison of hydrocarbon families:\n";
                cout << "   * Alkanes   - Saturated hydrocarbons (single bonds only)\n";
                cout << "   * Alkenes   - Unsaturated (contain double bonds)\n";
                cout << "   * Alkynes   - Unsaturated (contain triple bonds)\n";
                cout << "   * ARENES    - Aromatic hydrocarbons (benzene ring structure)\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 2. DELOCALIZATION IN BENZENE                                                \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: DELOCALIZATION is the DISTRIBUTION OF ELECTRONS\n";
                cout << "   ACROSS THE RING\n\n";
                cout << "   Key characteristics:\n";
                cout << "   * Electrons are not fixed between specific carbon atoms\n";
                cout << "   * They are shared evenly around the entire ring\n";
                cout << "   * Creates a stable, planar structure\n";
                cout << "   * Responsible for benzene's unique properties\n\n";
                cout << "   What delocalization is NOT:\n";
                cout << "   * NOT breaking of bonds\n";
                cout << "   * NOT formation of new atoms\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 3. PHYSICAL PROPERTIES: DENSITY                                             \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Benzene floats on water because:\n";
                cout << "   * IT IS LIGHTER THAN WATER (less dense)\n";
                cout << "   * Density of benzene: ~0.87 g/mL\n";
                cout << "   * Density of water: 1.00 g/mL\n\n";
                cout << "   Important: Benzene does NOT react with water (immiscible)\n";
                cout << "   * Forms a separate layer on top\n";
                cout << "   * Does not dissolve in water\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 4. HEALTH EFFECTS OF BENZENE                                                \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Primary target in human body:\n";
                cout << "   * CENTRAL NERVOUS SYSTEM\n\n";
                cout << "   Health hazards:\n";
                cout << "   * Neurotoxic - affects brain and nerves\n";
                cout << "   * Can cause dizziness, headaches, unconsciousness\n";
                cout << "   * Long-term exposure: bone marrow damage, leukemia\n";
                cout << "   * Classified as carcinogenic\n\n";
                cout << "   Other affected areas (secondary):\n";
                cout << "   * Bone marrow (blood cell production)\n";
                cout << "   * Immune system\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 5. BENZENE REACTIONS                                                        \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Typical reaction type: SUBSTITUTION\n\n";
                cout << "   Why substitution, not addition:\n";
                cout << "   * Benzene's delocalized electrons make it stable\n";
                cout << "   * Addition would break aromaticity (destabilize)\n";
                cout << "   * Substitution maintains the ring structure\n\n";
                cout << "   Examples of substitution reactions:\n";
                cout << "   * Nitration  (adds -NO2 group)\n";
                cout << "   * Halogenation (adds -Cl, -Br)\n";
                cout << "   * Sulfonation (adds -SO3H)\n";
                cout << "   * Alkylation (adds alkyl groups)\n\n";
                cout << "   NOT typical for benzene:\n";
                cout << "   * Addition reactions (unlike alkenes)\n";
                cout << "   * Decomposition\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 6. TOLUENE (METHYLBENZENE)                                                   \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: Toluene is a HOMOLOGUE OF BENZENE\n\n";
                cout << "   Structure:\n";
                cout << "   * Benzene ring with one methyl group (-CH3) attached\n";
                cout << "   * Also called methylbenzene\n";
                cout << "   * Chemical formula: C6H5CH3\n\n";
                cout << "   Homologue meaning:\n";
                cout << "   * Member of the same chemical family\n";
                cout << "   * Differs by a -CH2- unit from benzene\n";
                cout << "   * Similar chemical properties to benzene\n\n";
                cout << "   NOT classified as:\n";
                cout << "   * Alkane\n";
                cout << "   * Aldehyde\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 7. BENZENE IN FUELS                                                         \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Purpose: TO INCREASE THE OCTANE NUMBER\n\n";
                cout << "   Why benzene is added to gasoline:\n";
                cout << "   * Improves fuel efficiency (anti-knock properties)\n";
                cout << "   * Higher octane rating = smoother combustion\n";
                cout << "   * Replaced lead additives for environmental reasons\n\n";
                cout << "   However, due to health concerns:\n";
                cout << "   * Benzene content in fuels is now strictly limited\n";
                cout << "   * Many countries regulate maximum percentage\n";
                cout << "   * Alternative aromatic compounds often used instead\n\n";
                cout << "   NOT added to fuels for:\n";
                cout << "   * Lowering price\n";
                cout << "   * Changing color\n\n";
cout << "\n";
                cout << "============================================================================\n";
                cout << "                   KEY STRUCTURAL FEATURE: BENZENE RING                     \n";
                cout << "============================================================================\n";
                cout << "\n";
                cout << "                           H\n";
                cout << "                            \\\n";
                cout << "                             C\n";
                cout << "                            / \\\n";
                cout << "                     H-----C   C-----H\n";
				cout << "                           |   |\n";
                cout << "                     H-----C   C-----H\n";
                cout << "                            \\ /\n";
                cout << "                             C\n";
                cout << "                            /\n";
                cout << "                           H\n";
                cout << "\n";
                cout << "   * Six carbon atoms in a ring\n";
                cout << "   * Each carbon bonded to one hydrogen\n";
                cout << "   * Delocalized electrons above and below the ring\n";
                cout << "   * Planar structure\n";
                cout << "============================================================================\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << "                    QUICK REFERENCE TABLE                                   \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << " Concept                          | Key Characteristics                     \n";
                cout << "----------------------------------+-----------------------------------------\n";
                cout << " Benzene group                    | Arenes (aromatic hydrocarbons)          \n";
                cout << " Delocalization                   | Distribution of electrons across ring   \n";
                cout << " Benzene on water                 | Floats (lighter than water)             \n";
                cout << " Health damage                    | Central nervous system                  \n";
                cout << " Typical reactions                | Substitution                           \n";
                cout << " Toluene                          | Homologue of benzene                   \n";
                cout << " Benzene in fuel                  | Increases octane number                \n";
                cout << "----------------------------------------------------------------------------\n\n";

                
            }
            else {
                cout << "plan" << endl;
            }
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

        // If the user selected Physics in the main menu and chose Test, print the study plan
        if (mainChoice == 3) {
            cout << "\n";
            cout << "============================================================================\n";
            cout << "               PHYSICS STUDY PLAN: ELECTRIC CURRENT                        \n";
            cout << "                    & SUPERCONDUCTIVITY                                     \n";
            cout << "============================================================================\n\n";

            cout << "----------------------------------------------------------------------------\n";
            cout << " 1. DRIFT VELOCITY                                                          \n";
            cout << "----------------------------------------------------------------------------\n";
            cout << "   Definition: The average velocity attained by charged particles\n";
            cout << "   (electrons) in a material due to an electric field.\n\n";
            cout << "   Key Point: It is DIRECTED MOVEMENT of electrons\n";
            cout << "   (not random motion)\n";
            cout << "   * Random motion = thermal motion (happens even without field)\n";
            cout << "   * Drift velocity = net movement in one direction when field applied\n\n";

            cout << "----------------------------------------------------------------------------\n";
            cout << " 2. TEMPERATURE & RESISTANCE IN METALS                                      \n";
            cout << "----------------------------------------------------------------------------\n\n";

            cout << "   Why resistance increases when metals are heated:\n";
            cout << "   * IONS VIBRATE MORE STRONGLY at higher temperatures\n";
            cout << "   * Increased vibration = more collisions for flowing electrons\n";
            cout << "   * More collisions = higher resistance\n\n";

            cout << "   What DOES NOT happen:\n";
            cout << "   * Number of electrons does NOT decrease significantly\n";
            cout << "   * The metal does NOT cool down (it heats up)\n\n";

            cout << "   Specific resistance (resistivity) and temperature:\n";
            cout << "   * When specific resistance increases with temperature -> \n";
            cout << "     RESISTANCE INCREASES (normal for most conductors)\n\n";

            cout << "----------------------------------------------------------------------------\n";
            cout << " 3. SUPERCONDUCTIVITY                                                       \n";
            cout << "----------------------------------------------------------------------------\n\n";

            cout << "   Critical Temperature (Tk):\n";
            cout << "   * At this special temperature, resistance BECOMES ZERO\n";
            cout << "   * Below Tk: Superconducting state (zero resistance)\n";
            cout << "   * Above Tk: Normal conducting state\n\n";

            cout << "   Applications of Superconductors:\n";
            cout << "   * MRI MACHINES (Magnetic Resonance Imaging) [YES]\n";
            cout << "   * Particle accelerators\n";
            cout << "   * Magnetic levitation trains\n";
            cout << "   * Power cables (lossless transmission)\n\n";

            cout << "   NOT typically used in:\n";
            cout << "   * Microwave ovens [NO]\n";
            cout << "   * Televisions (conventional) [NO]\n\n";

            cout << "----------------------------------------------------------------------------\n";
            cout << " 4. HIGH-TEMPERATURE SUPERCONDUCTORS                                        \n";
            cout << "----------------------------------------------------------------------------\n\n";

            cout << "   What makes them \"special\":\n";
            cout << "   * They WORK AT HIGHER TEMPERATURES than conventional SC\n";
            cout << "   * \"High-temperature\" is relative (still cold, but less extreme)\n";
            cout << "   * Discovered in 1980s (ceramic materials)\n";
            cout << "   * Can operate above liquid nitrogen temperature (77K / -196C)\n\n";

            cout << "   Key advantage:\n";
            cout << "   * Easier and cheaper to cool\n";
            cout << "   * More practical for real-world applications\n\n";

            cout << "----------------------------------------------------------------------------\n";
            cout << "                    QUICK REFERENCE TABLE                                   \n";
            cout << "----------------------------------------------------------------------------\n";
            cout << " Concept                         | Key Characteristic                       \n";
            cout << "---------------------------------+------------------------------------------\n";
            cout << " Drift velocity                  | Directed movement of electrons           \n";
            cout << " Resistance in heated metals     | Ions vibrate more strongly               \n";
            cout << " Specific resistance up with temp| Resistance increases                     \n";
            cout << " At critical temperature (Tk)    | Resistance becomes zero                  \n";
            cout << " Superconductor application      | MRI machines                             \n";
            cout << " High-temp superconductors       | Work at higher temperature               \n";
            cout << "----------------------------------------------------------------------------\n\n";
        }
    }

    while (true) {
        char subjectSubChoice = '\0';
        if (!skipPrompt) {
            cout << "\n=== SUBJECT MENU ===\n";
            cout << "1. Physics\n";
            cout << "2. Chemistry\n";
            cout << "3. Biology\n";
            cout << "4. Exit\n";
            cout << "Choose a subject: ";
            cin >> choice;

            // After selecting a subject, ask whether they want the plan or the test
            cout << "a. Plan" << endl;
            cout << "b. Test" << endl;
            cout << "Choice: ";
            cin >> subjectSubChoice;
        }
        else {
            // only skip the prompt once; default to Test because user already chose Test earlier
            subjectSubChoice = 'b';
            skipPrompt = false;
        }

        if (choice == 4) {
            cout << "Exiting program...\n";
            break;
        }

        // Handle Plan or Test selected in subject menu
        if (subjectSubChoice == 'a' || subjectSubChoice == 'A') {
            // Show study plan for chosen subject
            if (choice == 1) {
                // Physics plan
                cout << "\n";
                cout << "============================================================================\n";
                cout << "               PHYSICS STUDY PLAN: ELECTRIC CURRENT                        \n";
                cout << "                    & SUPERCONDUCTIVITY                                     \n";
                cout << "============================================================================\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 1. DRIFT VELOCITY                                                          \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: The average velocity attained by charged particles\n";
                cout << "   (electrons) in a material due to an electric field.\n\n";
                cout << "   Key Point: It is DIRECTED MOVEMENT of electrons\n";
                cout << "   (not random motion)\n";
                cout << "   * Random motion = thermal motion (happens even without field)\n";
                cout << "   * Drift velocity = net movement in one direction when field applied\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 2. TEMPERATURE & RESISTANCE IN METALS                                      \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "   Why resistance increases when metals are heated:\n";
                cout << "   * IONS VIBRATE MORE STRONGLY at higher temperatures\n";
                cout << "   * Increased vibration = more collisions for flowing electrons\n";
                cout << "   * More collisions = higher resistance\n\n";

                cout << "   What DOES NOT happen:\n";
                cout << "   * Number of electrons does NOT decrease significantly\n";
                cout << "   * The metal does NOT cool down (it heats up)\n\n";

                cout << "   Specific resistance (resistivity) and temperature:\n";
                cout << "   * When specific resistance increases with temperature -> \n";
                cout << "     RESISTANCE INCREASES (normal for most conductors)\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 3. SUPERCONDUCTIVITY                                                       \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "   Critical Temperature (Tk):\n";
                cout << "   * At this special temperature, resistance BECOMES ZERO\n";
                cout << "   * Below Tk: Superconducting state (zero resistance)\n";
                cout << "   * Above Tk: Normal conducting state\n\n";

                cout << "   Applications of Superconductors:\n";
                cout << "   * MRI MACHINES (Magnetic Resonance Imaging) [YES]\n";
                cout << "   * Particle accelerators\n";
                cout << "   * Magnetic levitation trains\n";
                cout << "   * Power cables (lossless transmission)\n\n";

                cout << "   NOT typically used in:\n";
                cout << "   * Microwave ovens [NO]\n";
                cout << "   * Televisions (conventional) [NO]\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 4. HIGH-TEMPERATURE SUPERCONDUCTORS                                        \n";
                cout << "----------------------------------------------------------------------------\n\n";

                cout << "   What makes them \"special\":\n";
                cout << "   * They WORK AT HIGHER TEMPERATURES than conventional SC\n";
                cout << "   * \"High-temperature\" is relative (still cold, but less extreme)\n";
                cout << "   * Discovered in 1980s (ceramic materials)\n";
                cout << "   * Can operate above liquid nitrogen temperature (77K / -196C)\n\n";

                cout << "   Key advantage:\n";
                cout << "   * Easier and cheaper to cool\n";
                cout << "   * More practical for real-world applications\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << "                    QUICK REFERENCE TABLE                                   \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << " Concept                         | Key Characteristic                       \n";
                cout << "---------------------------------+------------------------------------------\n";
                cout << " Drift velocity                  | Directed movement of electrons           \n";
                cout << " Resistance in heated metals     | Ions vibrate more strongly               \n";
                cout << " Specific resistance up with temp| Resistance increases                     \n";
                cout << " At critical temperature (Tk)    | Resistance becomes zero                  \n";
                cout << " Superconductor application      | MRI machines                             \n";
                cout << " High-temp superconductors       | Work at higher temperature               \n";
                cout << "----------------------------------------------------------------------------\n\n";
            }
            else if (choice == 2) {
                // Chemistry plan
                cout << "\n";
                cout << "============================================================================\n";
                cout << "               CHEMISTRY STUDY PLAN: ARENES & BENZENE                       \n";
                cout << "============================================================================\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 1. BENZENE CLASSIFICATION                                                  \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: Benzene is the simplest member of the ARENES family\n\n";
                cout << "   Key Point: Benzene belongs to the ARENES group (also called aromatic\n";
                cout << "   hydrocarbons)\n\n";
                cout << "   Comparison of hydrocarbon families:\n";
                cout << "   * Alkanes   - Saturated hydrocarbons (single bonds only)\n";
                cout << "   * Alkenes   - Unsaturated (contain double bonds)\n";
                cout << "   * Alkynes   - Unsaturated (contain triple bonds)\n";
                cout << "   * ARENES    - Aromatic hydrocarbons (benzene ring structure)\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 2. DELOCALIZATION IN BENZENE                                                \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: DELOCALIZATION is the DISTRIBUTION OF ELECTRONS\n";
                cout << "   ACROSS THE RING\n\n";
                cout << "   Key characteristics:\n";
                cout << "   * Electrons are not fixed between specific carbon atoms\n";
                cout << "   * They are shared evenly around the entire ring\n";
                cout << "   * Creates a stable, planar structure\n";
                cout << "   * Responsible for benzene's unique properties\n\n";
                cout << "   What delocalization is NOT:\n";
                cout << "   * NOT breaking of bonds\n";
                cout << "   * NOT formation of new atoms\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 3. PHYSICAL PROPERTIES: DENSITY                                             \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Benzene floats on water because:\n";
                cout << "   * IT IS LIGHTER THAN WATER (less dense)\n";
                cout << "   * Density of benzene: ~0.87 g/mL\n";
                cout << "   * Density of water: 1.00 g/mL\n\n";
                cout << "   Important: Benzene does NOT react with water (immiscible)\n";
                cout << "   * Forms a separate layer on top\n";
                cout << "   * Does not dissolve in water\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 4. HEALTH EFFECTS OF BENZENE                                                \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Primary target in human body:\n";
                cout << "   * CENTRAL NERVOUS SYSTEM\n\n";
                cout << "   Health hazards:\n";
                cout << "   * Neurotoxic - affects brain and nerves\n";
                cout << "   * Can cause dizziness, headaches, unconsciousness\n";
                cout << "   * Long-term exposure: bone marrow damage, leukemia\n";
                cout << "   * Classified as carcinogenic\n\n";
                cout << "   Other affected areas (secondary):\n";
                cout << "   * Bone marrow (blood cell production)\n";
                cout << "   * Immune system\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 5. BENZENE REACTIONS                                                        \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Typical reaction type: SUBSTITUTION\n\n";
                cout << "   Why substitution, not addition:\n";
                cout << "   * Benzene's delocalized electrons make it stable\n";
                cout << "   * Addition would break aromaticity (destabilize)\n";
                cout << "   * Substitution maintains the ring structure\n\n";
                cout << "   Examples of substitution reactions:\n";
                cout << "   * Nitration  (adds -NO2 group)\n";
                cout << "   * Halogenation (adds -Cl, -Br)\n";
                cout << "   * Sulfonation (adds -SO3H)\n";
                cout << "   * Alkylation (adds alkyl groups)\n\n";
                cout << "   NOT typical for benzene:\n";
                cout << "   * Addition reactions (unlike alkenes)\n";
                cout << "   * Decomposition\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 6. TOLUENE (METHYLBENZENE)                                                   \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Definition: Toluene is a HOMOLOGUE OF BENZENE\n\n";
                cout << "   Structure:\n";
                cout << "   * Benzene ring with one methyl group (-CH3) attached\n";
                cout << "   * Also called methylbenzene\n";
                cout << "   * Chemical formula: C6H5CH3\n\n";
                cout << "   Homologue meaning:\n";
                cout << "   * Member of the same chemical family\n";
                cout << "   * Differs by a -CH2- unit from benzene\n";
                cout << "   * Similar chemical properties to benzene\n\n";
                cout << "   NOT classified as:\n";
                cout << "   * Alkane\n";
                cout << "   * Aldehyde\n\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << " 7. BENZENE IN FUELS                                                         \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "   Purpose: TO INCREASE THE OCTANE NUMBER\n\n";
                cout << "   Why benzene is added to gasoline:\n";
                cout << "   * Improves fuel efficiency (anti-knock properties)\n";
                cout << "   * Higher octane rating = smoother combustion\n";
                cout << "   * Replaced lead additives for environmental reasons\n\n";
                cout << "   However, due to health concerns:\n";
                cout << "   * Benzene content in fuels is now strictly limited\n";
                cout << "   * Many countries regulate maximum percentage\n";
                cout << "   * Alternative aromatic compounds often used instead\n\n";
                cout << "   NOT added to fuels for:\n";
                cout << "   * Lowering price\n";
                cout << "   * Changing color\n\n";

                cout << "============================================================================\n";
                cout << "                   KEY STRUCTURAL FEATURE: BENZENE RING                     \n";
                cout << "============================================================================\n";
                cout << "\n";
                cout << "                           H\n";
                cout << "                            \\\n";
                cout << "                             C\n";
                cout << "                            / \\\n";
                cout << "                     H-----C   C-----H\n";
                cout << "                           |   |\n";
                cout << "                     H-----C   C-----H\n";
                cout << "                            \\ /\n";
                cout << "                             C\n";
                cout << "                            /\n";
                cout << "                           H\n";
                cout << "\n";
                cout << "   * Six carbon atoms in a ring\n";
                cout << "   * Each carbon bonded to one hydrogen\n";
                cout << "   * Delocalized electrons above and below the ring\n";
                cout << "   * Planar structure\n";
                cout << "============================================================================\n";

                cout << "----------------------------------------------------------------------------\n";
                cout << "                    QUICK REFERENCE TABLE                                   \n";
                cout << "----------------------------------------------------------------------------\n";
                cout << " Concept                          | Key Characteristic                       \n";
                cout << "----------------------------------+-----------------------------------------\n";
                cout << " Benzene group                    | Arenes (aromatic hydrocarbons)          \n";
                cout << " Delocalization                   | Distribution of electrons across ring   \n";
                cout << " Benzene on water                 | Floats (lighter than water)             \n";
                cout << " Health damage                    | Central nervous system                  \n";
                cout << " Typical reactions                | Substitution                           \n";
                cout << " Toluene                          | Homologue of benzene                   \n";
                cout << " Benzene in fuel                  | Increases octane number                \n";
                cout << "----------------------------------------------------------------------------\n\n";
            }
            else if (choice == 3) {
                // No detailed biology plan provided: fallback
                cout << "plan" << endl;
            }
            else {
                cout << "Invalid subject selected." << endl;
            }
        }
        else if (subjectSubChoice == 'b' || subjectSubChoice == 'B') {
            // ---------------- PHYSICS ----------------
            if (choice == 1) {
                cout << "\n=== PHYSICS TEST ===\n\n";

                cout << "1. What is drift velocity?\n";
                cout << "A) Random motion\nB) Directed movement of electrons\nC) Movement of ions\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Directed movement of electrons\n\n";
                }

                cout << "2. Why does the resistance of metals increase when heated?\n";
                cout << "A) Number of electrons decreases\nB) Ions vibrate more strongly\nC) The metal cools down\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Ions vibrate more strongly\n\n";
                }

                cout << "3. What does the increase of specific resistance with temperature show?\n";
                cout << "A) Resistance decreases\nB) Metal becomes superconductive\nC) Resistance increases\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'c') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: C) Resistance increases\n\n";
                }

                cout << "4. What happens to resistance at the critical temperature Tk?\n";
                cout << "A) It increases\nB) It stays the same\nC) It becomes zero\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'c') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: C) It becomes zero\n\n";
                }

                cout << "5. Where are superconductors used?\n";
                cout << "A) Microwave ovens\nB) MRI machines\nC) Televisions\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) MRI machines\n\n";
                }

                cout << "6. What is special about high‑temperature superconductors?\n";
                cout << "A) They work at higher temperature\nB) They do not conduct electricity\nC) They have negative resistance\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'a') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: A) They work at higher temperature\n\n";
                }
            }

            // ---------------- CHEMISTRY ----------------
            if (choice == 2) {
                cout << "\n=== CHEMISTRY TEST ===\n\n";

                cout << "1. To which group does benzene belong?\n";
                cout << "A) Alkanes\nB) Arenes\nC) Alkynes\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Arenes\n\n";
                }

                cout << "2. What is delocalization?\n";
                cout << "A) Breaking of bonds\nB) Distribution of electrons across the ring\nC) Formation of new atoms\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Distribution of electrons across the ring\n\n";
                }

                cout << "3. Why does benzene float on water?\n";
                cout << "A) It is denser than water\nB) It is lighter than water\nC) It reacts with water\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) It is lighter than water\n\n";
                }

                cout << "4. What does benzene damage in the human body?\n";
                cout << "A) Stomach\nB) Central nervous system\nC) Skin\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Central nervous system\n\n";
                }

                cout << "5. What reactions are typical for benzene?\n";
                cout << "A) Addition\nB) Substitution\nC) Decomposition\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Substitution\n\n";
                }

                cout << "6. What is toluene?\n";
                cout << "A) Alkane\nB) Homologue of benzene\nC) Aldehyde\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Homologue of benzene\n\n";
                }

                cout << "7. Why is benzene added to fuels?\n";
                cout << "A) To lower the price\nB) To increase the octane number\nC) To change the color\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) To increase the octane number\n\n";
                }
            }

            // ---------------- BIOLOGY ----------------
            if (choice == 3) {
                cout << "\n=== BIOLOGY TEST ===\n\n";

                cout << "1. How many amino acids build proteins?\n";
                cout << "A) 5\nB) 10\nC) 20\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'c') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: C) 20\n\n";
                }

                cout << "2. Which bond connects amino acids?\n";
                cout << "A) Ionic\nB) Peptide\nC) Hydrogen\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Peptide\n\n";
                }

                cout << "3. What determines the sequence of amino acids?\n";
                cout << "A) Temperature\nB) DNA\nC) Food\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) DNA\n\n";
                }

                cout << "4. Which is a type of secondary structure?\n";
                cout << "A) Ionic helix\nB) Alpha helix\nC) Globule\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Alpha helix\n\n";
                }

                cout << "5. What stabilizes tertiary structure?\n";                                     
                cout << "A) Only peptide bonds\nB) Only hydrogen bonds\nC) Disulfide, hydrogen and hydrophobic interactions\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'c') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: C) Disulfide, hydrogen and hydrophobic interactions\n\n";
                }

                cout << "6. What characterizes quaternary structure?\n";
                cout << "A) One polypeptide chain\nB) Two or more chains\nC) Only alpha helices\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Two or more chains\n\n";
                }

                cout << "7. What is denaturation?\n";
                cout << "A) Breakdown of DNA\nB) Destruction of protein structure\nC) Formation of a new protein\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'b') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: B) Destruction of protein structure\n\n";
                }

                cout << "8. What function is related to enzymes?\n";
                cout << "A) Catalytic\nB) Protective\nC) Energy\n";
                cout << "Answer: ";
                {
                    char c = ReadABCAnswer();
                    if (c == 'a') cout << "true\n\n";
                    else cout << "false\nIncorrect. Correct answer: A) Catalytic\n\n";
                }
            }
        }
        else {
            cout << "Invalid choice. Please select a or b." << endl;
        }
    }

    return 0;
}