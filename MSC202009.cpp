// MSC Work | XDMSC 二面
// 2020.9.28 by indevn

// Change Log:
// #1003
// - 考虑到正常情况下的数据范围与计算机性能，去除堆排序部分与对最高次数的输入要求，优化了用户体验；
// - 增加了对系数和指数为0的情况的特判，并允许了负数的输入；
// - 提高了归并排序部分的运行效率。
// - 增强了鲁棒性(差点segmention fault了…)
// - 增强了代码可读性与可复用性
// 
// #0928
// - 初步实现

// 该程序可将用户输入的单项式进行合并同类项，并按次数由大到小进行排序，输出一个多项式。
// **允许的数据范围：**
// 每次将最多只允许输入40个单项式。
// **允许的输入格式**
// 首先键入即将输入的单项式数量与所有多项式中的最高次次数，用空格间隔。
// 此后按照“系数 次数”的方式输入单项式，每个单项式占一行。
// **简单说明**
// 当所有单项式中最高次小于等于20时，运用堆排序的类似思想通过数组进行储存与输出，拥有线性时间复杂度。
// 当所有单项式中最高次超过20时，为避免声明过大的数组占据过多空间，通过结构体对于单项式中未知数的次数和次方数进行储存，并在归并排序后进行输出。

// 源码将只用于XDMSC的二面。

#include <iostream>
using namespace std;
struct book{
    int coef;//系数
    int expo;//指数
};

void SpecOutput(int coef,int expo);
void Merge(struct book *ori,int begPos,int midPos,int endPos,struct book *tem);
void MergeSort(struct book *ori,int begPos,int endPos,struct book *tem);
void Solu(int n);

struct book inInfo[41]={{0,0}};
struct book ouInfo[41]={{0,0}};
struct book tem[41];

int main(){
    int n;
    cout<<"请输入待计算的单项式数量："<<endl;
    cin>>n;
    cout<<"请按“x的系数 x的次数”的格式输入单项式，每个单项式用回车分开"<<endl;

    Solu(n);//结构体数组记录&归并排序，整理到输出数组中

    return 0;
}
void Solu(int n){

    for(int i=0;i<n;i++)
        cin>>inInfo[i].coef>>inInfo[i].expo;
    
    MergeSort(inInfo,0,n-1,tem);// sort
    
    // clas
    int lastPos=-100000;
    int mark=0;//合法标记
    int j=0;
    for(int i=40;i>=0;i--){//从到大小开始检索
        // if(mark==n)//合法性识别
        //     break;
        if(lastPos!=inInfo[i].expo||mark==0){
            if(mark!=0) j++;
            mark++;
            ouInfo[j]=inInfo[i];
            lastPos=inInfo[i].expo;
            continue;
        }
        if(lastPos==inInfo[i].expo){
            ouInfo[j].coef+=inInfo[i].coef;
            mark++;
        }
    }

    // output
    int isFirst=1;
    for(int i=0;i<=40;i++){
        if(ouInfo[i].coef==0)
            continue;
        if(isFirst==1){
            isFirst=0;
            cout<<"result: ";
            SpecOutput(ouInfo[i].coef,ouInfo[i].expo);
        }
        else{
            if(ouInfo[i].coef >0) cout<<"+";
            SpecOutput(ouInfo[i].coef,ouInfo[i].expo);
        }
    }
}
void SpecOutput(int coef,int expo){
    if(coef==0) return;
    if(coef==1){
        if(expo==0){
            cout<<coef;
            return;
        }
        if(expo>0) cout<<"x^"<<expo;
        else cout<<"x^("<<expo<<")";
        return;
    }
    else{
        if(expo==0){
            cout<<coef;
            return;
        }
        if(expo>0) cout<<coef<<"x^"<<expo;
        else cout<<coef<<"x^("<<expo<<")";
        return;
    }
}
void MergeSort(struct book *ori,int begPos,int endPos,struct book *tem){
    if(begPos<endPos){
        int midPos=begPos+(endPos-begPos)/2;
        //Recursion:Divide
        MergeSort(ori,begPos,midPos,tem);
        MergeSort(ori,midPos+1,endPos,tem);
        //Merge:Conquer
        Merge(ori,begPos,midPos,endPos,tem);
    }
}
void Merge(struct book *ori,int begPos,int midPos,int endPos,struct book *tem){
    int pTem=0, p1=begPos,p2=midPos+1;
    while(p1<=midPos&&p2<=endPos){//尚未遍历完时，比大小存入临时元素
        if(ori[p1].expo<ori[p2].expo)
            tem[pTem++]=ori[p1++];
        else
            tem[pTem++]=ori[p2++];
    }
    while(p1<=midPos)
        tem[pTem++]=ori[p1++];//前半未遍历完
    while(p2<=endPos)
        tem[pTem++]=ori[p2++];
    for(int i=0;i<endPos-begPos+1;++i)
        ori[begPos+i]=tem[i];
}
//shit mountain...