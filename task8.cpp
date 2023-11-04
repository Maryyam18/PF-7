#include <iostream>
using namespace std;

int calculateMoney(int age, int washingMachinePrice, int toyPrice);

int main() {
    int age, washingMachinePrice, toyPrice;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;
    int result = calculateMoney(age, washingMachinePrice, toyPrice);

    if(result >= washingMachinePrice) {
        int number = result - washingMachinePrice;
        cout << "Yes! " <<endl<<number;
    }
    if(result < washingMachinePrice){
        int digit = washingMachinePrice - result;
        cout << "No! " << endl<<digit;
    }

    return 0;
}

int calculateMoney(int age, int washingMachinePrice, int toyPrice) {
    int totalMoney = 0;

    for (int i = 2; i <= age; i += 2) {
        totalMoney += 10 * (i/2);
        totalMoney = totalMoney - 1;

    }
    int toyIncome = (age/2)*toyPrice;
    totalMoney += toyIncome;
    return totalMoney;
}






