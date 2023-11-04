#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result;
    result = digitSum(number);
    cout << "Sum of digits: " << result;
}

   int digitSum(int number){
      int sum=0;
      while(number > 0){
        int remiander ;
        remiander = number%10;
        number = number/10;
        sum = sum+remiander;
      }
      return sum;;
      }
      