#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int sta=n*(n-1)+1;
    for(int i=1;i<=n;i++){
        if(i==1) std::cout<<sta;
        else std::cout<<" "<<sta;
        sta+=2;
    }
    return 0;
}