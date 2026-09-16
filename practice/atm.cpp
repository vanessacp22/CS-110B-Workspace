#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0;
    double amount;   
    std::cout <<"\t    ====ATM====\n\t1. Check Balance\n\t2. Deposit\n\t3. Withdraw\n\t4. Exit"<< endl;
    std::cin >> choice;

    switch(choice){
        case 1:
            std::cout << "Your balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
        case 2:
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;
            balance += amount;
            std::cout << "Deposit successful. Your new balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
            break;
        case 3:
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;
            if (amount > balance) {
                std::cout << "Insufficient funds." << std::endl;
            } else {
                balance -= amount;
                std::cout << "Withdrawal successful. Your new balance is: $" << std::fixed << std::setprecision(2) << balance << std::endl;
            }
            break;
        case 4:
            std::cout << "Thank you for using the ATM. Goodbye!" << std::endl;
            return 0;
    }






    return 0;
}