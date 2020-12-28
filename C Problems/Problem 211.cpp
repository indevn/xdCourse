#include <stdio.h>

int main(void)
{
    int stu[5][4] = {0};
    int i, j, t = 0, fals = 0, m = 0, well = 0;
    float ave = 0.0;

    for (i = 0; i < 5; i++)
    {
        int m=0;
        int s = 0;
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &stu[i][j]);
            if (stu[i][j] < 60)
                t++;
            if (stu[i][j] > 85)
                m++;
            s += stu[i][j];
        }

        //t:fail the course
        if (t >= 2)
            fals++;

        ave = s / 4.0;

        if (m == 4 || ave > 90.0)
            well++;
    }

    int sum = 0;
    float aver = 0.0;
    for (i = 0, j = 0; i < 5; i++)
        sum += stu[i][0];
    aver = sum / 5.0;
    printf("%.1f %d %d", aver, fals, well);

    return 0;
}
