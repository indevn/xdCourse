//Problem 116
#include<cstdio>
int main(){
    float eleTol,rst;
    scanf("%f",&eleTol);
    if(eleTol<=110) rst=eleTol*0.5;
    else if(eleTol<=210) rst=55+(eleTol-110)*0.55;
    else rst=110+(eleTol-210)*0.7;
    printf("%.2f",rst);
    return 0;

}