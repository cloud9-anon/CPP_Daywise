#include<iostream>
using namespace std;
int main()
{
        int number,digit;
        cout<<"Enter the number : "<<endl;
        cin>>number;
        cout<<endl;
        while(number>0)
        {
           digit=number%10;
           number = number/10;
        }
        cout<<"The first digit is = "<<digit<<endl;
return 0;
}