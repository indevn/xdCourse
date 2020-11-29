// Problem: Lake Counting (POJ2386)

// Description:
// 由于近期的降雨，雨水汇集在农民约翰的田地不同的地方。
// 我们用一个NxM(1<=N<=100;1<=M<=100)网格图表示。每个网格中有水('W') 或是旱地('.')。
// 一个网格与其周围的八个网格相连，而一组相连的网格视为一个水坑。
// 给出约翰田地的示意图，确定当中有多少水坑。

// Sample Input:
// 10 12
// W........WW.
// .WWW.....WWW
// ....WW...WW.
// .........WW.
// .........W..
// ..W......W..
// .W.W.....WW.
// W.W.W.....W.
// .W.W......W.
// ..W.......W.

#include <iostream>
int field[101][101] = {{0}};
int move[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
int N, M;
int nx, ny;

void dfs(int x, int y);
int main()
{
    //input
    char tmp;
    std::cin >> N >> M;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
        {
            std::cin >> tmp;
            if (tmp == 'W')
                field[i][j]++;
        }
        
    int res = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            if (field[i][j])
            {
                dfs(i, j);
                res++;
            }

    std::cout << res;
    return 0;
}
void dfs(int x, int y)
{
    //此时有field[x][y]==1
    field[x][y]--;//归0
    for (int i = 0; i < 8; i++)
    {
        nx = x + move[i][1];
        ny = y + move[i][2];
        if (nx > 0 && nx <= N && ny > 0 && ny <= M)
            if (field[nx][ny])
                dfs(nx, ny);
    }
    return;
}