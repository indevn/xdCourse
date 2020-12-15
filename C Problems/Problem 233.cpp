#include <cstdio>
#include <cstring>
#include <iostream>

int main(){
    char a[50];
    char b[50];
    gets(a);
    int length=strlen(a);
    // std::cout<<length;
    int m;
    std::cin>>m;
    // std::cout<<"#"<<int(a[12]);
    if(length<m)
    std::cout<<"error";
    else
    {
        // memcpy(b,a+(m-1),length-(m-1));
        for(int i=m-1;i<length;i++)
        std::cout<<a[i];
        // puts(b);
        // printf("")
        // std::cout<<"#"<<int(b[length-(m)]);
    }
    
    return 0;
}