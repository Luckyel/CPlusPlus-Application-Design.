#ifndef JOBMANAGER_H
#define JOBMANAGER_H

#include <string>
#include "Job.h"

class JobManager {
private:
    Job jobs[10];
    int count;

public:
    JobManager();
    void addJob(Job job);
    void displayAll() const;
    int binarySearch(std::string customer) const;
    void saveToFile(std::string filename) const;
    void loadFromFile(std::string filename);
    int getCount() const;
    Job* getJobPointer(int index);
};

#endif
