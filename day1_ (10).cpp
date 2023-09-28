#include<iostream>
using namespace std;
int main()
{
        int number,digit,Product=1;
        cout<<"Enter the number : "<<endl;
        cin>>number;
        cout<<endl;
        if (number<0){
             cout<<"Invalid input. ";
        }
        else
        while(number>0)
        {
           digit=number%10;
           Product=Product*digit;
           number = number/10;
        }
        cout<<"The Product of all digits is = "<<Product<<endl;
return 0;
}