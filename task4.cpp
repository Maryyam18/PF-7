#include<iostream>
using namespace std;
int frequency(int number, int digit);
main()
{
    int number;
    int digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    int result;
    result = frequency(number, digit);
    cout << "Frequency: "<< result;
}

   int frequency(int number, int digit){

      int count=0;
      while(number > 0)
      {
        int remiander ;
        remiander = number%10;
        number = number/10;

        if(remiander == digit){

        count++;
      }
    }
      return count;
      }
      