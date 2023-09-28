#include<iostream>
using namespace std;
bool reverse(int a)
{
    int rev=0;int temp=a;
     if (temp<0){
            cout<<"Invalid input."<<endl;
        }
    while(a>0)
    {
    int digit=a%10;
    rev =rev*10 +digit;
    a = a/10;}
return rev == temp;    
}
int main()
{
        int number,digit,sum=0;
        cout<<"Enter the number : "<<endl;
        cin>>number;
        cout<<endl;
       
        if(reverse(number))
        {
            cout<<"The number is Palindrome ."<<endl;
        }
        else {
            cout<<"The number is not Palindrome"<<endl;
        }
return 0;
}