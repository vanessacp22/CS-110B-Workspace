/* Program: blog_entry.cpp
Written by: Vanessa Perez
Date: 09/21/26
Description:
This program prompts the user to enter a key character and a string.
 It then performs three operations on the string: masking the key character 
 with an asterisk, removing the key character, and counting the occurrences
 of the key character. The results of these operations are displayed to the user.
*/


#include <iostream>
#include <string>
using namespace std;


const int  MIN_SIZE = 4; // Minimum size for the input string

// Function prototypes
char getKeyCharacter();
string getString();
string maskCharacter(string theString, char keyCharacter);
string removeCharacter(string theString, char keyCharacter);
int countKey(string theString, char keyCharacter);

// Function to get a single character from the user to use as a key
char getKeyCharacter(){
    string keyCharacter;
    std::cout<< "Enter a character to use as a key: ";
    std::cin >> keyCharacter;

    if (keyCharacter.length() == 1) {
        return keyCharacter[0];
    }
    else {
        std::cout << "Invalid input. Please enter a single character." << std::endl;
        return getKeyCharacter();
    }

}

// Function to get a string from the user with a minimum size requirement
string getString() {

string theString;
std::cout << "Enter a string: ";

std::getline(std::cin, theString);
if (theString.length() < MIN_SIZE) {
    std::cout << "Invalid input. Please enter a string with at least " << MIN_SIZE << " characters." << std::endl;
    return getString();
}
else {
    std::cout << "You entered: " << theString << std::endl;
    return theString;
}

}

// Function to mask the key character in the string with an asterisk
string maskCharacter(string theString, char keyCharacter) {
    string maskedString;

    for (int i = 0; i < theString.length(); i++) {
        if (theString[i] == keyCharacter) {
            maskedString += '*';
        } else {
            maskedString += theString[i];
        }
    }
    return maskedString;
}

// Function to remove the key character from the string
string removeCharacter(string theString, char keyCharacter) {
    string modifiedString;

    for (int i = 0; i < theString.length(); i++){
        
        if (theString[i] != keyCharacter) {
            modifiedString += theString[i];
        }
    }
    return modifiedString;
}

// Function to count the occurrences of the key character in the string
int countKey(string theString, char keyCharacter) {
    int count = 0;
    for (int i = 0; i < theString.length(); i++) {
        if (theString[i] == keyCharacter) {
            count++;
        }
    }
    return count;
}

int main () {

    char keyCharacter = getKeyCharacter(); // Get the key character from the user
    cin.ignore(); // Clear the input buffer to avoid issues with getline
    string theString = getString(); // Get the string from the user

    string maskedString = maskCharacter(theString, keyCharacter); // Mask the key character in the string
    string modifiedString = removeCharacter(theString, keyCharacter); //    Remove the key character from the string
    int count = countKey(theString, keyCharacter); // Count the occurrences of the key character in the string
    // Display the results to the user
    cout << "String with key character masked: " 
         << maskedString << endl;

    cout << "String with key character removed: " 
         << modifiedString << endl;

    cout << "Number of occurrences of key character: " 
         << count << endl;

    return 0;

}
/* Sample Output:
Enter a character to use as a key: e
Enter a string: Hello, welcome to the world of C++ programming!
You entered: Hello, welcome to the world of C++ programming!
String with key character masked: H*llo, w*lcom* to th* world of C++ programming!
String with key character removed: Hllo, wlcom to th world of C++ programming!
Number of occurrences of key character: 6


Enter a character to use as a key: a
Enter a string: Aardvarks are amazing animals.
String with key character masked: A*rdv*rks *re *m*zing *nim*ls.
String with key character removed: Ardvarks re mzing nimls.
Number of occurrences of key character: 6

Enter a character to use as a key: #
Enter a string: C++ #is fun! #Coding is #cool.
String with key character masked: C++ *is fun! *Coding is *cool.
String with key character removed: C++ is fun! Coding is cool.
Number of occurrences of key character: 3

*/