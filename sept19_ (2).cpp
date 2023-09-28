#include<iostream>
using namespace std;


class Bigint{
        int num1 = 12 ;

        public :

        Bigint(){ 
        }

        Bigint(int n){
            this->num1 = n;
        }

        bool operator==(Bigint obj){
            if(this->num1 == obj.num1){return true;}

            else {return false;}
        }
        bool operator>(Bigint obj){
            if(this->num1 > obj.num1){return true;}

            else {return false;}}
        
        bool operator<(Bigint obj){
            if(this->num1 < obj.num1){return true;}

            else {return false;}}


};






int main (){
    int num2;
    cout << "Enter second object 2" << endl;
    cin     >> num2;

    Bigint obj1;
    Bigint obj2(num2);

        if (obj1 == obj2){
            cout << " Both objects are equal !" << endl;
            }
        else if (obj1 < obj2){
            cout << "Object second is greater than first !" << endl;
            }
        else if (obj1 > obj2){
            cout << " Objects 1 is greater than second object !" << endl;
            }
        else{
            cout << " Both objects are not equal !" << endl;
            }

    return 0;
}