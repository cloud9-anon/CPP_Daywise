#include<iostream>
using namespace std;
int max_element(int a[], int l){
    int max = a[0];
    for (int i=1;i<l;i++){
        if (max < a[i]){
            max = a[i];
        }
    }
return max;}
int main(){
    int num[] = {21,45,54,78,85}; 
    int size = sizeof(num)/sizeof(num[0]);
    int result = max_element(num,size);
    cout << "The maximum element in array is " << result << endl;


return 0;
}