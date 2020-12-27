#include <iostream>
#include <cstdio>
int main(){
    float mil;
    int tim;
    std::cin>>mil>>tim;
    float rst=(tim/5)*2;
// std::cout<<rst;
    if(mil>10){
        rst+=(mil-10)*3;
        mil=10;
    }
    if(mil>3){
        rst+=(mil-3)*2;
        mil=3;
    }
    rst+=10;
    printf("%d",int((rst*10+5)/10));
    return 0;
}