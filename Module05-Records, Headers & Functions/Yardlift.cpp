#include <iostream>
#include "YardLift.h"

void showMessage() {
    std::cout << "Hello from YardLift!" << std::endl;
}

// add record for job
Job addJob(std::string customer, int hours, double rate) {
    Job job;
    job.customer = customer;
    job.hours = hours;
    job.rate = rate;
    return job;
}

// show job
void displayJob(Job job) {
    std::cout << "Customer: " << job.customer << std::endl;
    std::cout << "Hours: " << job.hours << std::endl;
    std::cout << "Rate: $" << job.rate << std::endl;
}

// total calculet hours and rate
double calculateTotal(Job job) {
    return job.hours * job.rate;
}
