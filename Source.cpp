#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;

int counter = 3;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// function to store text in a file
void storedText(const string& filename, const string& text) {
    ofstream outFile(filename); // Opens thew file in writing mode
    if (outFile.is_open()) {
        outFile << text; // It writes text to file
        outFile.close();
        cout << "This is our intelligence agency database." << endl;
        cout << "\nGroup members are:" << endl;
        cout << "1. Muhammad Taha Irfan           01-134242-151" << endl;
        cout << "2. Aaima Bint-e-Basit            01-134242-001" << endl;
        cout << "1. Muhammad Absaar Munawwar      01-134242-070" << endl;
    }
    else {
        cerr << "There was an error to open file for writing." << endl;
    }
}

// reads text from a file and displays it
void readText(const string& filename) {
    ifstream inFile(filename); // it will open the  file in read mode
    if (inFile.is_open()) {
        string line;
        cout << "Reading text from the file:" << endl;
        while (getline(inFile, line)) { // reading the file line by line
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cerr << "Error: Unable to open file for reading." << endl;
    }
}


bool loginUser(string staff[], string staffpass[], int size) {
    string Staff_Username;
    string Staff_Pass;
    bool login = false;

    do {
        cout << endl;
        cout << "  |  |   __|  __|  _ \\   \\ |    \\     \\  |  __| _) \n";
        cout << "  |  | \\__ \\  _|     /  .  |   _ \\   |\\/ |  _|     \n";
        cout << " \\__/  ____/ ___| _|_\\ _|\\_| _/  _\\ _|  _| ___| _) \n";
        cout << "                                                   \n";
        cin >> Staff_Username;
        cin.ignore();
        cout << "\n\n";
        cout << "  _ \\  \\     __|   __| \\ \\      / _ \\  _ \\  _ \\ _) \n";
        cout << "  __/ _ \\  \\__ \\ \\__ \\  \\ \\ \\  / (   |   /  |  |   \n";
        cout << " _| _/  _\\ ____/ ____/   \\_/\\_/ \\___/ _|_\\ ___/ _) \n";
        cout << "                                                  \n";
        cin >> Staff_Pass;
        cin.ignore();

        bool found = false;
        int index = -1;

        for (int i = 0; i < size; i++) {
            if (Staff_Username == staff[i]) {
                found = true;
                index = i;
                break;
            }
        }

        if (found && Staff_Pass == staffpass[index]) {
            cout << "\t\t\t\t\t\t\t\t  _                 _             _____                             __       _    _ \n";
            cout << "\t\t\t\t\t\t\t\t | |               (_)           / ____|                           / _|     | |  | |\n";
            cout << "\t\t\t\t\t\t\t\t | |     ___   __ _ _ _ __      | (___  _   _  ___ ___ ___ ___ ___| |_ _   _| |  | |\n";
            cout << "\t\t\t\t\t\t\t\t | |    / _ \\ / _` | | '_ \\      \\___ \\| | | |/ __/ __/ _ \\ __/ __|  _| | | | |  | |\n";
            cout << "\t\t\t\t\t\t\t\t | |___| (_) | (_| | | | | |     ____) | |_| | (_| (_|  __/\\__ \\__\\ | | |_| | |  |_|\n";
            cout << "\t\t\t\t\t\t\t\t |______\\___/ \\__, |_|_| |_|    |_____/ \\__,_|\\___\\___\\___|___|___|_|  \\__,_|_|  (_)\n";
            cout << "\t\t\t\t\t\t\t\t               __/ |                                                                \n";
            cout << "\t\t\t\t\t\t\t\t              |___/                                                                 \n";
            system("CLS");
            cout << endl;
            login = true;
        }
        else {
            system("CLS");
            cout << "\n";
            cout << "\t\t\t\t\t\tdP                  dP                  dP    dP    oo" << endl;
            cout << "\t\t\t\t\t\t88                  88                  88    88" << endl;
            cout << "\t\t\t\t\t\t88    88d888b.    d8888P    .d8888b.    88    88    dP    .d8888b.    .d8888b.    88d888b.    .d8888b.    .d8888b." << endl;
            cout << "\t\t\t\t\t\t88    88'  `88      88      88ooood8    88    88    88    88'  `88    88ooood8    88'  `88    88'  `""    88ooood8" << endl;
            cout << "\t\t\t\t\t\t88    88    88      88      88.  ...    88    88    88    88.  .88    88.  ...    88    88    88.  ...    88.  ..." << endl;
            cout << "\t\t\t\t\t\tdP    dP    dP      dP      `88888P'    dP    dP    dP    `8888P88    `88888P'    dP    dP    `88888P'    `88888P'" << endl;
            cout << "\t\t\t\t\t\t                                                              .88" << endl;
            cout << "\t\t\t\t\t\t                                                           d8888P" << endl;
            cout << "\t\t\t\t\t\t          .d888888" << endl;
            cout << "\t\t\t\t\t\t         d8'    88" << endl;
            cout << "\t\t\t\t\t\t         88aaaaa88a    .d8888b.    .d8888b.    88d888b.    .d8888b.    dP    dP" << endl;
            cout << "\t\t\t\t\t\t         88     88     88'  `88    88ooood8    88'  `88    88'  `""      88    88" << endl;
            cout << "\t\t\t\t\t\t         88     88     88.  .88    88.  ...    88    88    88.  ...    88.  .88" << endl;
            cout << "\t\t\t\t\t\t         88     88     `8888P88    `88888P'    dP    dP    `88888P'    `8888P88" << endl;
            cout << "\t\t\t\t\t\t                            .88                                             .88" << endl;
            cout << "\t\t\t\t\t\t                        d8888P                                          d8888P" << endl;
            cout << "\t\t\t\t\t\t      888888ba                   dP                  dP" << endl;
            cout << "\t\t\t\t\t\t      88    `8b                  88                  88" << endl;
            cout << "\t\t\t\t\t\t      88     88    .d8888b.    d8888P    .d8888b.    88d888b.    .d8888b.    .d8888b.    .d8888b." << endl;
            cout << "\t\t\t\t\t\t      88     88    88'  `88      88      88'  `88    88'  `88    88'  `88    Y8ooooo.    88ooood8" << endl;
            cout << "\t\t\t\t\t\t      88    .8P    88.  .88      88      88.  .88    88.  .88    88.  .88          88    88.  ..." << endl;
            cout << "\t\t\t\t\t\t      8888888P     `88888P8      dP      `88888P8    88Y8888'    `88888P8    `88888P'    `88888P'" << endl;
            cout << "\n\n\n";
            cout << "Invalid credentials! Please enter again:" << endl << endl << endl << endl;

        }
    } while (!login);

    return true;
}

void addProfile(int personID[], string person[], string personAddress[], string personDOB[], string personCrime[][10], int crimecheck[], int& profileCounter, int removedIDs[], int& removedCount) {
    cout << "\t\t\t\t\t _____      _       _ _ _                               ___                                ______      _        _                    \n";
    cout << "\t\t\t\t\t|_   _|    | |     | | (_)                             / _ \\                               |  _  \\    | |      | |                   \n";
    cout << "\t\t\t\t\t  | | _ __ | |_ ___| | |_  __ _  ___ _ __   ___ ___   / /_\\ \\ __ _  ___ _ __   ___ _   _   | | | |__ _| |_ __ _| |__   __ _ ___  ___ \n";
    cout << "\t\t\t\t\t  | || '_ \\| __/ _ \\ | | |/ _` |/ _ | '_ \\ / __/ _ \\  |  _  |/ _` |/ _ | '_ \\ / __| | | |  | | | / _` | __/ _` | '_ \\ / _` / __|/ _ \\\n";
    cout << "\t\t\t\t\t _| || | | | ||  __| | | | (_| |  __| | | | (_|  __/  | | | | (_| |  __| | | | (__| |_| |  | |/ | (_| | || (_| | |_) | (_| \\__ |  __/\n";
    cout << "\t\t\t\t\t \\___|_| |_|\\__\\___|_|_|_|\\__, |\\___|_| |_|\\___\\___|  \\_| |_/\\__, |\\___|_| |_|\\___|\\__, |  |___/ \\__,_|\\__\\__,_|_.__/ \\__,_|___/\\___|\n";
    cout << "\t\t\t\t\t                           __/ |                              __/ |                 __/ |                                            \n";
    cout << "\t\t\t\t\t                          |___/                              |___/                 |___/                                             \n";
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "\t\t\t\t\t\t\t\t            _____  _____    _____  _____   ____  ______ _____ _      ______  \n";
    cout << "\t\t\t\t\t\t\t\t      /\\   |  __ \\|  __ \\  |  __ \\|  __ \\ / __ \\|  ____|_   _| |    |  ____| \n";
    cout << "\t\t\t\t\t\t\t\t     /  \\  | |  | | |  | | | |__) | |__) | |  | | |__    | | | |    | |__    \n";
    cout << "\t\t\t\t\t\t\t\t    / / \ \\ | |  | | |  | | |  ___/|  _  /| |  | |  __|   | | | |    |  __|  \n";
    cout << "\t\t\t\t\t\t\t\t   / ____ \\| |__| | |__| | | |    | | \\ \\| |__| | |     _| |_| |____| |____  \n";
    cout << "\t\t\t\t\t\t\t\t  /_/    \\_|_____/|_____/  |_|    |_|  \\_\\\\____/|_|    |_____|______|______| \n";
    cout << "\t\t\t\t\t\t\t\t                                                                             \n";
    cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

    const int MaxProfile = 100;
    const int MaxCrime = 10;
    string ask1;

    do {
        cout << "\t\t\t\t\t\t\t\tDo you want to add a new profile? (Yes/No):";
        string ask;
        getline(cin, ask);

        if (ask == "Yes" || ask == "yes") {
            if (profileCounter >= MaxProfile && removedCount == 0) {
                cout << "\t\t\t\t\t\t\t\tMaximum insertion limit has been reached!" << endl;
            }
            else {
                int newID;

                if (removedCount > 0) {
                    newID = removedIDs[removedCount - 1];
                    removedCount--;
                }
                else {
                    newID = profileCounter + 1;
                }

                personID[profileCounter] = newID;
                cout << "\t\t\t\t\t\t\t\tPerson's ID generated: " << newID << endl;
                cout << "\t\t\t\t\t\t\t\tEnter Name: ";
                getline(cin, person[profileCounter]);
                cout << "\t\t\t\t\t\t\t\tEnter Address: ";
                getline(cin, personAddress[profileCounter]);
                cout << "\t\t\t\t\t\t\t\tEnter Date Of Birth (DD/MM/YY): ";
                getline(cin, personDOB[profileCounter]);

                int i = 0;
                do {
                    cout << "\t\t\t\t\t\t\t\tDo you want to add a crime? (Yes/No):";
                    getline(cin, ask1);
                    if (i >= MaxCrime) {
                        cout << "\t\t\t\t\t\t\t\tMax crime limit has been reached!" << endl;
                    }
                    else if (ask1 == "Yes" || ask1 == "yes") {
                        cout << "\t\t\t\t\t\t\t\tEnter crime: ";
                        getline(cin, personCrime[profileCounter][i]);
                        crimecheck[profileCounter] += 1;
                        i++;
                    }
                    else if (ask1 == "No" || ask1 == "no") {
                        cout << "\t\t\t\t\t\t\t\tOk" << endl;
                    }
                    else {
                        cout << "\t\t\t\t\t\t\t\tPlease specify (Yes or No)!" << endl;
                    }
                } while (ask1 == "Yes" || ask1 == "yes");

                profileCounter++;
            }
        }
        else if (ask == "No" || ask == "no") {
            break;
        }
    } while (true);
}
void showAll(int personID[], string person[], string personAddress[], string personDOB[], string personCrime[][10], int crimecheck[], int& profileCounter, int removedIDs[], int& removedCount)
{
    system("CLS");
    cout << "\n\n\n";
    cout << "\t\t\t\t\t\t\t   AAAAAAA       L       L         PPPPPP   RRRRR    OOOOO   FFFFFF   III  L        EEEEE" << endl;
    cout << "\t\t\t\t\t\t\t   A     A       L       L         P    P   R    R   O   O   F         I   L        E" << endl;
    cout << "\t\t\t\t\t\t\t   AAAAAAA       L       L         PPPPPP   RRRRR    O   O   FFFFF     I   L        EEEE" << endl;
    cout << "\t\t\t\t\t\t\t   A     A       L       L         P        R   R    O   O   F         I   L        E" << endl;
    cout << "\t\t\t\t\t\t\t   A     A       L       L         P        R    R   O   O   F         I   L        E" << endl;
    cout << "\t\t\t\t\t\t\t   A     A       LLLLLLL LLLLLLL   P        R     R  OOOOO   F        III  LLLLLLL  EEEEE" << endl;

    cout << "\n\n\n\n\n\n";

    for (int i = 0; i < profileCounter; i++)
    {
        cout << "Person's ID: " << personID[i] << endl;
        cout << "Person's Name: " << person[i] << endl;
        cout << "Person's Date Of Birth: " << personDOB[i] << endl;
        cout << "Person's address: " << personAddress[i] << endl;
        if (crimecheck[i] > 0) {  // cout the no. of crimes and crimes committed by that particular individual
            cout << "Person's crimes: " << endl;
            for (int j = 0; j < crimecheck[i]; j++) {
                cout << j + 1 << ". " << personCrime[i][j] << endl;
            }
        }
        else {
            cout << "This person is a good citizen." << endl;  // if crimecheck[index] = 0, it will say they are a good citizen
        }
        cout << endl;
    }

}


void removeProfile(int personID[], string person[], string personAddress[], string personDOB[], string personCrime[][10], int crimecheck[], int& profileCounter, int removedIDs[], int& removedCount) {
    cout << "\t\t\t\t\t _____      _       _ _ _                               ___                                ______      _        _                    \n";
    cout << "\t\t\t\t\t|_   _|    | |     | | (_)                             / _ \\                               |  _  \\    | |      | |                   \n";
    cout << "\t\t\t\t\t  | | _ __ | |_ ___| | |_  __ _  ___ _ __   ___ ___   / /_\\ \\ __ _  ___ _ __   ___ _   _   | | | |__ _| |_ __ _| |__   __ _ ___  ___ \n";
    cout << "\t\t\t\t\t  | || '_ \\| __/ _ \\ | | |/ _` |/ _ | '_ \\ / __/ _ \\  |  _  |/ _` |/ _ | '_ \\ / __| | | |  | | | / _` | __/ _` | '_ \\ / _` / __|/ _ \\\n";
    cout << "\t\t\t\t\t _| || | | | ||  __| | | | (_| |  __| | | | (_|  __/  | | | | (_| |  __| | | | (__| |_| |  | |/ | (_| | || (_| | |_) | (_| \\__ |  __/\n";
    cout << "\t\t\t\t\t \\___|_| |_|\\__\\___|_|_|_|\\__, |\\___|_| |_|\\___\\___|  \\_| |_/\\__, |\\___|_| |_|\\___|\\__, |  |___/ \\__,_|\\__\\__,_|_.__/ \\__,_|___/\\___|\n";
    cout << "\t\t\t\t\t                           __/ |                              __/ |                 __/ |                                            \n";
    cout << "\t\t\t\t\t                          |___/                              |___/                 |___/                                             \n";
    cout << endl;
    cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  *" << endl;
    cout << "\t\t\t\t\t\t\t  _____  ______ __  __  ______      ________   _____  _____   ____  ______ _____ _      ______  \n";
    cout << "\t\t\t\t\t\t\t |  __ \\|  ____|  \\/  |/ __ \\ \\    / |  ____| |  __ \\|  __ \\ / __ \\|  ____|_   _| |    |  ____| \n";
    cout << "\t\t\t\t\t\t\t | |__) | |__  | \\  / | |  | \\ \\  / /| |__    | |__) | |__) | |  | | |__    | | | |    | |__    \n";
    cout << "\t\t\t\t\t\t\t |  _  /|  __| | |\\/| | |  | |\\ \\/ / |  __|   |  ___/|  _  /| |  | |  __|   | | | |    |  __|    \n";
    cout << "\t\t\t\t\t\t\t | | \\ \\| |____| |  | | |__| | \\  /  | |____  | |    | | \\ \\| |__| | |     _| |_| |____| |____  \n";
    cout << "\t\t\t\t\t\t\t |_|  \\_|______|_|  |_|\_____/   \\/   |______| |_|    |_|  \\_\\_____/|_|    |_____|______|______| \n";
    cout << "\t\t\t\t\t\t\t                                                                                                \n";
    cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  *" << endl;

    if (profileCounter == 0) {
        cout << "\t\t\t\t\t\t\tNo profiles to remove!" << endl;
        return;
    }

    cout << "\t\t\t\t\t\t\tEnter the ID of the profile you want to remove: ";
    int removeID;
    cin >> removeID;
    cin.ignore();

    int index = -1;
    for (int i = 0; i < profileCounter; i++) {
        if (personID[i] == removeID) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "\t\t\t\t\t\t\tID not found!" << endl;
        return;
    }

    removedIDs[removedCount] = personID[index];
    removedCount++;

    for (int i = index; i < profileCounter - 1; i++) {
        personID[i] = personID[i + 1];
        person[i] = person[i + 1];
        personAddress[i] = personAddress[i + 1];
        personDOB[i] = personDOB[i + 1];
        crimecheck[i] = crimecheck[i + 1];
        for (int j = 0; j < 10; j++) {
            personCrime[i][j] = personCrime[i + 1][j];
        }
    }

    profileCounter--;
    cout << "\t\t\t\t\t\t\tProfile removed successfully!" << endl;
}

// Search Function to identify profiles by ID, Name, or Crime
void identifyProfile(int personID[], string person[], string personAddress[], string personDOB[], string personCrime[][10], int crimecheck[], int profileCounter) {
    cout << "\t\t\t\t\t _____      _       _ _ _                               ___                                ______      _        _                    \n";
    cout << "\t\t\t\t\t|_   _|    | |     | | (_)                             / _ \\                               |  _  \\    | |      | |                   \n";
    cout << "\t\t\t\t\t  | | _ __ | |_ ___| | |_  __ _  ___ _ __   ___ ___   / /_\\ \\ __ _  ___ _ __   ___ _   _   | | | |__ _| |_ __ _| |__   __ _ ___  ___ \n";
    cout << "\t\t\t\t\t  | || '_ \\| __/ _ \\ | | |/ _` |/ _ | '_ \\ / __/ _ \\  |  _  |/ _` |/ _ | '_ \\ / __| | | |  | | | / _` | __/ _` | '_ \\ / _` / __|/ _ \\\n";
    cout << "\t\t\t\t\t _| || | | | ||  __| | | | (_| |  __| | | | (_|  __/  | | | | (_| |  __| | | | (__| |_| |  | |/ | (_| | || (_| | |_) | (_| \\__ |  __/\n";
    cout << "\t\t\t\t\t \\___|_| |_|\\__\\___|_|_|_|\\__, |\\___|_| |_|\\___\\___|  \\_| |_/\\__, |\\___|_| |_|\\___|\\__, |  |___/ \\__,_|\\__\\__,_|_.__/ \\__,_|___/\\___|\n";
    cout << "\t\t\t\t\t                           __/ |                              __/ |                 __/ |                                            \n";
    cout << "\t\t\t\t\t                          |___/                              |___/                 |___/                                             \n";
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "\t\t\t\t\t\t\t\t   _____   _____    ______   _   _   _______ _____   ______  __     __   \n";
    cout << "\t\t\t\t\t\t\t\t  |_   _| |  __ \\  |  ____| | \\ | | |__   __|_   _| |  ____| \\ \\   / /   \n";
    cout << "\t\t\t\t\t\t\t\t    | |   | |  | | | |__    |  \\| |    | |    | |   | |__     \\ \\_/ /    \n";
    cout << "\t\t\t\t\t\t\t\t    | |   | |  | | |  __|   | . ` |    | |    | |   |  __|     \\   /       \n";
    cout << "\t\t\t\t\t\t\t\t   _| |_  | |__| | | |____  | |\\  |    | |   _| |_  | |         | |      \n";
    cout << "\t\t\t\t\t\t\t\t  |_____| |_____/  |______| |_| \\_|    |_|  |_____| |_|         |_|      \n";
    cout << "\t\t\t\t\t\t\t\t                                                                         \n";
    cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "1. Search by ID" << endl;
    cout << "2. Search by Name" << endl;
    cout << "3. Search by Crime" << endl;
    cout << "Enter your choice (1/2/3): ";
    int choice;
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        cout << "Enter the ID to search: ";
        int searchID;
        cin >> searchID;
        cin.ignore();

        bool found = false;
        for (int i = 0; i < profileCounter; i++) {
            if (personID[i] == searchID) {
                found = true;
                cout << "Name: " << person[i] << endl;
                cout << "Address: " << personAddress[i] << endl;
                cout << "Date of Birth: " << personDOB[i] << endl;
                if (crimecheck[i] > 0) {
                    cout << "Crimes: " << endl;
                    for (int j = 0; j < crimecheck[i]; j++) {
                        cout << j + 1 << ". " << personCrime[i][j] << endl;
                    }
                }
                else {
                    cout << "This person is a good citizen." << endl;
                }
                break;
            }
        }
        if (!found) {
            cout << "Profile with this ID not found!" << endl;
        }
    }
    else if (choice == 2) {
        cout << "Enter the Name to search: ";
        string searchName;
        getline(cin, searchName);

        bool found = false;
        for (int i = 0; i < profileCounter; i++) {
            if (person[i] == searchName) {
                found = true;
                cout << "Name: " << person[i] << endl;
                cout << "Address: " << personAddress[i] << endl;
                cout << "Date of Birth: " << personDOB[i] << endl;
                if (crimecheck[i] > 0) {
                    cout << "Crimes: " << endl;
                    for (int j = 0; j < crimecheck[i]; j++) {
                        cout << j + 1 << ". " << personCrime[i][j] << endl;
                    }
                }
                else {
                    cout << "This person is a good citizen." << endl;
                }
                break;
            }
        }
        if (!found) {
            cout << "Profile with this Name not found!" << endl;
        }
    }
    else if (choice == 3) {
        cout << "Enter the Crime to search: ";
        string searchCrime;
        getline(cin, searchCrime);

        bool found = false;
        for (int i = 0; i < profileCounter; i++) {
            for (int j = 0; j < crimecheck[i]; j++) {
                if (personCrime[i][j] == searchCrime) {
                    found = true;
                    cout << "Name: " << person[i] << endl;
                    cout << "ID: " << personID[i] << endl;
                    cout << "Address: " << personAddress[i] << endl;
                    cout << "Date of Birth: " << personDOB[i] << endl;
                    cout << "Crime: " << personCrime[i][j] << endl;
                    break;
                }
            }
        }
        if (!found) {
            cout << "No profiles found with this crime!" << endl;
        }
    }
    else {
        cout << "Invalid choice! Please try again." << endl;
    }
}
void signupUser(string staff[], string staffpass[], int size, int& counter) {
    string newUsername, newPassword;

    cout << "  |  |   __|  __|  _ \\   \\ |    \\     \\  |  __| _) \n";
    cout << "  |  | \\__ \\  _|     /  .  |   _ \\   |\\/ |  _|     \n";
    cout << " \\__/  ____/ ___| _|_\\ _|\\_| _/  _\\ _|  _| ___| _) \n";
    cout << "                                                   \n";
    cin >> newUsername;
    cin.ignore();
    cout << "\n\n";
    cout << "  _ \\  \\     __|   __| \\ \\      / _ \\  _ \\  _ \\ _) \n";
    cout << "  __/ _ \\  \\__ \\ \\__ \\  \\ \\ \\  / (   |   /  |  |   \n";
    cout << " _| _/  _\\ ____/ ____/   \\_/\\_/ \\___/ _|_\\ ___/ _) \n";
    cout << "                                                  \n";
    cin >> newPassword;
    cin.ignore();

    // Check if the username already exists
    for (int i = 0; i < size; i++) {
        if (staff[i] == newUsername) {
            cout << "Account Already Exists!" << endl;
            return; // Exit if username already exists
        }
    }

    // Add the new username and password to the arrays
    staff[counter] = newUsername;
    staffpass[counter] = newPassword;
    counter++;
    cout << "User signed up successfully! Please Press L to get to the login screen. Press E to exit!" << endl;
    return;
}
void home()
{
    cout << "\t\t\t\t\t _____      _       _ _ _                               ___                                ______      _        _                    \n";
    cout << "\t\t\t\t\t|_   _|    | |     | | (_)                             / _ \\                               |  _  \\    | |      | |                   \n";
    cout << "\t\t\t\t\t  | | _ __ | |_ ___| | |_  __ _  ___ _ __   ___ ___   / /_\\ \\ __ _  ___ _ __   ___ _   _   | | | |__ _| |_ __ _| |__   __ _ ___  ___ \n";
    cout << "\t\t\t\t\t  | || '_ \\| __/ _ \\ | | |/ _` |/ _ | '_ \\ / __/ _ \\  |  _  |/ _` |/ _ | '_ \\ / __| | | |  | | | / _` | __/ _` | '_ \\ / _` / __|/ _ \\\n";
    cout << "\t\t\t\t\t _| || | | | ||  __| | | | (_| |  __| | | | (_|  __/  | | | | (_| |  __| | | | (__| |_| |  | |/ | (_| | || (_| | |_) | (_| \\__ |  __/\n";
    cout << "\t\t\t\t\t \\___|_| |_|\\__\\___|_|_|_|\\__, |\\___|_| |_|\\___\\___|  \\_| |_/\\__, |\\___|_| |_|\\___|\\__, |  |___/ \\__,_|\\__\\__,_|_.__/ \\__,_|___/\\___|\n";
    cout << "\t\t\t\t\t                           __/ |                              __/ |                 __/ |                                            \n";
    cout << "\t\t\t\t\t                          |___/                              |___/                 |___/                                             \n";
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t   _    _    ____    __  __   ______   \n";
    cout << "\t\t\t\t\t\t\t\t\t\t  | |  | |  / __ \\  |  \\/  | |  ____|  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t  | |__| | | |  | | | \\  / | | |__     \n";
    cout << "\t\t\t\t\t\t\t\t\t\t  |  __  | | |  | | | |\\/| | |  __|     \n";
    cout << "\t\t\t\t\t\t\t\t\t\t  | |  | | | |__| | | |  | | | |____   \n";
    cout << "\t\t\t\t\t\t\t\t\t\t  |_|  |_|  \\____/  |_|  |_| |______|  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t                                       \n";
    cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << endl;


    cout << "\t\t\t\t\t\t\tThis system is designed to manage and store information about criminals in a secure and efficient manner.\n";
    cout << "\t\t\t\t\t\t\tIt allows users to perform several functions related to criminal data management.\n\n";

    cout << "\t\t\t\t\t\t\tFeatures:\n";
    cout << "\t\t\t\t\t\t\t- *Search Profile*: Search for criminal profiles by ID, Name, or Crime.\n";
    cout << "\t\t\t\t\t\t\t- *Modify Profile*: Modify existing profiles by updating their Name, Crime, or other information.\n";
    cout << "\t\t\t\t\t\t\t- *Add New Profile*: Add new criminal profiles with an ID, Name, Crime, and photo.\n";
    cout << "\t\t\t\t\t\t\t- *Login*: Secure login system for staff protect sensitive data.\n";
    cout << "\t\t\t\t\t\t\t- *All Profile Details*: Check all profile details in a single click.\n";

    cout << "\n\t\t\t\t\t\t\tHow to Use:\n";
    cout << "\t\t\t\t\t\t\t1. *Login*: Enter your username and password.\n";
    cout << "\t\t\t\t\t\t\t2. *Search Profile*: Enter the ID, Name, or Crime of a criminal to search for their profile.\n";
    cout << "\t\t\t\t\t\t\t3. *Modify Profile*: Choose a profile by ID to update its details.\n";
    cout << "\t\t\t\t\t\t\t4. *Add New Profile*: Enter new profile information, including a photo path.\n";
    cout << "\t\t\t\t\t\t\t4. *View All Profiles: Press the mentioned key in main interface to see all profiles detail.\n";

    cout << "\n\t\t\t\t\t\t\tCautions:\n";
    cout << "\t\t\t\t\t\t\t- The database is currently not encrypted; please use with caution in real applications.\n";
    cout << "\t\t\t\t\t\t\t- No validation for invalid inputs (e.g., non-existent IDs, wrong paths).\n";
    cout << "\t\t\t\t\t\t\t- Passwords are stored in plain text for simplicity (not recommended for production).\n";
}
int main()
{
    const int MaxProfile = 100;
    const int MaxCrime = 10;
    int personID[MaxProfile] = { 1, 2, 3 };
    string person[MaxProfile] = { "Uzair Khan", "Umair Shah", "Yusra Yasin" };
    string personAddress[MaxProfile] = { "Lahore", "Bahria Town", "Anchorage" };
    string personDOB[MaxProfile] = { "1/12/2004", "3/6/2003", "10/11/2006" };
    string personCrime[MaxProfile][MaxCrime] = { {"Snatching"},
                                                 {"Hit and Run", "Murder"},
                                                 {"Accident", "Drug", "Cybercrime"} };
    int crimecheck[MaxProfile] = { 1, 2, 3 };
    int profileCounter = 3;

    int removedIDs[MaxProfile] = { 0 };
    int removedCount = 0;

    const int size = 10;
    string staff[size] = { "taha.iad", "aaima.iad", "absaar.iad" };
    string staffpass[size] = { "151taha", "001aaima", "070absaar" };


l1:
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\tdP                  dP                  dP    dP    oo" << endl;
    cout << "\t\t\t\t\t\t88                  88                  88    88" << endl;
    cout << "\t\t\t\t\t\t88    88d888b.    d8888P    .d8888b.    88    88    dP    .d8888b.    .d8888b.    88d888b.    .d8888b.    .d8888b." << endl;
    cout << "\t\t\t\t\t\t88    88'  `88      88      88ooood8    88    88    88    88'  `88    88ooood8    88'  `88    88'  `""    88ooood8" << endl;
    cout << "\t\t\t\t\t\t88    88    88      88      88.  ...    88    88    88    88.  .88    88.  ...    88    88    88.  ...    88.  ..." << endl;
    cout << "\t\t\t\t\t\tdP    dP    dP      dP      `88888P'    dP    dP    dP    `8888P88    `88888P'    dP    dP    `88888P'    `88888P'" << endl;
    cout << "\t\t\t\t\t\t                                                              .88" << endl;
    cout << "\t\t\t\t\t\t                                                           d8888P" << endl;
    cout << "\t\t\t\t\t\t          .d888888" << endl;
    cout << "\t\t\t\t\t\t         d8'    88" << endl;
    cout << "\t\t\t\t\t\t         88aaaaa88a    .d8888b.    .d8888b.    88d888b.    .d8888b.    dP    dP" << endl;
    cout << "\t\t\t\t\t\t         88     88     88'  `88    88ooood8    88'  `88    88'  `""      88    88" << endl;
    cout << "\t\t\t\t\t\t         88     88     88.  .88    88.  ...    88    88    88.  ...    88.  .88" << endl;
    cout << "\t\t\t\t\t\t         88     88     `8888P88    `88888P'    dP    dP    `88888P'    `8888P88" << endl;
    cout << "\t\t\t\t\t\t                            .88                                             .88" << endl;
    cout << "\t\t\t\t\t\t                        d8888P                                          d8888P" << endl;
    cout << "\t\t\t\t\t\t      888888ba                   dP                  dP" << endl;
    cout << "\t\t\t\t\t\t      88    `8b                  88                  88" << endl;
    cout << "\t\t\t\t\t\t      88     88    .d8888b.    d8888P    .d8888b.    88d888b.    .d8888b.    .d8888b.    .d8888b." << endl;
    cout << "\t\t\t\t\t\t      88     88    88'  `88      88      88'  `88    88'  `88    88'  `88    Y8ooooo.    88ooood8" << endl;
    cout << "\t\t\t\t\t\t      88    .8P    88.  .88      88      88.  .88    88.  .88    88.  .88          88    88.  ..." << endl;
    cout << "\t\t\t\t\t\t      8888888P     `88888P8      dP      `88888P8    88Y8888'    `88888P8    `88888P'    `88888P'" << endl;
    cout << "\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\033[1mPress ENTER to launch\033[0m" << endl;
    cout << "\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\033[1m�Taha Security Services. All rights reserved.�\033[0m" << endl;
    char charac;
    charac = _getch();
    //cin.ignore();
    if (charac == 13) {
        system("CLS");
    }
    do
    {
    l3:
        system("CLS");
        cout << "\n";
        cout << "\t\t\t\t\t\tdP                  dP                  dP    dP    oo" << endl;
        cout << "\t\t\t\t\t\t88                  88                  88    88" << endl;
        cout << "\t\t\t\t\t\t88    88d888b.    d8888P    .d8888b.    88    88    dP    .d8888b.    .d8888b.    88d888b.    .d8888b.    .d8888b." << endl;
        cout << "\t\t\t\t\t\t88    88'  `88      88      88ooood8    88    88    88    88'  `88    88ooood8    88'  `88    88'  `""    88ooood8" << endl;
        cout << "\t\t\t\t\t\t88    88    88      88      88.  ...    88    88    88    88.  .88    88.  ...    88    88    88.  ...    88.  ..." << endl;
        cout << "\t\t\t\t\t\tdP    dP    dP      dP      `88888P'    dP    dP    dP    `8888P88    `88888P'    dP    dP    `88888P'    `88888P'" << endl;
        cout << "\t\t\t\t\t\t                                                              .88" << endl;
        cout << "\t\t\t\t\t\t                                                           d8888P" << endl;
        cout << "\t\t\t\t\t\t          .d888888" << endl;
        cout << "\t\t\t\t\t\t         d8'    88" << endl;
        cout << "\t\t\t\t\t\t         88aaaaa88a    .d8888b.    .d8888b.    88d888b.    .d8888b.    dP    dP" << endl;
        cout << "\t\t\t\t\t\t         88     88     88'  `88    88ooood8    88'  `88    88'  `""      88    88" << endl;
        cout << "\t\t\t\t\t\t         88     88     88.  .88    88.  ...    88    88    88.  ...    88.  .88" << endl;
        cout << "\t\t\t\t\t\t         88     88     `8888P88    `88888P'    dP    dP    `88888P'    `8888P88" << endl;
        cout << "\t\t\t\t\t\t                            .88                                             .88" << endl;
        cout << "\t\t\t\t\t\t                        d8888P                                          d8888P" << endl;
        cout << "\t\t\t\t\t\t      888888ba                   dP                  dP" << endl;
        cout << "\t\t\t\t\t\t      88    `8b                  88                  88" << endl;
        cout << "\t\t\t\t\t\t      88     88    .d8888b.    d8888P    .d8888b.    88d888b.    .d8888b.    .d8888b.    .d8888b." << endl;
        cout << "\t\t\t\t\t\t      88     88    88'  `88      88      88'  `88    88'  `88    88'  `88    Y8ooooo.    88ooood8" << endl;
        cout << "\t\t\t\t\t\t      88    .8P    88.  .88      88      88.  .88    88.  .88    88.  .88          88    88.  ..." << endl;
        cout << "\t\t\t\t\t\t      8888888P     `88888P8      dP      `88888P8    88Y8888'    `88888P8    `88888P'    `88888P'" << endl;
        cout << "\n\n\n\n\n\n\n\n";

        int choice;
        cout << "\t\t\t  __        _____ _                                                   ___      _                 _                             ____     ______      _ _   \n";
        cout << "\t\t\t /_ |      / ____(_)                                                 |__ \\    | |               (_)                           |___ \\   |  ____|    (_| |  \n";
        cout << "\t\t\t  | |     | (___  _  __ _ _ __  _   _ _ __                              ) |   | |     ___   __ _ _ _ __                         __) |  | |__  __  ___| |_ \n";
        cout << "\t\t\t  | |      \\___ \\| |/ _` | '_ \\| | | | '_ \\                            / /    | |    / _ \\ / _` | | '_ \\                       |__ <   |  __| \\ \\/ | | __|\n";
        cout << "\t\t\t  | |  _   ____) | | (_| | | | | |_| | |_) |                          / /_ _  | |___| (_) | (_| | | | | |                      ___) _  | |____ >  <| | |_ \n";
        cout << "\t\t\t  |_| (_) |_____/|_|\\__, |_| |_|\__,_| .__/                           |____(_) |______\\___/ \\__, |_|_| |_|                     |____(_) |______/_/\\_|_|\\__|\n";
        cout << "\t\t\t                     __/ |           | |                                                    __/ |                                                          \n";
        cout << "\t\t\t                    |___/            |_|                                                   |___/                                                           \n";




        choice = _getch();
        if (choice == '1')
        {
            system("CLS");
            cout << "\n";
            cout << "\t\t\t\t\t\tdP                  dP                  dP    dP    oo" << endl;
            cout << "\t\t\t\t\t\t88                  88                  88    88" << endl;
            cout << "\t\t\t\t\t\t88    88d888b.    d8888P    .d8888b.    88    88    dP    .d8888b.    .d8888b.    88d888b.    .d8888b.    .d8888b." << endl;
            cout << "\t\t\t\t\t\t88    88'  `88      88      88ooood8    88    88    88    88'  `88    88ooood8    88'  `88    88'  `""    88ooood8" << endl;
            cout << "\t\t\t\t\t\t88    88    88      88      88.  ...    88    88    88    88.  .88    88.  ...    88    88    88.  ...    88.  ..." << endl;
            cout << "\t\t\t\t\t\tdP    dP    dP      dP      `88888P'    dP    dP    dP    `8888P88    `88888P'    dP    dP    `88888P'    `88888P'" << endl;
            cout << "\t\t\t\t\t\t                                                              .88" << endl;
            cout << "\t\t\t\t\t\t                                                           d8888P" << endl;
            cout << "\t\t\t\t\t\t          .d888888" << endl;
            cout << "\t\t\t\t\t\t         d8'    88" << endl;
            cout << "\t\t\t\t\t\t         88aaaaa88a    .d8888b.    .d8888b.    88d888b.    .d8888b.    dP    dP" << endl;
            cout << "\t\t\t\t\t\t         88     88     88'  `88    88ooood8    88'  `88    88'  `""      88    88" << endl;
            cout << "\t\t\t\t\t\t         88     88     88.  .88    88.  ...    88    88    88.  ...    88.  .88" << endl;
            cout << "\t\t\t\t\t\t         88     88     `8888P88    `88888P'    dP    dP    `88888P'    `8888P88" << endl;
            cout << "\t\t\t\t\t\t                            .88                                             .88" << endl;
            cout << "\t\t\t\t\t\t                        d8888P                                          d8888P" << endl;
            cout << "\t\t\t\t\t\t      888888ba                   dP                  dP" << endl;
            cout << "\t\t\t\t\t\t      88    `8b                  88                  88" << endl;
            cout << "\t\t\t\t\t\t      88     88    .d8888b.    d8888P    .d8888b.    88d888b.    .d8888b.    .d8888b.    .d8888b." << endl;
            cout << "\t\t\t\t\t\t      88     88    88'  `88      88      88'  `88    88'  `88    88'  `88    Y8ooooo.    88ooood8" << endl;
            cout << "\t\t\t\t\t\t      88    .8P    88.  .88      88      88.  .88    88.  .88    88.  .88          88    88.  ..." << endl;
            cout << "\t\t\t\t\t\t      8888888P     `88888P8      dP      `88888P8    88Y8888'    `88888P8    `88888P'    `88888P'" << endl;
            cout << "\n\n\n\n\n\n";
            signupUser(staff, staffpass, size, counter);
            cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\n\n\n\n\n\nPress E to go back.";
            char characa;
            do {
                characa = _getch();
            } while (characa != 'L' && characa != 'l' && characa != 'e' && characa != 'E');
            if (characa == 'L' || characa == 'l') {
                goto l4;
            }
            else if (characa == 'e' || characa == 'E') {
                goto l1;
            }
        }
        else if (choice == '2')
        {
        l4:
            system("CLS");
            cout << "\n";
            cout << "\t\t\t\t\t\tdP                  dP                  dP    dP    oo" << endl;
            cout << "\t\t\t\t\t\t88                  88                  88    88" << endl;
            cout << "\t\t\t\t\t\t88    88d888b.    d8888P    .d8888b.    88    88    dP    .d8888b.    .d8888b.    88d888b.    .d8888b.    .d8888b." << endl;
            cout << "\t\t\t\t\t\t88    88'  `88      88      88ooood8    88    88    88    88'  `88    88ooood8    88'  `88    88'  `""    88ooood8" << endl;
            cout << "\t\t\t\t\t\t88    88    88      88      88.  ...    88    88    88    88.  .88    88.  ...    88    88    88.  ...    88.  ..." << endl;
            cout << "\t\t\t\t\t\tdP    dP    dP      dP      `88888P'    dP    dP    dP    `8888P88    `88888P'    dP    dP    `88888P'    `88888P'" << endl;
            cout << "\t\t\t\t\t\t                                                              .88" << endl;
            cout << "\t\t\t\t\t\t                                                           d8888P" << endl;
            cout << "\t\t\t\t\t\t          .d888888" << endl;
            cout << "\t\t\t\t\t\t         d8'    88" << endl;
            cout << "\t\t\t\t\t\t         88aaaaa88a    .d8888b.    .d8888b.    88d888b.    .d8888b.    dP    dP" << endl;
            cout << "\t\t\t\t\t\t         88     88     88'  `88    88ooood8    88'  `88    88'  `""      88    88" << endl;
            cout << "\t\t\t\t\t\t         88     88     88.  .88    88.  ...    88    88    88.  ...    88.  .88" << endl;
            cout << "\t\t\t\t\t\t         88     88     `8888P88    `88888P'    dP    dP    `88888P'    `8888P88" << endl;
            cout << "\t\t\t\t\t\t                            .88                                             .88" << endl;
            cout << "\t\t\t\t\t\t                        d8888P                                          d8888P" << endl;
            cout << "\t\t\t\t\t\t      888888ba                   dP                  dP" << endl;
            cout << "\t\t\t\t\t\t      88    `8b                  88                  88" << endl;
            cout << "\t\t\t\t\t\t      88     88    .d8888b.    d8888P    .d8888b.    88d888b.    .d8888b.    .d8888b.    .d8888b." << endl;
            cout << "\t\t\t\t\t\t      88     88    88'  `88      88      88'  `88    88'  `88    88'  `88    Y8ooooo.    88ooood8" << endl;
            cout << "\t\t\t\t\t\t      88    .8P    88.  .88      88      88.  .88    88.  .88    88.  .88          88    88.  ..." << endl;
            cout << "\t\t\t\t\t\t      8888888P     `88888P8      dP      `88888P8    88Y8888'    `88888P8    `88888P'    `88888P'" << endl;
            cout << "\n\n\n\n\n\n";
            loginUser(staff, staffpass, size);
        }
        else
        {
            goto l1;
        }
        int logout = 1;
        while (logout == 1)
        {
        l2:
            system("CLS");
            cout << "\t\t\t\t\t _____      _       _ _ _                               ___                                ______      _        _                    \n";
            cout << "\t\t\t\t\t|_   _|    | |     | | (_)                             / _ \\                               |  _  \\    | |      | |                   \n";
            cout << "\t\t\t\t\t  | | _ __ | |_ ___| | |_  __ _  ___ _ __   ___ ___   / /_\\ \\ __ _  ___ _ __   ___ _   _   | | | |__ _| |_ __ _| |__   __ _ ___  ___ \n";
            cout << "\t\t\t\t\t  | || '_ \\| __/ _ \\ | | |/ _` |/ _ | '_ \\ / __/ _ \\  |  _  |/ _` |/ _ | '_ \\ / __| | | |  | | | / _` | __/ _` | '_ \\ / _` / __|/ _ \\\n";
            cout << "\t\t\t\t\t _| || | | | ||  __| | | | (_| |  __| | | | (_|  __/  | | | | (_| |  __| | | | (__| |_| |  | |/ | (_| | || (_| | |_) | (_| \\__ |  __/\n";
            cout << "\t\t\t\t\t \\___|_| |_|\\__\\___|_|_|_|\\__, |\\___|_| |_|\\___\\___|  \\_| |_/\\__, |\\___|_| |_|\\___|\\__, |  |___/ \\__,_|\\__\\__,_|_.__/ \\__,_|___/\\___|\n";
            cout << "\t\t\t\t\t                           __/ |                              __/ |                 __/ |                                            \n";
            cout << "\t\t\t\t\t                          |___/                              |___/                 |___/                                             \n";
            cout << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t*   _    _    ____    __  __   ______   *\n";
            cout << "\t\t\t\t\t\t\t\t\t\t*  | |  | |  / __ \\  |  \\/  | |  ____|  *\n";
            cout << "\t\t\t\t\t\t\t\t\t\t*  | |__| | | |  | | | \\  / | | |__     *\n";
            cout << "\t\t\t\t\t\t\t\t\t\t*  |  __  | | |  | | | |\\/| | |  __|    *                                                       PRESS H\n";
            cout << "\t\t\t\t\t\t\t\t\t\t*  | |  | | | |__| | | |  | | | |____   *\n";
            cout << "\t\t\t\t\t\t\t\t\t\t*  |_|  |_|  \\____/  |_|  |_| |______|  *\n";
            cout << "\t\t\t\t\t\t\t\t\t\t*                                       *\n";
            cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * *\n";
            cout << endl;
            cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << "\t\t\t\t\t\t\t        *   _____   _____    ______   _   _   _______ _____   ______  __     __   *\n";
            cout << "\t ____________\t\t\t\t\t\t*  |_   _| |  __ \\  |  ____| | \\ | | |__   __|_   _| |  ____| \\ \\   / /  *\n";
            cout << "\t|            |\t\t\t\t\t\t*    | |   | |  | | | |__    |  \\| |    | |    | |   | |__     \\ \\_/ /    *\n";
            cout << "\t|   PRESS P  |\t\t\t\t\t\t*    | |   | |  | | |  __|   | . ` |    | |    | |   |  __|     \\   /     *                                     PRESS I\n";
            cout << "\t| TO SEE ALL |\t\t\t\t\t\t*   _| |_  | |__| | | |____  | |\\  |    | |   _| |_  | |         | |      *\n";
            cout << "\t|____________|\t\t\t\t\t\t*  |_____| |_____/  |______| |_| \\_|    |_|  |_____| |_|         |_|      *\n";
            cout << "\t\t\t\t\t\t\t\t*                                                                         *\n";
            cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << "\t\t\t\t\t\t\t\t*            _____  _____    _____  _____   ____  ______ _____ _      ______  *\n";
            cout << "\t______________\t\t\t\t\t\t*      /\\   |  __ \\|  __ \\  |  __ \\|  __ \\ / __ \\|  ____|_   _| |    |  ____| *\n";
            cout << "\t|            |\t\t\t\t\t\t*     /  \\  | |  | | |  | | | |__) | |__) | |  | | |__    | | | |    | |__    *\n";
            cout << "\t|  PRESS L   |\t\t\t\t\t\t*    / / \ \\ | |  | | |  | | |  ___/|  _  /| |  | |  __|   | | | |    |  __|   *                                PRESS A\n";
            cout << "\t|  TO LOGOUT |\t\t\t\t\t\t*   / ____ \\| |__| | |__| | | |    | | \\ \\| |__| | |     _| |_| |____| |____  *\n";
            cout << "\t|____________|\t\t\t\t\t\t*  /_/    \\_|_____/|_____/  |_|    |_|  \\_\\\\____/|_|    |_____|______|______| *\n";
            cout << "\t\t\t\t\t\t\t\t*                                                                             *\n";
            cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  *" << endl;
            cout << "\t\t\t\t\t\t\t*  _____  ______ __  __  ______      ________   _____  _____   ____  ______ _____ _      ______  *\n";
            cout << "\t____________\t\t\t\t\t* |  __ \\|  ____|  \\/  |/ __ \\ \\    / |  ____| |  __ \\|  __ \\ / __ \\|  ____|_   _| |    |  ____| *\n";
            cout << "\t|           |\t\t\t\t\t* | |__) | |__  | \\  / | |  | \\ \\  / /| |__    | |__) | |__) | |  | | |__    | | | |    | |__    *\n";
            cout << "\t|  PRESS E  |\t\t\t\t\t* |  _  /|  __| | |\\/| | |  | |\\ \\/ / |  __|   |  ___/|  _  /| |  | |  __|   | | | |    |  __|   *                      PRESS R\n";
            cout << "\t|  TO EXIT  |\t\t\t\t\t* | | \\ \\| |____| |  | | |__| | \\  /  | |____  | |    | | \\ \\| |__| | |     _| |_| |____| |____  *\n";
            cout << "\t|___________|\t\t\t\t\t* |_|  \\_|______|_|  |_|\_____/   \\/   |______| |_|    |_|  \\_\\_____/|_|    |_____|______|______| *\n";
            cout << "\t\t\t\t\t\t\t*                                                                                                *\n";
            cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  *" << endl;
            cout << "\n\t\t\t\t\t\t[Press F for to view about.]";
            char click;
            click = _getch();
            if (click == 'H' || click == 'h')
            {
                system("CLS");
                home();
                char checkkey;
                cout << endl << endl << endl;
                cout << "\t\t\t\t\t\t\t\t\tPress ENTER to return to MAIN MENU" << endl;
                cout << "\t\t\t\t\t\t\t\t\tPress E to EXIT" << endl;
                do {
                    checkkey = _getch();
                } while (checkkey != 13 && checkkey != 'E' && checkkey != 'e' && checkkey != 'L' && checkkey != 'l');
                if (checkkey == 13)
                {
                    system("CLS");
                    goto l2;
                }
                else if (checkkey == 'E' || checkkey == 'e')
                {
                    system("CLS");
                    goto l1;
                }
            }
            else if (click == 'I' || click == 'i') {
                system("CLS");
                identifyProfile(personID, person, personAddress, personDOB, personCrime, crimecheck, profileCounter);
                cout << "\t\t\t\t\t\t\t\t\tPress ENTER to return to MAIN MENU" << endl;
                cout << "\t\t\t\t\t\t\t\t\tPress E to EXIT" << endl;
                char char2;
                do {
                    char2 = _getch();
                } while (char2 != 13 && char2 != 'e' && char2 != 'E');
                if (char2 == 13) {
                    goto l2;
                }
                else if (char2 == 'E' || char2 == 'e') {
                    goto l1;
                }
            }
            else if (click == 'A' || click == 'a') {
                system("CLS");
                addProfile(personID, person, personAddress, personDOB, personCrime, crimecheck, profileCounter, removedIDs, removedCount);
                cout << "\t\t\t\t\t\t\tPress ENTER to return to MAIN MENU" << endl;
                cout << "\t\t\t\t\t\t\tPress E to EXIT" << endl;
                char char4;
                do {
                    char4 = _getch();
                } while (char4 != 13 && char4 != 'e' && char4 != 'E');
                if (char4 == 13) {
                    goto l2;
                }
                else if (char4 == 'E' || char4 == 'e') {
                    goto l1;
                }
            }
            else if (click == 'R' || click == 'r') {
                system("CLS");
                removeProfile(personID, person, personAddress, personDOB, personCrime, crimecheck, profileCounter, removedIDs, removedCount);
                cout << "\t\t\t\t\t\t\tPress ENTER to return to MAIN MENU" << endl;
                cout << "\t\t\t\t\t\t\tPress E to EXIT" << endl;
                char char3;
                do {
                    char3 = _getch();
                } while (char3 != 13 && char3 != 'e' && char3 != 'E');
                if (char3 == 13) {
                    goto l2;
                }
                else if (char3 == 'E' || char3 == 'e') {
                    goto l1;
                }
            }
            else if (click == 'e' || click == 'E') {
                goto l1;
            }
            else if (click == 'l' || click == 'L') {
                goto l3;
            }
            else if (click == 'F' || click == 'f') {
                system("CLS");
                string filename = "file.txt";

                // Pre-store text in the file
                string preStoredText = "This is our intelligence agency database."
                    "\nGroup members are:"
                    "\n1. Muhammad Taha Irfan           01-134242-151"
                    "\n2. Aaima Bint-e-Basit            01-134242-001"
                    "\n1. Muhammad Absaar Munawwar      01-134242-070";
                storedText(filename, preStoredText);

                // User actions
                char option;
                cout << "\nChoose an option:\n";
                cout << "1. Read text from file\n";
                cout << "2. Exit\n";
                cout << "Enter your choice (1 or 2): ";
                cin >> option;


                if (option == '1') {
                    readText(filename);
                }
                else if (option == '2') {
                    cout << "Exiting program. Goodbye!" << endl;
                }
                else {
                    cout << "Invalid option. Exiting program." << endl;
                }
                cout << "\n\n\n\n\Press Enter to get to home page." << endl;
                cout << "\n\n\n\n\Press E to exit." << endl;
                char key;
                do {
                    key = _getch();
                } while (key != 13 && key != 'e' && key != 'E');
                if (key == 13) {
                    goto l2;
                }
                else if (key == 'E' || key == 'e') {
                    goto l1;
                }
            }
            else if (click == 'P' || click == 'p') {
                system("CLS");
                showAll(personID, person, personAddress, personDOB, personCrime, crimecheck, profileCounter, removedIDs, removedCount);
                cout << "\t\t\t\t\t\t\t\t\tPress ENTER to return to MAIN MENU" << endl;
                cout << "\t\t\t\t\t\t\t\t\tPress E to EXIT" << endl;
                char char1;
                do {
                    char1 = _getch();
                } while (char1 != 13 && char1 != 'e' && char1 != 'E');
                if (char1 == 13) {
                    goto l2;
                }
                else if (char1 == 'E' || char1 == 'e') {
                    goto l1;
                }
            }
           


        } while (true);

        return 0;
    } while (true);
}



