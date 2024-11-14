#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    char withParent;
    double money;
    bool isWithParent;

    double matineePrice = 7.50;
    double eveningPrice = 10.50;

    cout << "Enter your age: ";
    cin >> age;

    cout << " Are you with a parent? (y/n): ";
    cin >> withParent;
    isWithParent = (withParent == 'y' || withParent == 'Y');

    cout << " Enter the amount of money you have: ";
    cin >> money;

    cout << " You can attend the following movie types:\n";
    if (age < 13) {
        if (isWithParent) {
            cout << "- G, PG\n";
        } else {
            cout << "- G\n";
        }
    } else if (age >= 13 && age < 16) {
        if (isWithParent) {
            cout << "- G, PG, R\n";
        } else {
            cout << "- G, PG\n";
        }
    } else if (age >= 16) {
        cout << "- G, PG, R\n";
    }

    cout << " Based on your money, you can attend:\n";
    if (money >= eveningPrice) {
        cout << "- Evening\n";
    } else if (money >= matineePrice) {
        cout << "- Matinee\n";
    } else {
        cout << "- Not enough money for a ticket.\n";
    }

    return 0;
}
