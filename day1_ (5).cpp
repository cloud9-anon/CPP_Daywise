#include<iostream>
using namespace std;
int main()
{
        int number ,sum=0,digit;
        cout<<"Enter the number :"<<endl;
        cin>>number;
        while(number>0)
        {
                digit = number%10;
                sum=sum+digit;
                number = number/10;
                cout<<endl;
        }
        cout<<"The sum of digits for the following number is "<<sum<<"."<<endl;
return 0;
}