#include <stdio.h>
int main()
{
    int min=0,max=0,sum = 0;
    long int a[20]={0};
    double answer = 0.0;
    //装数据
    for (int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    //求最小
    min = a[0];
    for (int j=1;j<20;j++)
    {
        if(min >= a[j])
        {
            min = a[j];
        }
        
    }
    //求最大
    max = a[0];
    for (int k=1;k<20;k++)
    {
        if(max <= a[k])
        {
            max = a[k];
        }
        
    }
    //求和
    for (int m=0;m < 20;m++)
    {
        sum  = sum+a[m];
    }
    //答案
    answer = (sum - max - min)/18.0;
	printf("去掉一个最高分:%d分\n",max);
	printf("去掉一个最低分:%d分\n",min);
	printf("8号选手最后得分:%.3f分",answer);
    return 0;
}


