//Problem 40
#include<iostream>
#include<cmath>
using namespace std;
int a[101];
int main(){
    int isAP=0;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    cin>>a[i];

    for(int i=1;i<=n;i++)
    for(int j=1;j<=n-i;j++)
    if(a[j]>a[j+1]){
        a[j]+=a[j+1];
        a[j+1]=a[j]-a[j+1];
        a[j]=a[j]-a[j+1];
    }

    int d,mark=0;
    d=a[2]-a[1];
    for(int i=2;i<n;i++)
    if(d!=a[i+1]-a[i]) mark++;

    if(mark) cout<<"no";
    else cout<<d;
    return 0;
}