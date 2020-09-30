// Overloading functions
#include <iostream>

using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main(){
    repchar();
    repchar('=');
    repchar('+', 30);
}

// repchar()
// displays 45 asterisks

void repchar(){
    for(int i = 0; i<45; i++){
        cout << '*';
    }
    cout << endl;
}

// repchar(char)
// displays 45 characters of given character

void repchar(char ch){
    for(int i = 0; i<45; i++){
        cout << ch;
    }
    cout << endl;
}

// repchar(char, int)
// displays given character, specified number of times

void repchar(char ch, int num){
    for(int i = 0; i<num; i++){
        cout << ch;
    }
    cout << endl;
}