#include <iostream>
using namespace std;

int main() {
    int n;
    int k = 0;
    int reversed = 0;

    cout<<"Enter a number: "<< endl; //Prompts the user to enter a number
    cin >> n;

    while(n > 0) {
        k = n % 10;

        reversed = reversed * 10 + k;

        n = n / 10;
       

    }
    cout<<"The reversed number is: " << reversed << endl; // Displays the reversed number
    return 0;
}