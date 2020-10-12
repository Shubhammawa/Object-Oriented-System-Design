// Cube root of positive integer

#include <iostream>

using namespace std;

double difference(double num1, double num2){
    if(num1 > (num2*num2*num2))
        return (num1 - (num2*num2*num2));
    else
        return ((num2*num2*num2) - num1);
}

int main(){
    double num;
    cout << "Enter the number: "; cin >> num;

    double low = 0;
    double high;
    high = num;
    double cube_root;
    double precision = 0.00001;
    double error;

    int flag = 1;
    while(flag == 1){
        cube_root = (low + high)/2;
        
        error = difference(num, cube_root);

        if(error <= precision){
            cout << "Cube root: " << cube_root << endl;
            flag = 0;
        }

        if((cube_root*cube_root*cube_root) > num){
            high = cube_root;
        }

        else{
            low = cube_root;
        }

    
    }
    
    return 0;
}