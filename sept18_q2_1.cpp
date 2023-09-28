#include<iostream>
using namespace std;
void strcpy(char s[], char d[]){
    int i=0;
    while(s[i] != '\0'){
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}
int main(){
    char source[]="This is from source string";
    int size = sizeof(source)/sizeof(source[0]);
    char destination[30];

    strcpy(source, destination);
    cout << "Source : " << source << endl;
    cout << "Destination : " << destination << endl;

return 0;}