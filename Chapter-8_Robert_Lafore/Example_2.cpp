// Operator Overloading

// Example 2: Unary operator
// Change return type of overloaded operator
#include <iostream>

using namespace std;

class Counter{
    private:
    unsigned int count;

    public:
    Counter() : count(0){
    }
    unsigned int get_count(){
        return count;
    }

    Counter operator ++(){
        ++count;
        Counter temp;
        temp.count = count;
        return temp;
    }
};

int main(){
    Counter c1, c2;

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    ++c1;
    c2 = ++c1;


    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count() << endl;

    return 0;

}