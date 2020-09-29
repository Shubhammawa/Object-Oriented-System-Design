#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Student{
private:
	char name[30];
	float cgpa;
public:
	void setdata(char nm[], int rl, float cg){
		strcpy(name, nm);
		roll = rl;
		cgpa = cg;
	}

	void showdata(){
		cout << "Student's name is " << name << endl;
		cout << "Student's roll no is " << roll << endl;
		cout << "Student's cgpa is " << cgpa << endl;
	}
}

int main(){

	Student stu1, stu2;

	stu1.setdata("Rahul", 45, 8.9);
	stu2.setdata("Abhishek", 4, 9.1);

	cout << "Data for first student " << endl;
	stu1.showdata();

	cout << "Data for second student " << endl;
	stu2.showdata();

	return 0;
}