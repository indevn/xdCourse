//Problem 3
#include <iostream>
int a[1001];
void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a=a-b;
}
int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    std::cin>>a[i];

    for(int i=1;i<=n;i++)
    for(int j=1;j<=n-i;j++)
    if(a[j]>a[j+1]) swap(a[j],a[j+1]);

    int tmp=10000;
    for(int i=1;i<n;i++)
    if((a[i+1]-a[i])<tmp) tmp=a[i+1]-a[i];

    std::cout<<tmp;
    return 0;
}