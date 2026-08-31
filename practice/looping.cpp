#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int j = 0;
    int k = 0;
    int total = 0;
    int evenSum = 0;
    int oddSum = 0;

    cout<<"Enter a number: "<< endl; //Prompts the user to enter a number
    cin >> n;

    for(int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
        j++;
        evenSum += i;
        }
        else {
            k++;
            oddSum += i;
        }
        
    }
    total = j + k;
    cout<<"The number of even numbers between 0 and n is: " << j << endl; // Displays the count of even numbers between 0 and n
    cout<<"The number of odd numbers between 0 and n is: " << k << endl; // Displays number of odd numbers between 0 and n
    cout<<"The sum of even numbers between 0 and n is: " << evenSum << endl; // Displays the sum of even numbers between 0 and n
    cout<<"The sum of odd numbers between 0 and n is: " << oddSum << endl; // Displays the sum of odd numbers between 0 and n
    cout<<"The total of numbers between 0 and n is: " << total << endl; // Displays the total count of numbers between 0 and n
    cout<<"The sum of the even numbers is: " << evenSum << endl; // Displays the sum of even numbers between 0 and n
    cout<<"The sum of the odd numbers is: " << oddSum << endl; // Displays the sum of odd numbers between 0 and n

    return 0;

}