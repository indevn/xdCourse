//Problem 52
#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='a'&&a<='z') a=a-'a'+'A';
    if(a>='A'&&a<='Z') a=a-'A'+'a';
    cout<<a;
    
    return 0;
}