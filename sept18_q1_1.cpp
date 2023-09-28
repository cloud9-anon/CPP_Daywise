#include<iostream>
using namespace std;
int strlen(char a[]){
  int result = 0;
  for (int i=0; a[i] != '\0';++i){
    result++;
  }  
return result;}
int main(){
    char string[] = "Hello! This is question number 1";
    int length = strlen(string);
    cout << " The lenght of the string is " << length << endl;

return 0;}