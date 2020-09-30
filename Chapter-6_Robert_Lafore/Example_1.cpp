// OOP_1

#include <iostream>

using namespace std;

class smallobj{             // define a class
    private:
    int somedata;           // class data

    public:
    void setdata(int d){    // member function to set data
        somedata = d;
    }

    void showdata(){        // member function to show data
        cout << "Data is: " << somedata << endl;
    }
};

int main(){
    smallobj s1, s2;        // create 2 objects of the class smallobj

    s1.setdata(35);         // call member function setdata
    s2.setdata(76);         // to set data

    s1.showdata();          // call member function showdata to
    s2.showdata();          // show data
    return 0;
}