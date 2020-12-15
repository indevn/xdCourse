#include<iostream>
#include<algorithm>
#include<cstdlib>
struct stuInfo{
    int scoTot;
    int scoEng;
    char num[21];
}a[201];

bool cmp(stuInfo stu1,stuInfo stu2){
    if(stu1.scoTot>stu2.scoTot) return 1;
    if(stu1.scoTot<stu2.scoTot) return 0;
    
    if(stu1.scoEng>stu2.scoEng) return 1;
    if(stu1.scoEng<stu2.scoEng) return 0;

    stu1.num[0]='0';
    stu1.num[1]='0';
    stu2.num[0]='0';
    stu2.num[1]='0';
    if(atoi(stu1.num)<atoi(stu2.num)) return 1;
    else return 0;
}

int main(){
    int m,n;
    std::cin>>m>>n;
    for(int i=1;i<=m;i++)
        std::cin>>a[i].num>>a[i].scoTot>>a[i].scoEng;
    std::sort(a+1,a+m+1,cmp);
    //sort的默认属性：以不降序排序范围 [first, last) 中的元素。不保证维持相等元素的顺序。
// std::cout<<std::endl;
    for(int i=1;i<=n;i++)
    {
        std::cout<<a[i].num<<" "<<a[i].scoTot<<" "<<a[i].scoEng;
        if(i!=n) std::cout<<std::endl;
    }

    return 0;
}

//C89