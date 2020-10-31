//Problem 39
#include<iostream>
using namespace std;
int a[100][100];
int b[100][100];
int main(){
    int m,n;
    int mark=0;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    int maxRow,minCol,temp;
    for(int i=0;i<m;i++){
        minCol=0;
        temp=100000000;
        for(int j=0;j<n;j++)
        if(a[i][j]<temp){
            temp=a[i][j];
            minCol=j;
        }
        temp=0;
        for(int k=0;k<m;k++)
        if(a[k][minCol]>temp){
            temp=a[k][minCol];
            maxRow=k;
        }
        if(maxRow==i){
        cout<<maxRow<<" "<<minCol<<" "<<a[maxRow][minCol]<<endl;
        mark++;
        }
    }
    if(!mark) cout<<"no"<<endl;
    return 0;
}