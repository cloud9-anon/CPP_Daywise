#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
return;
}



int main()
{
    int a=12,b=15;
    cout<<"Before swap :"<<endl<<"a = "<<a<<endl;  
    cout<<"b = "<<b<<endl;
    swap(a,b);
    cout<<endl;
    cout<<"After swap :"<<endl<<"a = "<<a<<endl;  
    cout<<"b = "<<b<<endl;
    

return 0;
}