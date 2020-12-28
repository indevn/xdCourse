// #include <stdio.h>
// typedef struct dian
// {
// 	int n;
// 	int x1;
// 	int y1;
// 	int x2;
// 	int y2;
// } point;

// int main()
// {
// 	int N, M, m, i, j, t = 0;
// 	scanf("%d %d", &N, &M);
// 	point a[10], temp;
// 	for (i = 0; i < N; i++)
// 	{
// 		scanf("%d %d %d %d", &a[i].x1, &a[i].y1, &a[i].x2, &a[i].y2);
// 		a[i].n = i + 1;
// 	}

// 	int heng[50], zong[50];
// 	for (i = 0; i < M; i++)
// 	{
// 		scanf("%d %d", &heng[i], &zong[i]);
// 	}

// 	for (i = 0; i < M; i++)
// 	{
// 		m = 0;
// 		for (j = N - 1; j >= 0; j--)
// 		{
// 			if(i==1) 
// 			printf("aa");
// 			if (heng[i] <= a[j].x2 &&
// 				heng[i] >= a[j].x1 &&
// 				zong[i] <= a[j].y2 &&
// 				zong[i] >= a[j].y1	 )
// 			{
// 				printf("%d\n", a[j].n);
// 				m = 1;
// 				temp = a[j];
// 				for (t = N - 1; t > j; t--)//wrong!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 					a[t - 1] = a[t];

// 				a[N - 1] = temp;
// 			}
// 			if (m == 1)
// 				break;
// 		}
// 		if (m == 0)
// 			printf("IGNORED\n");
// 	}

// 	return 0;
// }
