#include <iostream>
#include <fstream>
#include "JobManager.h"

JobManager::JobManager() : count(0) {}

void JobManager::addJob(Job job) {
    if (count < 10) {
 jobs[count] = job;
  count++;
    }
}

void JobManager::displayAll() const {
    for (int i = 0; i < count; i++) {
   jobs[i].display();
   std::cout << std::endl;
    }
}

int JobManager::binarySearch(std::string customer) const {
    int low = 0;
    int high = count - 1;
    while (low <= high) {
   int mid = (low + high) / 2;
  if (jobs[mid].getCustomer() == customer) {
   return mid;
  } else if (jobs[mid].getCustomer() < customer) {
   low = mid + 1;
  } else {
   high = mid - 1;
  }
    }
    return -1;
}

void JobManager::saveToFile(std::string filename) const {
    std::ofstream out(filename);
    if (out) {
  for (int i = 0; i < count; i++) {
   out << jobs[i].getCustomer() << " "
  << jobs[i].getHours() << " "
  << jobs[i].getRate() << std::endl;
   }
    }
}

void JobManager::loadFromFile(std::string filename) {
    std::ifstream in(filename);
    std::string customer;
    int hours;
    double rate;
    while (in >> customer >> hours >> rate) {
  addJob(Job(customer, hours, rate));
    }
}

int JobManager::getCount() const {
    return count;
}

Job* JobManager::getJobPointer(int index) {
    if (index >= 0 && index < count) {
   return &jobs[index];
    }
    return nullptr;
}
