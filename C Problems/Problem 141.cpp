//Problem 141
#include<iostream>
int main(){
    int a;
    std::cin>>a;
    char rst;
    if(a>=90) rst='A';
    else if(a>=80) rst='B';
    else if(a>=70) rst='C';
    else if(a>=60) rst='D';
    else rst='E';
    std::cout<<rst;

}