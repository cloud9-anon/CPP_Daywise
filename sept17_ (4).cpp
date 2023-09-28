#include<iostream>
using namespace std;
int secondmax_element(int a[], int l){
    int max = a[0];
    int secondmax = a[0];
    for (int i=1;i<l;i++){
        if (max < a[i]){
            secondmax=max;
            max = a[i];}
        else if (a[i] > secondmax && a[i] != secondmax)
        {
            secondmax=a[i];
        }
        
    }
return secondmax;}
int main(){
    int num[] = {21,45,54,78,85}; 
    int size = sizeof(num)/sizeof(num[0]);
    int result = secondmax_element(num,size);
    cout << "The maximum element in array is " << result << endl;


return 0;
}