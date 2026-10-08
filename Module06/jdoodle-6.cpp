#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string customerName;
    int customerId;
    double servicePrice;

public:
    // Constructor
   Customer(string name, int id, double price)  {
       customerName = name;
       customerId = id;
       servicePrice = price;
    }

    // Member function
    void displayCustomer() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Curstomer ID: " << customerId << endl;
        cout << "servicePrice: " << servicePrice << endl;
    }

    // Getter
    string getCustomerName() {
        return customerName;
    }

    // Setter
    void setServicePrice(double newPrice) {
        servicePrice = newPrice;
    }
};

int main() {
   Customer Customer1("Alem", 101, 92.5);
   Customer Customer2("Sarah", 102, 87.0);

   Customer1.displayCustomer();
    cout << endl;
   Customer2.displayCustomer();

    return 0;
}
