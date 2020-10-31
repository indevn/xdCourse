//Problem 38
#include<iostream>
int main(){
    char a[10];
    std::cin>>a;
    int charLength=sizeof(a)/sizeof(char);
    std::cout<<charLength;
}