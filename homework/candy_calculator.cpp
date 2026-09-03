/* Program: candy_calculator.cpp
Written by: Vanessa Perez
Date: 09/03/26
Description:
This program calculates the number of 230-calorie candy
bars a person can eat each day to maintain their weight based 
on their age, height, weight, gender, and activity level.

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;


int main () {
int age; // age of the user in years
double height, weight, bmr, candyBars; // height in inches, weight in pounds, bmr in calories, candyBars in number of candy bars
string activityLevel, gender; // activity level of the user, gender
char maleFem; // gender of the user



std::cout << "This program will calculate the number of 230-calorie candy bars you can eat each day to maintain your weight.\n";

    std::cout << "Enter your age in years: "; // prompt user for age
    std::cin >> age; // Store user input for age

    std::cout << "What is your height in inches?: "; // prompt user for height
    std::cin >> height; // Store user input for height

    std::cout << "What is your weight in pounds?: "; // prompt user for weight
    std::cin >> weight; // Store user input for weight

    std::cout << "Enter 'M' for male or 'F' for female: "; // prompt user for gender
    std::cin >> maleFem; // Store user input for gender
    maleFem = toupper(maleFem); // Convert input to uppercase for consistency and to avoid case sensitivity issues



    while (maleFem != 'M' && maleFem != 'F') {
        std::cout << "Invalid gender input. Please enter 'M' for male or 'F' for female.\n"; // Prompt user for valid gender input
        std::cout << "Enter 'M' for male or 'F' for female: "; 
        std::cin >> maleFem;
        maleFem = toupper(maleFem);
    }

    if (maleFem == 'M') {
        gender = "male"; // Store gender as male
        bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age); // Calculate BMR for male using the formula
    } else if (maleFem == 'F') {
        gender = "female"; // Store gender as female
        bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age); // Calculate BMR for female using the formula
    }
    std::cout << "Enter your activity level\n A) Sedentary (little or no exercise)\n B) Somewhat active (light exercise/sports 1-3 days/week)\n C) Active (moderate exercise/sports 3-5 days/week)\n D) Highly active (hard exercise/sports 6-7 days a week): "; // Prompt user for activity level
    std::cin >> activityLevel;
    activityLevel[0] = toupper(activityLevel[0]); // Convert input to uppercase for consistency and to avoid case sensitivity issues


    // Validate activity level input
    while (activityLevel != "A" && activityLevel != "B" && activityLevel != "C" && activityLevel != "D") {
        std::cout << "Invalid activity level input. Please enter 'A', 'B', 'C', or 'D'.\n";
        std::cout << "Enter your activity level\n A) Sedentary (little or no exercise)\n B) Somewhat active (light exercise/sports 1-3 days/week)\n C) Active (moderate exercise/sports 3-5 days/week)\n D) Highly active (hard exercise/sports 6-7 days a week): ";
        std::cin >> activityLevel;
        activityLevel[0] = toupper(activityLevel[0]);
    }
    
    // Adjust BMR based on activity level
    if (activityLevel == "A") {
        bmr *= 1.2;
    } else if (activityLevel == "B") {
        bmr *= 1.3;
    } else if (activityLevel == "C") {
        bmr *= 1.4;
    } else if (activityLevel == "D") {
        bmr *= 1.5;
    
    }

    // Calculate the number of candy bars based on BMR and the calorie content of a candy bar (230 calories)
    candyBars = bmr / 230.0;

    // Output the result with two decimal places
    std::cout << "A " << gender << " with those measurements should eat " << std::fixed << std::setprecision(2) << candyBars << " candy bars per day to maintain your weight.\n";




    return 0;
}

/*
Sample Output:
This program will calculate the number of 230-calorie candy bars you can eat each day to maintain your weight.
Enter your age in years: 25
What is your height in inches?: 65
What is your weight in pounds?: 150
Enter 'M' for male or 'F' for female: F     
Enter your activity level
 A) Sedentary (little or no exercise)
 B) Somewhat active (light exercise/sports 1-3 days/week)
 C) Active (moderate exercise/sports 3-5 days/week)
 D) Highly active (hard exercise/sports 6-7 days a week): C
A female with those measurements should eat 9.09 candy bars per day to maintain your weight.    
*/