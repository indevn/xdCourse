//Problem 51
#include <iostream>
int main(){
    int maxNum,tmp;
    std::cin>>maxNum;
    for(int i=1;i<=3;i++){
        std::cin>>tmp;
        if(tmp>maxNum) maxNum=tmp;
    }

    std::cout<<maxNum;
    return 0;
    
}