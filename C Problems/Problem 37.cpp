#include <iostream>
int a[1000]={-1};
int b[1000]={-1};
void BubbleSort(int arr[], int sta, int end)
{
    if(sta>=end) return;
    int tmp;
    for (int i = sta; i <= end-1; i++)
        for (int j = sta; j <= end - i; j++)
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
}
// void swap(int &a,int &b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
// void QuickSort(int arrayOri[],int beg,int end){
    
//     if(beg>=end) return;

//     //Divide
//     int m=arrayOri[beg];
//     int i=beg ,j=end;
//     while(i!=j){
//         while(j>i&&arrayOri[j]>=m) --j;
//         swap(arrayOri[i],arrayOri[j]);
//         while(i<j&&arrayOri[i]<=m) ++i;
//         swap(arrayOri[i],arrayOri[j]);
//     }//i=j && arrayOri[i]=m

//     QuickSort(arrayOri,beg,i-1);//排左
//     QuickSort(arrayOri,i+1,end);//排右
// }

int main()
{
    int ac = 0, bc = 0;

    //input
    int n, tmp;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> tmp;
        if (tmp % 2 == 0) //偶数
            b[++bc] = tmp;
        else
            a[++ac] = tmp;
    }

    //sort
    // if (ac > 0)
        // BubbleSort(a, 1, ac);
        BubbleSort(a,1,ac);
    // if (bc > 0)
        // BubbleSort(b, ac + 1, n);
        BubbleSort(b,1,bc);

    //output
    for (int i = 1; i <= n; i++)
    {
        if (i <= bc)
        {
            if (i == 1)
                std::cout << b[i];
            else
                std::cout << " " << b[i];
        }
        else
        {
            if (i == 1)
                std::cout << a[i];
            else
                std::cout << " " << a[i - bc];
        }
    }
    return 0;
}