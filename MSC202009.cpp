// MSC Work
// 2020.9.28 by indevn
#include<iostream>
using namespace std;
struct book{
    int coef,expo;
};
void Merge(struct book *ori,int begPos,int midPos,int endPos,struct book *tem);
void MergeSort(struct book *ori,int begPos,int endPos,struct book *tem);
void lowPlan(int n,int m);
void highPlan(int n,int m);
int main(){
    int n,m;
    cout<<"请按“即将输入的单项式数量 所有单项式中最高次项的次数”输入数据："<<endl;
    cin>>n>>m;
    cout<<"请按“x的系数 x的次数”的格式输入单项式，每个单项式用回车分开"<<endl;

    if(m<=20) lowPlan(n,m);//最高次数较低时：堆排序思路
    else highPlan(n,m);//若次数较高：结构体数组记录&归并排序，整理到输出数组中
    return 1;
}
void highPlan(int n,int m){
        struct book inInfo[41]={{0,-1}};
        struct book ouInfo[41]={{0,0}};
        struct book tem[41];
        for(int i=0;i<n;i++) cin>>inInfo[i].coef>>inInfo[i].expo;
        MergeSort(inInfo,0,40,tem);
        
        int memTmp=0;
        int j=-1;
        for(int i=40;i>=0;i--){//从到大小开始检索
        if(inInfo[i].coef==0||inInfo[i].coef==-1) break;
        if(memTmp==inInfo[i].expo){
            ouInfo[j].coef+=inInfo[i].coef;
            continue;
        }
        j++;
        ouInfo[j]=inInfo[i];
        memTmp=inInfo[i].expo;
        }
        //print
        for(int i=0;i<=40;i++){
        if(ouInfo[i].coef==0) continue;
        if(i==0)
        ouInfo[i].coef==1?cout<<"result: x^"<<ouInfo[i].expo:cout<<"result: "<<ouInfo[i].coef<<"x^"<<ouInfo[i].expo;
        else if(ouInfo[i].expo==0) cout<<"+"<<ouInfo[i].coef;
        else        
        ouInfo[i].coef==1? cout<<"+x^"<<ouInfo[i].expo: cout<<"+"<<ouInfo[i].coef<<"x^"<<ouInfo[i].expo;
        }
}
void lowPlan(int n,int m){
            int a[21]={0};
        int mark=1;//格式标记：单项格式
        int trueTimes=0;
        //read
        int coef,expo;
        for(int i=0;i<n;i++){
            cin>>coef>>expo;
            a[expo]+=coef;
            if(trueTimes!=expo){
                trueTimes+=expo;//检测是否为多个齐次式相加
                if(trueTimes!=expo) mark=2;//若非多个其次式相加or单项，进行格式2输出
            }
        }
            //print
    for(int i=20;i>=0;i--){
        if(a[i]==0) continue;
        if(mark==1) {
            if(i==0) cout<<"result: "<<a[i];
            else a[i]==1?cout<<"result: x^"<<i:cout<<"result: "<<a[i]<<"x^"<<i;
            }
        if(mark>=2){
            if(mark==2){
               a[i]==1? cout<<"result: x^"<<i: cout<<"result: "<<a[i]<<"x^"<<i;
                    mark++;}
            else if(i==0) a[i]==1? cout<<"+1": cout<<"+"<<a[i];
            else  a[i]==1? cout<<"+x^"<<i: cout<<"+"<<a[i]<<"x^"<<i;
            }
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
    if(ori[p1].expo<ori[p2].expo) tem[pTem++]=ori[p1++];
    else tem[pTem++]=ori[p2++];
    }
    while(p1<=midPos) tem[pTem++]=ori[p1++];//前半未遍历完
    while(p2<=endPos) tem[pTem++]=ori[p2++];
    for(int i=0;i<endPos-begPos+1;++i) ori[begPos+i]=tem[i];
}
//shit mountain...