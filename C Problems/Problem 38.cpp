//Problem 38
#include<iostream>
int main(){
    int a;
    int b[10],i,isFalse=0;
    std::cin>>a;
    for(i=0;a;){
        i++;
        b[i]=a%10;
        a/=10;
    }   
    for(int j=1;j<=i/2;j++)
    if(b[j]!=b[i-j+1]) isFalse++;

    if(isFalse!=0) std::cout<<"no";
    else{
        int sum=0;
        for(int p=1;p<=i;p++) sum+=b[p];
        std::cout<<sum;
    }
    return 0;
}