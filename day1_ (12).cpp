#include<iostream>
using namespace std;
int main()
{
        int number,digit,sum=0,rem;
        cout<<"Enter the number : "<<endl;
        cin>>number;
        cout<<endl;
        if (number<0){
             cout<<"Invalid input. ";
        }
        else
        for(int i=1;i<=number/2; i++)
        {
            rem = number%i; 
            if(rem==0)
                {
                    cout<<i<<" "<<endl;
                    sum=sum+i;
                }
        }
        cout<<"The sum of all factors is = "<<sum<<endl;
        
            if (sum == number)   
            {
                    cout<<"The number is a Perfect Number"<<endl;
            }
            else{
                cout<<"The number is not a Perfect Number"<<endl;
            }
return 0;
}