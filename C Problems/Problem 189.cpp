//Problem 189
#include <cstdio>
int main(){
    int n;
    scanf("%d",&n);
    double hgh=100;
    double totHgh=100;
    for(int i=1;i<=n;i++){
        hgh/=2;
        totHgh+=hgh*2;
    }
    printf("S=%.3f h=%.3f",totHgh-2*hgh,hgh);//WHY???!!!
    return 0;
}