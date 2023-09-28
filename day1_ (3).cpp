#include<iostream>
using namespace std;
int main()
{
        int i,number,rem;
        cout<<"Enter the Number :";
        cin>>number;
        for(i=1;i<=number/2; i++)
        {
            rem = number%i; 
                if(rem==0)
                {
                    cout<<i<<",";
                }
        }
return 0;
}