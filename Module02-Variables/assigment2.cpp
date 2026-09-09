#include <iostream>
#include <string>
using namespace std;

void addRecord() {
    cout << "Request a Yard Lift." << endl;
}

void viewRecords() {
    cout << "View My Lift Request." << endl;
}

void searchRecords() {
    cout << "Search Services & Pricing." << endl;
}

void deleteRecords() {
    cout << "Manage My Profilg." << endl;
}

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n===== YARD-LIFT.COM MAIN MENU ====="<< endl;
        cout << "1. Request a Yard Lift" << endl;
        cout << "2. View My Lift Request" << endl;
        cout << "3. Search Services & Pricing" << endl;
        cout << "4. Manage My Profile" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                deleteRecords();
                break;
            case 4:
                cout << "Thank you for using Yard-Lift.com! Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}  
