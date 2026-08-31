#include <iostream>
using namespace std;

int main() {
    int n;
    int j = 0;
    int sum = 0;

    cout<<"Enter a number: "<< endl; // Prompts the user to enter a number
    cin >> n;

    while(n > 0){
        j = n % 10;
        sum += j;
        n = n / 10;
    }
    cout << "Sum of digits: " << sum << endl;
}