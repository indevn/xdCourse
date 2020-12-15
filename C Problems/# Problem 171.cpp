#include <iostream>
#include <algorithm>
struct stu{
    int tim=0;
    int dex;
} info[101];

bool cmp(struct stu inf1,struct stu inf2){
    if(inf1.tim>inf2.tim) return 1;
    else return 0;
}

int main(){
    // int index[101]={0};
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        int inde;
        char tim1[6];
        char tim2[6];
        std::cin>>inde>>tim1>>tim2;

        info[inde].tim+=-(((tim1[0]-'0')*10+(tim1[1]-'0'))*60+((tim1[3]-'0')*10+(tim1[4]-'0')))
                        +(((tim2[0]-'0')*10+(tim2[1]-'0'))*60+((tim2[3]-'0')*10+(tim2[4]-'0')));
        info[inde].dex=inde;//save
    }

    std::sort(info+1,info+101,cmp);

    for(int i=1;info[i].tim!=0;i++)
        if(i!=n)
            std::cout<<info[i].dex<<" "<<info[i].tim<<std::endl;
        else
            std::cout<<info[i].dex<<" "<<info[i].tim;
    return 0;
}