#include<cstdio>
int func(int c,int n){
    //c==0: A
    //c==1:B
    if(n==1) return c?1:2;
    if(n==2) return c?2:3;
    return func(c,n-1)+func(c,n-2);
}
double fun2(int n){
    return 1.0*func(0,n)/func(1,n);
}
double sigfun(int n){
    double rst=0;
    for(int i=1;i<=n;i++)
    rst+=fun2(i);
    return rst;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%.2f",sigfun(n));
}