#ifndef JOB_H
#define JOB_H

#include <string>

class Job {
private:
    std::string customer;
    int hours;
    double rate;

public:
    Job();
    Job(std::string customer, int hours, double rate);

    std::string getCustomer() const;
    int getHours() const;
    double getRate() const;
    double calculateTotal() const;
    void display() const;
};

#endif
