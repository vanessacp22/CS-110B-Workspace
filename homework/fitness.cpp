#include <iostream>
#include <iomanip>

using namespace std;

int main () {

int choice;

double calories, duration;

std:: cout << "Fitness Activity Tracker\n Menu\n 1. Jogging\n 2. Cycling\n 3. Swimming\n 4. Quit\n";
std:: cout << "Enter your choice: (1-4): ";

std:: cin >> choice;

switch(choice){

case 1:

 std:: cout << "Enter the amount of time spent jogging: \n";

std:: cin>> duration;

 calories = 0.75 * duration;

std:: cout<< "Calories burned: " << std::fixed << std::setprecision(2) << calories;

break;

case 2:

std:: cout << "Enter the amount of time spent Cycling: \n";

std:: cin >> duration;

calories = 0.5 * duration;

std:: cout<< "Calories burned: " << std::fixed << std::setprecision(2) << calories;

break;

case 3:

std:: cout << "Enter the time spent Swimming in minutes: ";

std:: cin >> duration;

calories = 0.8 * duration;

std:: cout<< "Calories burned: " << std::fixed << std::setprecision(2) << calories;

break;

case 4:

break;

default:

std::cout << "\nProgram ending.\n Valid menu choices are 1, 2, 3, or 4. \n Please run the program again and select a valid menu choice.\n";

}

return 0;

}