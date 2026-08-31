#include <iostream>
#include <string>
using namespace std;

int main () {
    int n = 0;
    int k = 0;


    cout<<"Enter a whole number: "<< endl; //Prompt user to enter a number
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout<< n << " x " << i << " = " << n * i << endl;
    }

    

    
}