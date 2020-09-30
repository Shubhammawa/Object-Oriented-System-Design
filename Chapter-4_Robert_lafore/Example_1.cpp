#include <iostream>

using namespace std;

struct part{            // declare a structure
    int model_number;
    int part_number;
    float cost;
};

int main(){
    part part1;         // define a structure variable

    part1.model_number = 6244;
    part1.part_number = 373;
    part1.cost = 217.55F;

    cout << "Model: " << part1.model_number;
    cout << "\nPart: " << part1.part_number;
    cout << "\nCosts: " << part1.cost << endl;
    
    part part2 = {3425, 352, 534.43};

    cout << "Model: " << part2.model_number;
    cout << "\nPart: " << part2.part_number;
    cout << "\nCosts: " << part2.cost << endl;

    part part3;
    part3 = part1;
    
    cout << "Model: " << part3.model_number;
    cout << "\nPart: " << part3.part_number;
    cout << "\nCosts: " << part3.cost << endl;
    
    return 0;
}