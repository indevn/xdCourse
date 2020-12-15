#include <iostream>
#include <cstdio>
#include <algorithm>
void swap(int &a,int &b){
    a+=b;
    b=a-b;
    a-=b;
}
int main(){
    int a[50]={-2};
    int b[8][8];

    int m,n;
    std::cin>>m>>n;

    int leng=m*n;

    for(int i=leng-1;i>=0;i--)
        std::cin>>a[i];
    
    // //sort
    // for(int i=0;i<=leng;i++)
    //     for(int j=0;j<=leng-i;j++)
    //         if(a[j]>a[j+1]) swap(a[j],a[j+1]);
    std::sort(a,a+leng-1);

    int mark=0;
    int i=1,j=m;

    //奇数行从右往左，i=1为界；偶数行从左往右，i=n为界
    while(true){
        //move(i,j)（按笛卡尔坐标系）
        b[i][j]=a[mark++];
        if(i%2==1)//若为奇数
        {
            if(j==1) i++;
            else j--;
        }else//若为偶数
        {
            if(j==n) i++;
            else j++;
        }
            if(mark>=leng) break;//截至条件
        }

    // std::cout<<std::endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)
            j!=n?
            printf("%3d ",b[i][j]):
            i!=m?
            printf("%3d\n",b[i][j]):
            printf("%3d",b[i][j]);
    }
    
}