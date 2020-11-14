#include <iostream>

int main()
{
    int n, rst;
    std::cin >> n;
    rst=n;
    do
    {
        n = rst;
        rst = 0;
        while (n > 0)
        {
            rst += n % 10;
            n /= 10;
        }
    } while (rst >= 10);

    std::cout << rst;
}