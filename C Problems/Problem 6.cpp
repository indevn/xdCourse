//Problem 6: 数字排序
#include <iostream>
int BitSum(int a)
{
    int sum=0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
void BubbleSort(int arr[], int sta, int arraysize);
void swap(int &a, int &b);

int arr[1001][2];
int main()
{
    int n;
    std::cin >> n;
    // int arraysize=sizeof(a)/sizeof(int);
    for (int i = 1; i <= n; i++)
    {
        std::cin >> arr[i][1];
        arr[i][2] = BitSum(arr[i][1]);
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n - i; j++)
            if (arr[j][2] < arr[j + 1][2])
            {
                swap(arr[j][1], arr[j + 1][1]);
                swap(arr[j][2], arr[j + 1][2]);
            }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n - i; j++)
            if ((arr[j][2] == arr[j + 1][2]) && (arr[j][1] > arr[j + 1][1]))
                swap(arr[j][1], arr[j + 1][1]);

    for (int i = 1; i <= n; i++)
        i == 1 ?
        std::cout << arr[i][1] << " " << arr[i][2] :
        std::cout << std::endl << arr[i][1] << " " << arr[i][2];
    
    // BubbleSort(arr,1,n);
    // for(int i=0;i<n-1;i++){
    //     bindArr=0;
    //     if(b[i]==b[i+1])
    //     for(int j=1;1;j++){
    //         if(b[i]==b[i+j]) bindArr=j+1;
    //         else{
    //             BubbleSort(a,i,bindArr);
    //             break;
    //         }
    //     }
    //     std::cout<<a[i]<<" "<<b[i]<<std::endl;
    // }
    // std::cout<<a[n-1]<<" "<<b[n-1];
    return 0;
}
void swap(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}