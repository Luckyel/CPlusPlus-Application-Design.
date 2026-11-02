#include <iostream>
#include "YardLift.h"

int main() {
    showMessage();
    std::cout << std::endl;

    Job job1 = addJob("Alem", 3, 25.0);
    Job job2 = addJob("Mikel", 2, 30.0);

    displayJob(job1);
    std::cout << "Total: $" << calculateTotal(job1) << std::endl;
    std::cout << std::endl;

    displayJob(job2);
    std::cout << "Total: $" << calculateTotal(job2) << std::endl;

    return 0;
}
