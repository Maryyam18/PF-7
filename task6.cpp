#include<iostream>
using namespace std;
int findGCD(int number1, int number2);
int findLCM(int number1, int number2);

main()
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    
    cout << "Enter the second number: ";
    cin >> number2;


    cout << "GCD: " << findGCD(number1, number2) << endl;
    cout << "LCM: " << findLCM(number1, number2);


}

int findGCD(int number1, int number2){
    if (number2 == 0)
        return number1;
    else 
        return findGCD(number2, number1 % number2);


}


int findLCM(int number1, int number2){

int gcd = findGCD(number1, number2);

    return number1 * number2/gcd;


}





