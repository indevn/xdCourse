// XDOJ - 元素放置
// 描述：
// 定义一个一维整形数组num[50]，输入正整数m、n（2≤m≤n≤7），输入一个mn整形矩阵（值小于100），编写函数place()完成矩阵元素S型放置，从小到大排列，使用指针完成地址传递，主函数完成数组输入和输出。
// 时间限制：1
// 内存限制：10000
// 类别：1
// 输入说明：
// 输入正整数m和n（2≤m≤n≤7），输入一个mn整形矩阵，含m*n个元素（值小于100）。
// 输出说明：
// 格式输出：按行输出处理后的矩阵，S型排列，%3d，每行换行，最后一行不换行。
// 输入样例：
// 3 3
// 15 14 21
// 34 22 37
// 40 16 50
// 输出样例：
// 16 15 14
// 21 22 34
// 50 40 37
#include<stdio.h>
int main()
{
	void place(int *p,int a,int b);
	int num[50],*p1,m,n;
	scanf("%d%d",&m,&n);
	for(p1=num;p1<(num+m*n);p1++)
	scanf("%d",p1);
	p1=num;
	place(p1,m,n);
	return 0;
 } 
 
void place(int *p,int a,int b)
 {
 	int i,j,t,flag=1;
	for(i=0;i<a*b-1;i++) 
    for(j=0;j<a*b-1-i;j++) 
	if(*(p+j+1)<*(p+j)) 
    {
		t=*(p+j);
		*(p+j)=*(p+j+1);
		*(p+j+1)=t;
	}
	for(i=0;i<a;i++)
	{
		if(flag==1)
		{
			flag=0;
			for(j=b*(i+1)-1;j>=b*i;j--)
			{
				printf("%3d",*(p+j));	
				if(j==b*i && i!=a-1) printf("\n");
			}
		}
		else
		{
			flag=1;
			for(j=b*i;j<b*(i+1);j++)
			{
				printf("%3d",*(p+j));
				if(j==b*(i+1)-1 && i!=a-1) printf("\n");
			}
		}
	}
 }