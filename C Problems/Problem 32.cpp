//Problem 32
#include<iostream>
int main(){
    int n;
    std::cin>>n;

    int rst=0;
    while(n!=1){
        if(n%2==0) n/=2;
        else n=3*n+1;
        rst++;
    }

    std::cout<<rst;
}