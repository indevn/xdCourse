#include <cstdio>
int main(){
    int n,tmp;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp);
        sum+=tmp;
    }
    sum/=n;
    printf("%.2f",sum);
    return 0;
}