#include<cmath>
#include<iostream>
int function (int a, int b){
    int p[6]={0};

    //presolve
    if(a>b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    if(a<100) a=100;

    int mark=0;
    for(int i=a;i<=b;i++){
        int tmp=i;
        int rst=0;

        int bitLen=0;
        while(tmp){
            p[bitLen]=tmp%10;
            tmp/=10;
            bitLen++;
        }
        for(int m=0;m<bitLen;m++)
        {
            rst+=pow(p[m],bitLen);
        }
        if(rst==i) mark++;
    }
    return mark;
}
int main(){
    std::cout<<function(3,1000);
}