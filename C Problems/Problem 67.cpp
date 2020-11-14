#include <iostream>
int a[101] = {0};
int main()
{
    int n, k, tmp;
    int mark = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        if (tmp == k)
        {
            a[i]++;
            mark++;
        }
    }

    //output
    if (mark == 0)
        std::cout << -1;
    if (mark == 1)
    {
        for (int i = 1; i <= n; i++)
            if (a[i])
                std::cout << i;
    }
    if (mark >= 2)
    {
        mark = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i])
            {
                if (mark==0){
                    std::cout << i;
                    mark++;
                }
                else
                {
                    std::cout << " " << i;
                }
            }
        }
    }
    return 0;
}