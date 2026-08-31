#include <iostream>
using namespace std;

int main() {
    int n;
    int digit;
    int largestDigit = 0;

    cout << "Enter a number: " << endl; // Prompts the user to enter a number
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit > largestDigit) {
            largestDigit = digit;
        }
        n = n / 10;
    }
    cout << "Largest digit: " << largestDigit << endl;
}