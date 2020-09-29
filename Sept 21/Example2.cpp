#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;


int main(){
	int arr1[5] = {6,7,3,8,4};
	int arr2[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

	char week[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
						"Thursday", "Friday", "Saturday"};

	int i = 0;
	while(i<7){
		cout << week[i] << endl;
		i++;
	}

	return 0;
}
