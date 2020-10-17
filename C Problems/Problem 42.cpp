//Problem 42
#include<iostream>
int main(){
    int a,b;
    std::cin>>a>>b;
    a%b==0?std::cout<<"yes":std::cout<<a/b<<" "<<a%b;
    return 0;
}