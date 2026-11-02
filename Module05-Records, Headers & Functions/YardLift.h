#ifndef YARDLIFT_H
#define YARDLIFT_H

#include <string>


struct Job {
    std::string customer;
    int hours;
    double rate;
};

void showMessage();
Job addJob(std::string customer, int hours, double rate);
void displayJob(Job job);
double calculateTotal(Job job);

#endif
