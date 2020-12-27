#include <cstring>
#include <algorithm>
#include <iostream>

void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a-=b;
}

int main(){
    char str[101];
    char a[101];
    int b[101];
    fgets(str,101,stdin);
    // std::cin>>str;
    char firstChar=str[0];

    int length=strlen(str);
    int lengA=0,lengB=0;
    for(int i=1;i<length;i++)
    {
        if(str[i]>firstChar)
            a[lengA++]=str[i];
        else
            b[lengB++]=int(str[i]);
    }
    // lengB--;
    // for(int i=0;i<=lengB;i++)
    //     for(int j=0;j<=lengB-i;j++)
    //         if(b[j]>b[j+1]) swap(b[j],b[j+1]);
    
    for(int i=1;i<=lengB-1;i++)
        for(int j=0;j<lengB-i;j++)
            if(b[j]>b[j+1]) swap(b[j],b[j+1]);


    for(int i=0;i<lengA;i++) std::cout<<a[i];
        std::cout<<firstChar;

    for(int i=0;i<lengB;i++)
        if(char(b[i])!='\n')
            std::cout<<char(b[i]);

}