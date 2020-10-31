//Problem 36

// 标题:
// 矩阵

// 类别:
// 数组
	
// 时间限制	
// 2S

// 内存限制	
// 10000Kb

// 问题描述	
// 请写一个程序，对于一个m行m列（2＜m＜20）的方阵，求其每一行、每一列及主、辅对角线元素之和，然后按照从大到小的顺序依次输出这些值。
// 注：主对角线是方阵从左上角到右下角的一条斜线，辅对角线是方阵从右上角到左下角的一条斜线。

// 输入说明	
// 输入数据的第一行为一个正整数m；
// 接下来为m行、每行m个整数表示方阵的元素。

// 输出说明	
// 从大到小排列的一行整数，每个整数后跟一个空格，最后换行。

// 输入样例	
// 4
// 15  8   -2   6
// 31  24  18  71
// -3  -9   27  13
// 17  21  38  69

// 输出样例	
// 159 145 144 135 81 60 44 32 28 27

#include <iostream>
using namespace std;

int a[21][21];
int opRst[50]={0};
int main(){
    //input
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)//row
    for(int j=1;j<=m;j++)//column
    {
        cin>>a[i][j];
        opRst[i]+=a[i][j];
        opRst[m+j]+=a[i][j];
        if(i==j) opRst[2*m+1]+=a[i][j];
        if(i==m-j+1) opRst[2*m+2]+=a[i][j];
    }
    //sort
    for(int i=1;i<=2*m+2;i++)
    for(int j=1;j<=2*m+2-i;j++)
    if(opRst[j]<opRst[j+1]){
        opRst[j]+=opRst[j+1];
        opRst[j+1]=opRst[j]-opRst[j+1];
        opRst[j]=opRst[j]-opRst[j+1];
    }
    for(int i=1;i<=2*m+2;i++) cout<<opRst[i]<<" ";
    return 0;
}