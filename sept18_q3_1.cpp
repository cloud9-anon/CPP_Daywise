#include<iostream>
using namespace std;

bool compare(char s1[], char s2[]){
    int i = 0;
    for(s1[i]; s1[i]!= '\O';i++){
    if (s1[i] != s2[i]){
        return false;
    }}

return true;}
int main(){
char string1[]="First String";
char string2[]="Second String";
if(compare(string1,string2)){
    cout << " The string are equal." << endl;
}
else {
    cout << "The strings are not equal." << endl;
}
return 0;}