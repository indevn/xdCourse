// 二分法求方程近似根
// 查找f(x)=x*x*x-5*x*x+10*x-80在[0,100]的根
#include <cstdio>
#include <cmath>
double EPS=1e-6;
double f(double x){
    return x*x*x-5*x*x+10*x-80;
}
int main(){
    double root,x1=0,x2=100,y;
    root=x1+(x2-x1)/2;
    int triedTimes=1;
    y=f(root);
    while(fabs(y)>EPS){
        if(y>0) x2=root;
        else x1=root;
        root=x1+(x2-x1)/2;
        y=f(root);
        triedTimes ++;
    }
    printf("%.8f\n",root);
    printf("%d",triedTimes);
    return 0;
}