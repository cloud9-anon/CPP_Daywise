#include<iostream>
using namespace std;
int main (){
     
        int number,sum=0,digit,count=0,temp;
            cout<<"Enter the Number :";
            cin>>number;
        temp = number;
        while(temp!= 0)
                            {
            count += 1;
            temp = temp/10;
                            }
    for(int i=count;i>0;i--){
                            
    digit = number%10;
    a=1;
    for(int i=1;i<=count;++i){
    
    a=a*digit;
    } 
    
    sum=sum+a;
    number=number/10;
                                    }
cout<<sum<<endl;


return 0;
}