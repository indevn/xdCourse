//Problem 27
#include<cstdio>
int main(){
    float a;
    scanf("%f",&a);
    if(a<=110) printf("%.2f",a*0.5);
    else if(a<=210) printf("%.2f",55+(a-110)*0.55);
    else printf("%.2f",110+(a-210)*0.7);
    return 0;
}