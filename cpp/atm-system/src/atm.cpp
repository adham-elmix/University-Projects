#include <iostream>
#include <string>
using namespace std;
void showMenu() {
    cout << "\n--- ATM Menu ---" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}
int main() {
    int password = 1262;
    int inputPass;
    int balance = 1000; 
    int choice;
    int amount;
    bool isLoggedIn = false;
    while (isLoggedIn == false) {
        cout << "Enter Password: ";
        cin >> inputPass;
        if (inputPass == password) {
            cout << "Login Successful!" << endl;
            isLoggedIn = true;
        } else {
            cout << "Wrong! Please try again.\n" << endl;
        }
    }

    while (true) {
        showMenu(); 
        cin >> choice;

        if (choice == 1) {
            cout << "Your Balance is: $" << balance << endl;
        } 
        else if (choice == 2) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance = balance + amount; 
            cout << "Deposit Successful. New Balance: $" << balance << endl;
        } 
        else if (choice == 3) {
            cout << "Enter withdraw amount: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance = balance - amount;
                cout << "Withdraw Successful. Remaining: $" << balance << endl;
            }
        } 
        else {
            cout << "System Exited. Goodbye!" << endl;
            break; 
        }
    }

    return 0;
}
