#include <iostream>
#include <cstdio>
int main(){
    float rst=0;
    int n,maxV=0,minV=101;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        int tmp;
        std::cin>>tmp;
        rst+=tmp;
        if(tmp>maxV) maxV=tmp;
        if(tmp<minV) minV=tmp;
    }
    rst=(rst-minV-maxV)/(n-2);
    printf("%.2f",rst);
}