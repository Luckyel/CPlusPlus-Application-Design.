#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[] = {"Alem",  "John",  "Sara",  "David",  "Maria"};
    int age[] = {40,  35,  52,  29,  44};
    double price[] = {20.99,  35.50,  45.00,  25.75,  50.25};
    float areaSize[] = {90.5f,  120.0f,  150.5f,  80.0f,  200.0f};
    char toolType[] = {'H',  'M', 'H', 'M', 'H'};  // H = By hand, M = By machine 
    bool registered[] = {true,  true,  false,  true,  true};

    // Display records
    for (int i = 0; i < 5; i++) {
        cout << "Customer:  " << name[i] << endl;
        cout << "Age:  " << age[i] << endl;
        cout << "Price:  $" << price[i] << endl;
        cout << "Yard Size:  " << areaSize[i] << endl;
        cout << "Tool Type:  " << toolType[i] << endl;  
        cout << "Registered:  " << registered[i] << endl;
        cout << "-------------------" << endl;
    }

    double *pricePointer = &price[0];

    cout << "First customer's price using pointer:  $"
         << *pricePointer << endl;

    return 0;
}
