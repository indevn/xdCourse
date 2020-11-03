//Quick Sort
//2020.9.2 by indevn

#include <iostream>
using namespace std;
int arrayOri[]={1,7,3,4,13,6,76,9,8,10};//原始数组越混乱效率越高2333
void swap(int &a,int &b);
void QucikSort(int arrayOri[],int beg,int end);
int main(){
    int size=sizeof(arrayOri)/sizeof(int);
    QucikSort(arrayOri,0,size-1);
    for(int i=0;i<size;i++) cout<<arrayOri[i]<<" ";
    cout<<endl;
    return 0;
}
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
void QucikSort(int arrayOri[],int beg,int end){
    if(beg>=end) return;
    //Divide
    int m=arrayOri[beg];
    int i=beg ,j=end;
    while(i!=j){
        while(j>i&&arrayOri[j]>=m) --j;
        swap(arrayOri[i],arrayOri[j]);
        while(i<j&&arrayOri[i]<=m) ++i;
        swap(arrayOri[i],arrayOri[j]);
    }//i=j && arrayOri[i]=m
    QucikSort(arrayOri,beg,i-1);//排左
    QucikSort(arrayOri,i+1,end);//排右
}