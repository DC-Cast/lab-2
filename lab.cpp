#include <iostream>
using namespace std;

int main() {
    cout << "=====================\n";
    cout << " NUMBER CHALLENGE \n";
    cout << "=====================\n";
    cout << "1. Guess a Number\n";
    cout << "2. Even or Odd\n";
    cout << "3. Grade Evaluator\n";
    cout << "4. Exit\n";
    cout << "Enter your choice\n";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "I am thinking of a number between 1 and 10\n Enter your guess:";
            break;
        case 2:
            cout << "Enter a number\n";
    }
    return 0;
}