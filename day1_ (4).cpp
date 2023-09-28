#include<iostream>
using namespace std;
int main (){
        int number,reverse=0,digit;
            cout<<"Enter the Number :";
            cin>>number;
            while(number!=0){
                    digit = number%10;
                    reverse =digit + reverse*10 ;
                    number = number/10;
                    cout<<endl;
            }
            cout<<"The reverse of number is : "<<reverse<<endl;
return 0;
}