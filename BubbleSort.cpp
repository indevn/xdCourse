//Bubble Sort
//2020.9.15 by indevn
#include <iostream>
int a[10]={1,2,3,4,5,6,9,8,7,10};
void BubbleSort(int arr[]);
void swap(int &a,int &b);
int main(){
    BubbleSort(a);
    for(int i=0;i<9;i++) std::cout<<a[i]<<",";
    std::cout<<a[9];
    return 0;
}
void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a-=b;
}
void BubbleSort(int arr[]){
    //get the element's number of the array "arr[]"
    // int arraysize=sizeof(a)/sizeof(int);
    int arraysize=10;
    for(int i=0;i<=arraysize;i++)//遍历arr from 0 to the last position
    for(int j=i++;j<=arraysize;j++)//transfer to the next position
    if(arr[i]<arr[j]) swap(arr[i],arr[j]);//rewrite the pos
    }