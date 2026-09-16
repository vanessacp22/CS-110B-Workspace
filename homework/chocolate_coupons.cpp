
/* Program: chocolate.cpp
Written by: Vanessa Perez
Date: 09/15/26
Description:
This program calculates the total number of chocolate bars and leftover coupons.
*/

#include <iostream>
using namespace std;



int main() {
int freeBars, totalBars, coupons, dollars; // Declare variables for free bars, total bars, coupons, and dollars


// Prompts the user to enter the amount of money available + accepts user input
std::cout << "Enter the amount of money available:\n";
std::cin >> dollars;
// Calculates the total number of bars and coupons
totalBars = dollars;
coupons = dollars;

// While loop to calculate the number of free bars and update the total bars and coupons
    while (coupons >= 7)
{
    freeBars = coupons / 7;
    totalBars += freeBars;
    coupons = (coupons % 7) + freeBars;
}

// Outputs the total number of chocolate bars and leftover coupons 
  cout << "Total chocolate bars: " << totalBars << endl;
 cout << "Leftover coupons: " << coupons << endl;


return 0;



}

/*
Sample Output:
Enter the amount of money available:
10
Total chocolate bars: 12
Leftover coupons: 5
*/