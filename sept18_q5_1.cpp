#include<iostream>
using namespace std;

void lower(char s[]){
    int i=0;
    while(s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + ('a'-'A');
        }
    i++;
    }
} 


int main () {
char string[] ="THIS IS STRING ONE";

cout << "Before : " << string << endl;
cout << endl;
lower(string);
cout << "After : " << string << endl;
return 0;}