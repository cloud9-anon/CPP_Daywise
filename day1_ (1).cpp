#include<iostream>
using namespace std;


int ispresent(int n, int d){
   int key,temp,value=0;
   while(n>0){
        key = n%10;
        if (key==d){
            value=value + 1;}
            n=n/10;
        }
               

return value;}
int main(){

    int number,digit,count;
    cout<<"Enter the number :";
    cin>>number;
    cout<<"Enter the digit :";
    cin>>digit;
    count= ispresent(number,digit);
    if(count>0){
    cout<<"The count of digit "<<digit<<" in "<<number<<" is "<<count;
    }
    else{
        cout<<"The digit "<<digit<<" is not present in the given number "<< number;
    }
return 0;}