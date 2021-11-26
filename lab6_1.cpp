#include<iostream>
using namespace std;

int main(){
    int input,even = 0,odd = 0;
    while(true){
        cout << "Enter an integer: ";
        cin >> input;
        if(input == 0) break;
        if(input%2 == 0) even++;
        if(input%2 == 1) odd++;
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}