//Problem 94
#include<iostream>
int main(){
    int a[5];
    for(int i=1;i<=4;i++)
    std::cin>>a[i];
    for(int i=1;i<=4;i++)
    for(int j=1;j<=4-i;j++)
    if(a[j]>a[j+1]){
        a[j]+=a[j+1];
        a[j+1]=a[j]-a[j+1];
        a[j]=a[j]-a[j+1];
    }
    std::cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<std::endl;

}