//YangHui_triangle
#include <stdio.h>
int main()
{
    int n = 0;
    scanf ("%d",&n);
    int arr[n][n];
    for (int i = 0;i < n;i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;

    }
    for (int i = 2;i < n;i++)
    {
        for (int j = 1;j < i;j++)
        {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    //以上处理出了杨辉三角的数组
    //现在处理输出部分
    for (int i = 0;i < n; i++)
    {
        for (int j = 0;j <=i;j++)
        {
            if (j > 0) printf(" ");
            printf ("%d",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

