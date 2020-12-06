#include <iostream>
int main(){
    char a[8];
    std::cin>>a;
    for(int i=0;i<8;i++){
        if(a[i]>='a'&&a[i]<='z')
        a[i]='a'+26-(a[i]-'a'+2)+1;
        if(a[i]>='A'&&a[i]<='Z')
        a[i]='A'+26-(a[i]-'A'+2)+1;
    }
    std::cout<<a;
}