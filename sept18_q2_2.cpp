#include<iostream>
using namespace std;

void strcpy(char s[], char d[]){
    char *dptr = d;
    const char *sptr = s;
    for(*sptr; *sptr !='\0'; sptr++ ){
        *dptr = *sptr;
        *dptr++;
    }
    *dptr = '\0';
}

int main () {
    char source[]="This is from source";
    char destination[30];
    strcpy(source,destination);
    cout << "Source : " << source << endl;
    cout << "Destination : " << destination << endl;

return 0;}