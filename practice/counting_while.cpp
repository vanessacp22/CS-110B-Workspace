#include <iostream>
using namespace std;

int main() {
    int n;
    int digitCount = 0;
    
    cout << "Enter a number: " << endl; // Prompts the user to enter a number
    cin >> n;

    while(n > 0){
        n = n / 10;
        digitCount++;
    }

    cout << "The number of digits in the number is: " << digitCount << endl; // Displays the digit count
    return 0;

    
    
}
