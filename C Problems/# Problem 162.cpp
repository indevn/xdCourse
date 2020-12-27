// // 有一说一我没看懂这矩阵是怎么乘的
// #include <iostream>
// int main(){
//     int a[3][4];
//     int b[4][3];
//     for(int i=1;i<=2;i++)
//         for(int j=1;j<=3;j++){
//             std::cin>>a[i][j];
//         }
//     for(int i=1;i<=3;i++)
//         for(int j=1;j<=2;j++)
//             std::cin>>b[i][j];

// }
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[2][3];
    int b[3][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];
    int c[2][2] = {0};
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
                c[k][i] += a[k][j] * b[j][i];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%5d ", a[i][j]);
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%5d ", b[i][j]);
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%5d ", c[i][j]);
        cout << endl;
    }
    return 0;
}