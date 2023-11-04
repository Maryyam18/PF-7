#include <iostream>
#include <iomanip>
using namespace std;

int calculatePrice(int money, int year);
int main() {
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year : ";
    cin >> year;
    int remainingMoney = calculatePrice(money, year);
    if (remainingMoney >= 0) {
        cout << "Yes! He will live a carefree life and will have " <<fixed << setprecision(2) << remainingMoney << " dollars left." <<endl;
    } else {
        cout << "He will need " << fixed << setprecision(2) << -remainingMoney << " dollars to survive." << endl;
    }

    return 0;
}

int calculatePrice(int money, int year) {
    int age = 18; 
    for (int currentYear = 1800; currentYear <= year; currentYear++) {
        if (currentYear % 2 == 0) {
            money -= 12000;
        } else {
            money -= (12000 + 50 * age);
        }
        age++;
    }
    return money;
}

