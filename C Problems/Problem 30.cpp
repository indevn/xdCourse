//Problem 30
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    //输出控制
    int tmp;
    int isFirst=0;
    //完数判断
    for(int m=a;m<=b;m++){
        tmp=0;
        for(int i=1;i<m;i++)
        if(m%i==0) tmp+=i;

        if(tmp==m){
            if(isFirst++) cout<<endl;
            cout<<m;
        }
    }
    return 0;
}