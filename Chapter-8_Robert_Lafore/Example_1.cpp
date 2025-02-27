// Operator Overloading

// Example 1: Unary operator
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

    void operator ++(){
        ++count;
    }
};

int main(){
    Counter c1, c2;

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    ++c1;
    ++c2;
    ++c1;

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count() << endl;

    // c2++;   // should raise error as postfix operator ++ has not been overloaded

    // cout <<"c2 = " << c2 << endl;
    return 0;

}