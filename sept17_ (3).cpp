#include<iostream>
using namespace std;
int min_element(int a[], int l){
    int min = a[0];
    for (int i=1;i<l;i++){
        if (min > a[i]){
            min = a[i];
        }
 return min;   }
}
int main(){
    int num[] = {21,45,54,78,85}; 
    int size = sizeof(num)/sizeof(num[0]);
    int result = min_element(num,size);
    cout << "The minimum element in array is " << result <<endl;


return 0;
}