#include <iostream>
int a[101][101];
int b[101 * 101];
int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            std::cin >> a[i][j];
    //a[x][y]

    int x = 1, y = 1;
    int mk = 1;
    b[mk] = a[x][y];
    while (x != n || y != n)
    {
        int round = (x + y - 1);
        if (round % 2 == 1) //斜行为奇数时
        {
            if (x == 1 && round < n)
                b[++mk] = a[x][++y];
            else if (y == n && round >= n)
                b[++mk] = a[++x][y];
            else
                b[++mk] = a[--x][++y];
        }
        else //斜行为偶数时
        {
            if (y == 1 && round < n)
                b[++mk] = a[++x][y];
            else if (x == n && round >= n)
                b[++mk] = a[x][++y];
            else
                b[++mk] = a[++x][--y];
        }
    }

    for (int i = 1; i <= n * n; i++)
    {
        i == n *n ? std::cout << b[i] : std::cout << b[i] << " ";
    }

    return 0;
}