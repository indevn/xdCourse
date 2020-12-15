// 请实现一个铁路购票系统的简单座位分配算法，来处理一节车厢的座位分配。
//     假设一节车厢有20排、每一排5个座位。为方便起见，我们用1到100来给所有的座位编号，第一排是1到5号，第二排是6到10号，依次类推，第20排是96到100号。
// 　　购票时，一个人可能购一张或多张票，最多不超过5张。如果这几张票可以安排在同一排编号相邻的座位，则应该安排在编号最小的相邻座位。否则应该安排在编号最小的几个空座位中（不考虑是否相邻）。
// 假设初始时车票全部未被购买，现在给了一些购票指令，请你处理这些指令，输出购票结果。
// 例如：若一次购买2，5，4，2张票得到的购票结果为：
//     1) 购2张票，得到座位1、2。
//     2) 购5张票，得到座位6至10。
//     3) 购4张票，得到座位11至14。
//     4) 购2张票，得到座位3、4。

#include <stdio.h>
#define N 20
#define m 5
typedef struct seat{
	int num;
	int val;
}Seat;
typedef struct Group{
	Seat seat[m];
	int remainder;
}Seat_Group;
void Initial_Seat(Seat_Group G[],int GroupNum, int seat_num );
int main()
{
	int n,i,j,k;
	int mark = 0;   //标记已已经排完的组号 
	Seat_Group G[N];
	Initial_Seat(G,N,m);
	scanf("%d",&n);
	int a[n];
	for( i = 0; i < n; i ++)
	{
		scanf("%d",&a[i]);
	}
	for( i = 0; i < n; i ++)
	{
		int flag = 1;      //指示是否找到组 
		for( j = 0; j < N && flag; j ++)  //寻找相邻的座位 
		{
			if(a[i] <= G[j].remainder)
			{
				flag = 0;
				int cnt = 0;
				for( k = 0; k < m; k++)
				{
					if(G[j].seat[k].val == 0)
					{
						cnt ++;
						G[j].seat[k].val = 1;
						if(cnt == 1)
						{
							printf("%d",G[j].seat[k].num);
						}
						else{
							printf(" %d",G[j].seat[k].num);
						}
					}
					if(cnt == a[i])
					{
						a[i] = 0;    //表示分配完了 
						G[j].remainder -= cnt;
						break;
					}
				}
			}
		}
		if(a[i] != 0)                //无法相邻的情况 
		{
			for( j = mark; j < N && a[i]; j ++)
			{
				if(G[j].remainder != 0)
				{
					for(k = 0; k < m && a[i]; k ++)
					{
						if(G[j].seat[k].val == 0)
						{
							G[j].seat[k].val = 1;
							G[j].remainder --;
							printf("%d ",G[j].seat[k].num);	
							a[i] --;
						}	
					}
			    }
			}	
			mark = j - 1; 
		} 
		if(i != n )
		{
			printf("\n");	
		}
	} 
	return 0;
}
void Initial_Seat(Seat_Group G[],int GroupNum, int seat_num )
{
	int i,j;
	for( i = 0; i < GroupNum; i ++)
	{
		G[i].remainder = 5;
		for( j = 0; j < seat_num; j ++)
		{
			G[i].seat[j].num = 5*i+j+1;
			G[i].seat[j].val = 0;
		}
	}
}
