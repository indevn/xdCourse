// // 中间数 CCF20161201
// #include <iostream>
// int a[1001];
// int main(){
//     int n;
//     //input
//     std::cin>>n;
//     for(int i=1;i<=n;i++){
//         std::cin>>a[i];
//     }
//     //sort
//     for(int i=1;i<n;i++)
//     for(int j=1;j<=n-i;j++){
//         if(a[j]>a[j+1]){
//             int tmp=a[j];
//             a[j]=a[j+1];
//             a[j+1]=tmp;
//         }
//     }
//     //solve
//     int i=1,j=n;
//     // while(i<j){
//     //     while(a[i]==a[i+1])
//     //     i++;
//     //     while(a[j]==a[j-1])
//     //     j--;

//     //     i++;
//     //     j--;
//     // }
//     int mk1=0,mk2=0;
//     while(i<j&&a[i]!=a[j]){
//         while(a[i]!=a[i+1]){
//             i++;
//             mk1++;
//         }
//         while(a[j]!=a[j-1]){
//             j--;
//             mk2++;
//         }
//         i++;
//         j--;
//     }
//     if(a[i]==a[j]) std::cout<<a[i];
//     else std::cout<< -1;
// }

#include<bits/stdc++.h>
using namespace std;
 
const int N = 1010;
int q[N];
 
int main()
{
	int n;
	cin>>n;
	int b = 0, s = 0;
	int flag = 0;
	for(int i=1;i<=n;i++) cin>>q[i];
	for(int i=1;i<=n;i++)
	{
		b = 0, s = 0;
		for(int j=1;j<=n;j++)
		{
			if(q[i]<q[j])
				b++;
			else if(q[i]>q[j])
				s++;
		}
		if(s==b)
		{
			flag = i;
			break;
		}
	}
	if(flag) cout<<q[flag]<<endl;
	else cout<<-1<<endl;
	return 0;
 }