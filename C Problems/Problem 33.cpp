#include<iostream>
double function(int n){
    double rst=1;
    for(int i=2;i<=n;i++){
        rst=1/(1+rst);
    }
    int tmp=rst*1000000;
    if(((int)(rst*1000000))%10>5) tmp++;

    rst=tmp/1000000.0;
    return rst;
}
// int main(){
//     std::cout << function(5);
// }