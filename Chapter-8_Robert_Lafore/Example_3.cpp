// Operator Overloading
// Binary operator

#include <iostream>

using namespace std;

class Distance{
    private:
    int feet;
    float inches;

    public:
    Distance(): feet(0), inches(0.0) // No argument constructor
    {}

    Distance(int ft, float in):feet(ft), inches(in)  // Two argument constructor
    {}

    void getdist(){
        cout << "Enter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }

    void showdist(){
        cout << feet << "\' " << inches <<"\"" << endl;
    }

    Distance operator + (Distance d2){
        int f = feet + d2.feet;
        float i = inches + d2.inches;

        if(i>=12.0){
            f++;
            i -= 12;
        }

        return Distance(f,i);
    }
};

int main(){
    Distance dist1, dist3, dist4;
    dist1.getdist();

    Distance dist2(5, 7.0);

    dist3 = dist1 + dist2;

    dist4 = dist1 + dist2 + dist3;

    cout << "Dist1 = "; dist1.showdist();
    cout << "Dist2 = "; dist2.showdist();
    cout << "Dist3 = "; dist3.showdist();
    cout << "Dist4 = "; dist4.showdist();

    return 0;
}