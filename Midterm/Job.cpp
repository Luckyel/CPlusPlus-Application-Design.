#include <iostream>
#include "Job.h"

Job::Job() : customer(""), hours(0), rate(0.0) {}

Job::Job(std::string c, int h, double r)
    : customer(c), hours(h), rate(r) {}

std::string Job::getCustomer() const { return customer; }
int Job::getHours() const { return hours; }
double Job::getRate() const { return rate; }

double Job::calculateTotal() const {
    return hours * rate;
}

void Job::display() const {
    std::cout << "Customer: " << customer << std::endl;
    std::cout << "Hours: " << hours << std::endl;
    std::cout << "Rate: $" << rate << std::endl;
    std::cout << "Total: $" << calculateTotal() << std::endl;
}
