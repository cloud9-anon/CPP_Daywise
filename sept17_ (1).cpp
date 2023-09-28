#include<iostream>
using namespace std;
bool isPresent(int a[], int n, int l){

for ( int i=1; i<l;i++){
    int key = n;
    if(key == a[i]){
        return true;
    }
}
return false;
}
int main(){
    int nums[]={1,15,35,48,76,67,23,27};
    int number;
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Enter the number " << endl;
    cin >> number;
    if (isPresent(nums,number,size)){
        cout << "The number is present in an array" << endl;
    }
    else{
        cout << "The number is not present in an array" << endl;
    }



return 0;}