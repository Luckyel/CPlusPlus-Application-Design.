#include <iostream>
using namespace std;

struct Indianfood {
    string name;
    int prepTime;
};

int main() {
    
    Indianfood foods[5] = {
        {"Balu shahi", 45}, 
        {"Boondi", 80}, 
        {"Gajar ka halwa", 15}, 
        {"Ghevar", 15}, 
        {"Gulab jamun", 15}
    };

    int *prepTimPtr = &foods[0].prepTime;

    for (int i = 0; i < 5; i++) {
        cout << foods[i].name << ": " << foods[i].prepTime << endl;
    }

    cout << "First prep_time through pointer:  " << *prepTimPtr << endl;  // Fixed the typo here
    return 0;
}




