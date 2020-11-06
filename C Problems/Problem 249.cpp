// Problem 249

// 分解质因数
// 题目描述：
// 每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，
// 这几个素数就都叫做这个合数的质因数。编写程序将一个正整数分解质因数

// 输入描述：
// 输入一个正整数n（2<n<1000）

// 输出描述：
// 形如a*b*b*c，质因数按照从小到大的顺序排列

// 输入样例：
// 90

// 输出样例：
// 2*3*3*5

//依题意，按理解，是质数且为因数，则必然满足条件（吧）
//那么的话，不妨这样：
#include <iostream>

int a[1000] = {0};

int main()
{
    int n,tmp;
    std::cin >> n;

    //is prime
    for (int i = 2; i <= n; i++)
    {
        //判断是否为因数，若是，则判断其次方是否为因数
        tmp=n;
        while(tmp % i == 0){
            a[i]++;
            tmp/=i;
        }            
        //判断是否为合数，若是，状态改变
        for (int j = 2; i * j <= n; j++)
            a[i * j]=-1000;
        
    }

    int mark = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
        {
            
            for(int m=1;m<=a[i];m++){
                if (mark++)
                    std::cout << "*";
                std::cout << i;
            }
        }
    }
    return 0;
}