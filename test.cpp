// MSC Work
// 2020.10.1 by indevn
#include<iostream>
#include<vector>
struct book{
    int coef,expo;
}
int main(){
        vector<struct book> p;

            std::cin>>coef>>expo;
            p.coef.push_back(coef);
            p.expo.push_back(expo);
            
            find(p.coef.begin(),p.coef.end(),10);


        std::cout<<find(p.coef.begin(),p.coef.end(),10);


    }