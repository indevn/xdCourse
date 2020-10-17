//Problem 30
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int tmp;
    int isFirst=0;
    for(int m=a;m<=b;m++){
        tmp=0;
        for(int i=1;i<m;i++)
        for(int j=1;j<=m;j++)
        if(i*j==m) tmp+=i;
        if(tmp==m){
            if(isFirst++) cout<<endl;
            cout<<m;
        }
    }
    return 0;
}