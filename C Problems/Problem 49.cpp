//Problem 49
#include <iostream>
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i*i<=n;i++)
    if(i*i==n){
        std::cout<<i;
        return 0;
    }
    std::cout<<"no";
    return 0;
}