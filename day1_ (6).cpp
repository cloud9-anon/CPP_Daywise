#include<iostream>
using namespace std;
bool isprime(int num)
{
    if (num<=1){
        return false;
    }
    for(int i =2;(i <= num/2);i++)
    {
            if(num%i == 0)
            {return false;}
    }
return true;

}

int main()
{
        int u,l,i;
        cout<<"Enter the upper Limit :"<<endl;
        cin>>u;
        cout<<"Enter lower Limit :"<<endl;
        cin>>l;
        cout<<" The Prime numbers between "<<l<<" "<<"and "<<u<<" "<<"are :"<<endl;
        for (i=l;i<=u;++i)
                {
                       // isprime(i);
                        if (isprime(i)){
                            cout<< i<<" "<<endl;
                        }
                }
return 0;

}