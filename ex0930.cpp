//马踏过河卒
#include<iostream>
long long Move(long long x,long long y);
int mark[23][23]={{0}};
int main(){
    int n,m,cx,cy;
    std::cin>>n>>m>>cx>>cy;
    //终点(n,m) 马(cx,cy)
    int obs[9][2]={{0,0},{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-2,-1},{-1,-2}};
    int rx,ry;
    for(int i=0;i<=8;i++){
        rx=cx+obs[i][1];
        ry=cy+obs[i][2];
        if(rx>=0&&ry>=0) mark[rx][ry]=1;
    }
    std::cout<<Move(n,m);
}
long long Move(long long x,long long y){
    if(x<0||y<0) return 0;
    if(x<=23&&y<=23&&mark[x][y]==1) return 0;
    if(x==0&&y==0) return 1;
    return Move(x-1,y)+Move(x,y-1);
}