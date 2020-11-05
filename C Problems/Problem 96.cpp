//Problem 96
#include <iostream>
int main()
{
    int y, d, totDay = 0;
    int monDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::cin >> y >> d;
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        monDay[2]++;
    for (int i = 1; i <= 12; i++){
        totDay += monDay[i];
        if (d <= totDay){
            std::cout << i << " " << d - totDay+monDay[i];
            return 0;
        }
    }
}