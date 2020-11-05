//Problem 202
#include<iostream>
int main(){
    int mark=0;
    for(int i=0;i<=3;i++)//red
    {
        for(int j=8-5-i;j<=4;j++)//white
        {
            if(mark++) std::cout<<std::endl;
            std::cout<<i<<" "<<j<<" "<<8-i-j;
        }
    }
    return 0;
}