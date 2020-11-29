// Binary Search | 二分查找
int BinarySearch(int a[],int size,int p){
    int L=0;
    int R=size-1;
    while(L<=R){
        int mid=L+(R-L)/2;
        if(p==a[mid]) return mid;
        else if(p>a[mid]) L=mid+1;
        else R=mid-1;
    }
    return -1;
}
int LowerBround(int a[],int size,int p){
    int L=0,R=size-1;
    int result=-1;
    while(L<=R){
        int mid=L+(R-L)/2;
        if(a[mid]>=p) R=mid-1;
        else{
            result=mid;
            L=mid+1;
        } 
    }
    return result;
}