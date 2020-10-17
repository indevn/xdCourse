//Problem 100
#include<iostream>
int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    a+b>c&&b+c>a&&a+c>b?
    std::cout<<a+b+c:
    std::cout<<"No";
    return 0;
}