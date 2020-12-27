//Bubble Sort
//2020.9.15 by indevn
#include <iostream>
int a[10]={1,2,3,4,5,6,9,8,7,10};

void BubbleSort(int arr[],int arraysize);
void swap(int &a,int &b);
int main(){
    int arraysize=sizeof(a)/sizeof(int);
    BubbleSort(a,arraysize);
    for(int i=0;i<9;i++) std::cout<<a[i]<<",";
    std::cout<<a[9];
    return 0;
}
void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a-=b;
}
void BubbleSort(int arr[],int arraysize){
    for(int i=0;i<=arraysize;i++)
        for(int j=0;j<=arraysize-i;j++)
            if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
}