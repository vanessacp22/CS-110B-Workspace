#include <iostream>
using namespace std;

int main() {
    int currentDigit; // Integer to store the current digit being checked
    long long value; // Integer to store value entered by user
    int counter = 0; // Counter to keep track of how many times the digit was used
    int searchDigit; // Integer used to store the digit we are searching for

    cout<< "Enter a digit: "<<endl; // Prompts user to enter a digit
    cin >> value; // Accepts the user input + stores

    cout << "Enter a digit to search for: "<<endl; // Prompts user to enter a digit to search for
    cin >> searchDigit; // Accepts user input +
    while(value > 0) {
        currentDigit = value % 10; // Gets the last digit of the value
        if(currentDigit == searchDigit) {
            counter++; // Increments counter if the current digit matches the query
        }
        value = value / 10; // Removes last digit
    }

    cout << "The digit " << searchDigit << " appears " << counter << " times in the number." << endl; // Displays the results
return 0;
}