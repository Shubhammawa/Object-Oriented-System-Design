#include <iostream>
#include <time.h>

using namespace std;

int main(){
	char arr1 [5] = {'h', 'e', 'l', 'l', 'o'};
	int i = 0;
	int arr2 [5];
	while(i<5){
		arr2[i] = rand()%100;
		i++;
	}
	i = 0;
	while(i<5){
		cout << arr1[i] << " ";
		i++;
	}
	i = 0;
	while(i<5){
		cout << arr2[i] << " ";
		i++;
	}
	cout << endl;

	return 0;
}