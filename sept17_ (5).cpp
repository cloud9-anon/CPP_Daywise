#include<iostream>
using namespace std;
int secondmin_element(int a[], int l){
    int min = a[0];
    int secondmin = a[1];
    for (int i=1;i<l;i++){
        if (min > a[i]){
            secondmin=min;
            min = a[i];}
        else if (a[i] < secondmin && a[i] != secondmin)
        {
            secondmin=a[i];
        }
        
    }
return secondmin;}
int main(){
    int num[] = {21,45,54,78,32,85}; 
    int size = sizeof(num)/sizeof(num[0]);
    int result = secondmin_element(num,size);
    cout << "The minimum element in array is " << result << endl;


return 0;
}