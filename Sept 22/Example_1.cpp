#include <iostream>

using namespace std;

class Sample{
    private:
    int num;

    public:
    Sample(): num(0){   // constructor function

    }
    void aug_num(){ // increment function
        num++;
    }

    void show_num(){    // display function
        cout << num << endl;
    }
};

int main(){
    Sample s1, s2;
    cout << "First number = ";
    s1.show_num();

    cout << "Second number = ";
    s2.show_num();


    return 0;
}
