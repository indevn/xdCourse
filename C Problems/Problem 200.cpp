#include <iostream>
int main()
{
    int p;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cin >> p;
    if (p >= 9)
    {
        std::cout << a[0];
        for (int i = 1; i < 10; i++)
            std::cout << " " << a[i];
        return 0;
    }
    int mark = 0;
    for (int i = p; i <= 9; i++)
    {
        if (!mark){
            std::cout << a[i];
            mark++;
        }else
            std::cout << " " << a[i];
    }
    for(int i=0;i<p;i++){
            std::cout << " " << a[i];
    }
    return 0;
}