#include <iostream>
#include <string>
#include "Job.h"
#include "JobManager.h"

int getPositiveNumber() {
    
    

    int value;

    while (true) {
        std::cout << "Enter a positive number: ";
        if (std::cin >> value && value > 0) {
            return value;
        }
        std::cout << "Invalid input. Try again.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
}
double getPositiveDouble() {
    double value;

    while (true) {
        std::cout << "Enter a positive number: ";
        if (std::cin >> value && value > 0) {
            return value;
        }
        std::cout << "Invalid input. Try again.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
}

std::string getNonEmptyName() {
    std::string name;

    while (true) {
        std::cout << "Enter customer name: ";
        std::getline(std::cin, name);
        if (!name.empty()) {
            return name;
        }
        std::cout << "Name cannot be empty. Please type a name.\n";
    }
}


int main()
{
    std::cout << "YardLift Job Manager" << std::endl;
    std::cout << std::endl;

    std::cout << "Data sizes:" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "string: " << sizeof(std::string) << " bytes" << std::endl;
    std::cout << "Job: " << sizeof(Job) << " bytes" << std::endl;
    std::cout << std::endl;

    JobManager manager;

    manager.addJob(Job("Alem", 2, 30.0));
    manager.addJob(Job("Mikel", 3, 25.0));


    std::cout << "All jobs:" << std::endl;
    manager.displayAll();
std::cout << "\nAdd a new job:\n";
std::string newName = getNonEmptyName();

int newHours = getPositiveNumber();
double newRate = getPositiveDouble();

manager.addJob(Job(newName, newHours, newRate));
std::cout << "\nAll jobs after adding:\n";
manager.displayAll();


    Job* first = manager.getJobPointer(0);
    if (first != nullptr) {
  std::cout << "First job, by pointer:" << std::endl;
 first->display();
  std::cout << std::endl;
    }

    int found = manager.binarySearch("Alem");
    if (found != -1) {
   
    } else {
   std::cout << "Alem not found." << std::endl;
    }
    std::cout << std::endl;

  manager.saveToFile("jobs.txt");
    std::cout << "Saved to jobs.txt" << std::endl;

    JobManager loaded;
    loaded.loadFromFile("jobs.txt");
    std::cout << "Loaded from jobs.txt:" << std::endl;
    loaded.displayAll();

    return 0;
}


