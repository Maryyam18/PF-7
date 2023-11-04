#include<iostream>
using namespace std;



void displayFibonacci(int length) {
    int number1 = 0;
    int number2 = 1;  
    int next;

    for (int i = 0; i < length; i++) {
        cout << number1;
      
        if(i!=length-1){
        cout << ", ";
        }
        next = number1 + number2;
        number1 = number2;
        number2 = next;
    }
    cout << endl;
}






