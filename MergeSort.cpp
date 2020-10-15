//Merge Sort | Divide and Conquer
//2020.9.2 by indevn

#include <iostream>
using namespace std;

int arrayOri[12]={-9,2,3,4,5,6,7,8,1,10,11,12};
int arrayTem[12];
void Merge(int ori[],int begPos,int midPos,int endPos,int tem[]);
void MergeSort(int ori[],int begPos,int endPos,int tem[]);
int main(){
    int arraySize=sizeof(arrayOri)/sizeof(int);
    //Problem,begining pos,ending pos(the quantity of element),temp
    MergeSort(arrayOri,0,arraySize-1,arrayTem);
    for(int i=0;i<arraySize;++i) cout<<arrayTem[i]<<" ";
    cout<<endl;
    return 0;
}
void MergeSort(int ori[],int begPos,int endPos,int tem[]){
    if(begPos<endPos){
        int midPos=begPos+(endPos-begPos)/2;
        //Recursion:Divide
        MergeSort(ori,begPos,midPos,tem);
        MergeSort(ori,midPos+1,endPos,tem);
        //Merge:Conquer
        Merge(ori,begPos,midPos,endPos,tem);
    }
}
void Merge(int ori[],int begPos,int midPos,int endPos,int tem[]){
    int pTem=0, p1=begPos,p2=midPos+1;
    while(p1<=midPos&&p2<=endPos){//尚未遍历完时，比大小存入临时元素
    if(ori[p1]<ori[p2]) tem[pTem++]=ori[p1++];
    else tem[pTem++]=ori[p2++];
    }
    while(p1<=midPos) tem[pTem++]=ori[p1++];//前半未遍历完
    while(p2<=endPos) tem[pTem++]=ori[p2++];
    for(int i=0;i<endPos-begPos+1;++i) ori[begPos+i]=tem[i];
}