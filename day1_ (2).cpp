#include<iostream>
void inwords(int digit){
  const char* words[]={"Zero","One","Two","Three","Four","Five","Six","Seven" ,"Eight","Nine"};

            if(digit>= 0 && digit<=9){
                std::cout<<words[digit]<<" ";
            }
            else
            {std::cout<<"Invalid Digit";}
}
int reverse(int N){
    int temp=N,rev=0;

    while(temp>0){
        int digit1=temp%10;
        rev=rev*10 +digit1;
        temp=temp/10; 
    }
return rev;
}

void number_inwords(int num){
        
        if(num==0){
            inwords(0);
        }
        while(num>0){
            int digit= num%10;
            inwords(digit);
            num=num/10;
            

        }
}






int main()
{
    int number; 
    std::cout<<"Enter the number :";
    std::cin>>number;
    number = reverse(number);
    
    if(number<0){
        std::cout<<"Enter positive Number.";        
    }
    else{
     std::cout<<"Result  ";number_inwords(number);
    }


return 0;
}