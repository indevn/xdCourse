#include <iostream>
int main(){
    char a[101];
    std::cin>>a;
    int p=0;
    char tmp;
    while(a[p]!='\0')
    {
        //基本思路：得到后一位之后输入前一位
        tmp=a[p++];

        if(a[p]>='0'&&a[p]<='9'){
            int mk=a[p++]-'0';
            while(a[p]>='0'&&a[p]<='9')
                mk=mk*10+a[p++]-'0';

            for(int i=1;i<=mk;i++){
                std::cout<<tmp;
            }
        }
        else std::cout<<tmp;
    }
    std::cout<<std::endl;
}