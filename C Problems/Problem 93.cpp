//Problem 93
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    if(a<b){
        a+=b;
        b=a-b;
        a=a-b;
    }
    //demand : a>b
    int rst1,rst2;
    a%10>=0?rst1=a%10:rst1=-1*(a%10);
    rst2=b*b;
    std::cout<<rst1<<" "<<rst2<<std::endl;

}