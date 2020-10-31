#include <iostream>
using namespace std;
int isEchPrime(int a,int b){
    int maxRst;
    for(int i=1;i<=a&&i<=b;i++)
        if(a%i==0&&b%i==0)
            maxRst=i;
    return maxRst;
}
int main(){
    int a,b;
    cin>>a>>b;

    //为零时
    if(a==0) cout<<b;
    else if(b==0) cout<<a;
    else cout<<isEchPrime(a,b);
    return 0;
}