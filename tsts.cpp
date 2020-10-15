#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    //大公约
    int rst1=0;
    int rst2=0;
    for(int i=1;i<=m&&i<=n;i++)
    if(m%i==0&&n%i==0) rst1=i;
    for(int i=m*n;i>=m&&i>=n;i--)
    if(i%m==0&&i%n==0) rst2=i;
    cout<<rst1<<" "<<rst2;
}