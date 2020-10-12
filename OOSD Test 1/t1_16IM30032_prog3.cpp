// Ordered partitions

#include <iostream>

using namespace std;

int partition(int num1, int num2){
    if(num1 == 1)
        return 1;
    else
        partition(num1, num1 - 1);
    
}

int main(){
    long int num;
    cout << "Enter a positive integer"; cin >> num;


}