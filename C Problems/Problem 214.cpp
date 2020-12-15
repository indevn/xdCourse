#include<iostream>
#include<cstdio>
#include<cstring>

int main(){
    char str[101];
    int num[5]={0};
    // fgets(str,101,stdin);
    gets(str);
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]>='A'&&str[i]<='Z') num[0]++;else
        if(str[i]>='a'&&str[i]<='z') num[1]++;else
        if(str[i]==' ')              num[2]++;else
        if(str[i]>='0'&&str[i]<='9') num[3]++;else
                                     num[4]++;
    }
    std::cout<<num[0]<<" "<<
               num[1]<<" "<<
               num[2]<<" "<<
               num[3]<<" "<<
               num[4];
    return 0;
}