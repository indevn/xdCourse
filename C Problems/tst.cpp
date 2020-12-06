#include <cstdio>
#include <cstring>
int main(){
    char a1[100],a2[100];
    scanf("%s%s",&a1,&a2);
    puts(a1);
    // gets_s(a2,10);
    // strcat_s(a1,a2);
    printf("%d\n%s\n%s",strcat_s(a1,a2),a1,a2);
    return 0;
}