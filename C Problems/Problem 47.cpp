#include <iostream>
#include <cstdio>
int main(){
    int h,m;
    std::cin>>h>>m;
    float t=h+m/60.0;
    float rst=(4*t*t/(t+2))-20;
    printf("%.2f",rst);
}