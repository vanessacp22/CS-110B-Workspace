
/* Program: coupons.cpp
Written by: Vanessa Perez
Date: 08/31/26

Description:
This program calculates the number of candy bars and gumballs
 a user can redeem based on the number of coupons they have.
It also calculates any remaining coupons after the redemption.

*/
#include <iostream>
using namespace std;


int main() {
    int numOfCoupons; // Integer to store the number of cupons
    int couponsRemaining; // Integer to store the remaining cupons
    int candyBarCount = 0; // Integer to store the number of candy bars
    int gumballCount = 0; // Integer to store the number of gumballs

    // Logic
    cout <<"Enter the number of coupons you have: " << endl; // Prompts the user to enter the number of coupons 
    cin >> numOfCoupons; // Accepts user input and stores in an integer var

    candyBarCount = numOfCoupons / 10; // Calculates the num of candy bars
    couponsRemaining = numOfCoupons % 10; // Calculates the remaining coupons after candy bars
    gumballCount = couponsRemaining / 3; // Calculates the num of gumballs
    couponsRemaining = couponsRemaining % 3; // Calculates the remaining number of coupons post gumball purchase

    // Output
    cout<< "Number of candy bars: " << candyBarCount << "\nNumber of gumballs: " << gumballCount << "\nCoupons remaining: " << couponsRemaining << endl; 
    // Displays the number of candy bars, gumballs, and remaining coupons


    return 0;

}
/* Example Output:
Enter the number of coupons you have: 
73
Number of candy bars: 7
Number of gumballs: 1
Coupons remaining: 0
*/