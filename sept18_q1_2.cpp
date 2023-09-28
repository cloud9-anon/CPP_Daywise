#include<iostream>
using namespace std;
int strlen(char a[]){
    int length = 0;
    char* ptr = a;
    for (*ptr; *ptr != 0; ptr++){
        length++;
    }
return length;
}

int main (){
char string[] = "This is using pointers";
int result = strlen(string);
cout << "The length of string is " << result << endl;

return 0;}