#include<iostream>
using namespace std;

bool compare(char s1[], char s2[]){
    char *p1 = s1;
    char *p2 = s2;
    for (*p1; *p1 != '\0'; p1++){
        if (*p1 != *p2){
            return false;
            
        }
        p2++;
    }
return true;}

int main() {
    char string1[]="This is a string ";
    char string2[]= "This is a string ";
    if(compare(string1,string2)){
        cout << "The strings are equal.";
    }
    else {
        cout << "The string are not equal.";
    }
return 0;}