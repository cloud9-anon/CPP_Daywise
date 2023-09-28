#include<iostream>
using namespace std;

void upper(char s[]){
    int i=0;
    while(s[i] != '\0'){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - ('a'-'A');
        }
    i++;
    }
} 


int main () {
char string[] ="This is string one";

cout << "Before : " << string << endl;
cout << endl;
upper(string);
cout << "After : " << string << endl;
return 0;}