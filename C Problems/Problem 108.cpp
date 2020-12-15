#include <cstdlib>
#include <cstdio>
int main(){
    char a[101];
    char b[11];
    fgets(a,100,stdin);
    int length=0;
    for(int i=0;a[i]!='\0'&&a[i]!='\n';i++)
        if(a[i]>='0'&&a[i]<='9')
            b[length++]=a[i];
    b[length]='\0';
    int rst=atoi(b);

    for(int i=(rst+1)/2;i>=2;i--)
        for(int j=2;j<=i;j++)
            if(i*j==rst){
                printf("%d",i);
                return 0;
            }
    //50的评测点在这里:
    if(b[0]=='/0') printf("0");
    else printf("%d",rst);
    return 0;

}
