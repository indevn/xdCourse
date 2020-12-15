#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int rst=1;
    int sumRst=0;
    for(int i=1;i<=n;i++){
        rst=1;
        for(int j=1;j<=i;j++)
            rst*=j;
        sumRst+=rst;
    }
    std::cout<<n<<" "<<rst<<" "<<sumRst;
    return 0;
}