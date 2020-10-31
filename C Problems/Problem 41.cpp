//Problem 41
#include<iostream>
#include<cstdio>
using namespace std;
int a[101];
int b[7]={0};
int main(){
    int n;
    cin>>n;
    float averRst=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>300) b[6]++;
        else if(a[i]>=201) b[5]++;
        else if(a[i]>=151) b[4]++;
        else if(a[i]>=101) b[3]++;
        else if(a[i]>=51) b[2]++;
        else b[1]++;
        averRst+=a[i];
    }
    averRst/=n;
    printf("%.2f\n",averRst);
    printf("%d %d %d %d %d %d",b[1],b[2],b[3],b[4],b[5],b[6]);
    return 0;
}