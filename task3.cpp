#include<iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result;
    result = totalDigits(number);
    cout << "Total number of digits: " << result;
}

   int totalDigits(int number){
      int count=0;
      while(number > 0){
        int remiander ;
        remiander = number%10;
        number = number/10;
        count++;
      }
      return count;
      }
      
   














