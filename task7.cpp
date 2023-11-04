#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    int numberCount;
    cout << "Enter numbers count: ";
    cin >> numberCount;

    int i = numberCount;
    float percent1=0, percent2=0, percent3=0, percent4=0, percent5=0;

    int number;

   while(numberCount>0){
    cout << "Enter a number: ";
    cin >> number;

    if(number <= 199){
        percent1+=1;
    }
    else if(number < 200 || number < 400){
        percent2+=1;
    }
    else if(number < 400 || number < 600){
        percent3+=1;
    }
    else if(number < 600 || number < 800){
        percent4+=1;
    }
    else if(number >= 800){
        percent5+=1;
    }
    numberCount -=1;
   }
   

   
   cout << fixed << setprecision(2) << (percent1 / i) * 100 << "%" << endl;
   cout << fixed << setprecision(2) << (percent2 / i) * 100 << "%" << endl;
   cout << fixed << setprecision(2) << (percent3 / i) * 100 << "%" << endl;
   cout << fixed << setprecision(2) << (percent4 / i) * 100 << "%" << endl;
   cout << fixed << setprecision(2) << (percent5 / i) * 100 << "%" ; 
}
