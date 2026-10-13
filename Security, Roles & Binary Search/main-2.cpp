#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct YardRecord {
    int id;
    string clientName;
    string service;
};

class User {
protected: 
    string username;
    string role;
public: 
    User(string name, string r) : username(name), role(r) {}

    string getRole() { return role; }
    string getName() { return username; }

    void viewRecords(const vector<YardRecord>& records) {
   cout << "\n--- Records ---\n";
  for (size_t i = 0; i < records.size(); i++) {
   cout << records[i].id << " | " << records[i].clientName
   << " | " << records[i].service << endl;
   }
    }
};

class RegularUser : public User {
public:
    RegularUser(string name) : User(name, "Regular User") {}
};

class Admin : public User {
public: 
    Admin(string name) : User(name, "Admin") {}

    void addRecord(vector<YardRecord>& records, YardRecord newRec) {
   records.push_back(newRec);
 sort(records.begin(), records.end(), [](YardRecord a, YardRecord b){
  return a.id < b.id;
  });
    }

    void deleteRecord(vector<YardRecord>& records, int targetId) {
   for (size_t i = 0; i < records.size(); i++) {
   if (records[i].id == targetId) {
   records.erase(records.begin() + i);
   return;
   }
       }
    }
};

int binarySearchRecords(const vector<YardRecord>& records, int targetId) {
    int left = 0;
    int right = records.size() - 1;

    while (left <= right) {
  int mid = left + (right - left) / 2;

  if (records[mid].id == targetId) return mid;
   if (records[mid].id < targetId) left = mid + 1;
   else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<YardRecord> records = {
    {101, "Henok", "Mowing"}, 
   {205, "Selam", "Hauling"}, 
  {310, "Mikel", "Clean-up"}
    };

    RegularUser standardUser("Alem");
    cout << "User: " << standardUser.getName() << " | Role: " << standardUser.getRole() << endl;
    standardUser.viewRecords(records);

    cout << "\n-------------------------------------\n";

    Admin admin("Alem");
    cout << "User: " << admin.getName() << " | Role: " << admin.getRole() << endl;
    
    admin.addRecord(records, {250, "David", "test"});
    admin.deleteRecord(records, 205);
    admin.viewRecords(records);
    
    int searchId = 250;
    int index = binarySearchRecords(records, searchId);
    
    if (index != -1) {
   cout << "\nFound ID " << searchId << " at index " << index << endl;
   cout << "Client: " << records[index].clientName << endl;
    } else {
   cout << "\nRecord ID " << searchId << " not found." << endl;
    }

    return 0;  
}




