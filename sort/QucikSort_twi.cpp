//Quick Sort (2020.9.16)
#include <iostream>
void swap(int &a,int &b);
void QuickSort(int a[],int left,int right);
int main(){
    int a[100],n;
    std::cin>>n;
    for(int i=1;i<=n;i++) std::cin>>a[i];
    QuickSort(a,1,n);
    for(int i=1;i<=n;i++) std::cout<<a[i];
    return 0;
}
void QuickSort(int a[],int left,int right){
    int lp=left,rp=right;
    int stdNum=a[lp];
    while(lp!=rp){
        while(a[rp]>=stdNum&&lp<rp) rp--;
        while(a[lp]<=stdNum&&lp<rp) lp++;
        if(lp<rp) swap(a[lp],a[rp]);
    }
    //When lp==rp:
    swap(a[left],a[lp]);
    QuickSort(a,left,lp-1);
    QuickSort(a,lp+1,right);
}
void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a-=b;
}