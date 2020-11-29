//Bubble Sort (2020.9.16)
#include <iostream>
void swap(int &a, int &b);
int main()
{
    int a[100], t, n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> a[i];

    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j <= n - i; j++)
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);

    for (int i = 1; i <= n; i++)
        std::cout << a[i];
    return 0;
}
void swap(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}