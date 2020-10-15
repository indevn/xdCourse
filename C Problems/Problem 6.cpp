//Problem 6: 数字排序
#include<iostream>

//version 1: BubbleSort
/*
int a[1001];
int b[1001];
void BubbleSort(int arr[],int sta,int arraysize);
void swap(int &a,int &b);
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a[i];//input
        if(a[i]/10==0) b[i]=a[i];
        else if(a[i]/100==0) b[i]=a[i]%10+(a[i]-(a[i]/100)*100)/10;
        else if(a[i]/1000==0) b[i]=a[i]%10+(a[i]-(a[i]/100)*100)/10+(a[i]-(a[i]/1000)*1000)/100;
        else b[i]=a[i]/1000+a[i]%10+(a[i]-(a[i]/100)*100)/10+(a[i]-(a[i]/1000)*1000)/100;
    }
    // int arraysize=sizeof(a)/sizeof(int);
    BubbleSort(b,0,n);
    int bindArr;
    //the array is already sorted from big to small
    for(int i=0;i<n-1;i++){
        bindArr=0;
        if(b[i]==b[i+1])
        for(int j=1;1;j++){
            if(b[i]==b[i+j]) bindArr=j+1;
            else{
                BubbleSort(a,i,bindArr);
                break;
            }            
        }
        std::cout<<a[i]<<" "<<b[i]<<std::endl;
    }
    std::cout<<a[n-1]<<" "<<b[n-1];
    return 0;
}
void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a-=b;
}
void BubbleSort(int arr[],int sta,int arraysize){//数组内容，起始位置，待处理长度
    for(int i=sta;i<=arraysize;i++)
    for(int j=sta;j<=arraysize-i;j++)
    if(arr[j]<arr[j+1]) {
        swap(arr[j],arr[j+1]);
        swap(a[j],a[j+1]);}
}
*/
//version 2: StackSort
int a;