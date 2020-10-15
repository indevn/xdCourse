#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cin>>n;
    int sumPos=0;
    int tmp;
    for(int i=8;i>=0;i--){
        tmp=pow(10,i);
        sumPos+=n/tmp;
        n=n%tmp;
    }
    std::cout<<sumPos<<std::endl;
    return 0;
}