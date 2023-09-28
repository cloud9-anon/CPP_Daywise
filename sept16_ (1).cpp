#include<iostream>
using namespace std;

template <class n>
void myswap(n &x, n &y)
{
    n temp = x;
    x = y;
    y = temp;
}



int main()
{
    int a=12,b=15;
    char a1='M',b1='N';
    cout<<"Before swap :"<<endl<<"a = "<<a <<" , b = "<<b<<endl;  
    cout<<"Before swap :"<<endl<<"a1 = "<<a1 <<" , b1 = "<<b1<<endl;  
 
    myswap(a,b);
    myswap(a1,b1);
    cout<<endl;
    cout<<"After swap :"<<endl<<"a = "<<a <<" , b = "<<b<<endl;  
    cout<<endl;
    cout<<"After swap :"<<endl<<"a1 = "<<a1 <<" b1 = "<<b1<<endl; 

return 0;

}