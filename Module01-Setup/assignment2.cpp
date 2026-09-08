#include <iostream>
#include <string>
using namespace std;

void addRecord() { cout << "-> Add Lift Request called\n"; }
void viewRecords() { cout << "-> View Requests called\n"; }
void searchRecords() { cout << "-> Search Services called\n"; }
void deleteRecord() { cout << "-> Delete Request called\n"; }

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n===== YARD-LIFT.COM MAIN MENU =====\n";
        cout << "1. Request a Yard Lift\n";
        cout << "2. View My Lift Requests\n";
        cout << "3. Search Services & Pricing\n";
        cout << "4. Manage My Profile\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Simple validation that JDoodle LIKES - no <limits> needed
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice! Choose 1-5.\n";
            continue;
        }

        switch (choice) {
            case 1: addRecord(); break;
            case 2: viewRecords(); break;
            case 3: searchRecords(); break;
            case 4: deleteRecord(); break;
            case 5:
                cout << "Thank you for using Yard-Lift.com! Goodbye!\n";
                running = false;
                break;
        }
    }
    return 0;
}