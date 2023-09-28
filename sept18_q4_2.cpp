#include<iostream>
using namespace std;

void upper(char s[]){
    char *p1=s;
    while(*p1 != '\0'){
        if ( *p1 >= 'a' && *p1 <= 'z'){
            *p1 = *p1 - ('a'-'A');
        }
    p1++;
    }
}

int main (){
 char string[]= " This is string one";
     
     cout << " Before : " << string << endl;
     cout << endl;
     upper(string);
     cout << " After : " << string << endl;
 
return 0;
}