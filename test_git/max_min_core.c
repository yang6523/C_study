#include <stdio.h>
int main()
{
    int min=0,max=0,sum = 0;
    long int a[20]={0};
    double answer = 0.0;
    //װ����
    for (int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    //����С
    min = a[0];
    for (int j=1;j<20;j++)
    {
        if(min >= a[j])
        {
            min = a[j];
        }
        
    }
    //�����
    max = a[0];
    for (int k=1;k<20;k++)
    {
        if(max <= a[k])
        {
            max = a[k];
        }
        
    }
    //���
    for (int m=0;m < 20;m++)
    {
        sum  = sum+a[m];
    }
    //��
    answer = (sum - max - min)/18.0;
	printf("ȥ��һ����߷�:%d��\n",max);
	printf("ȥ��һ����ͷ�:%d��\n",min);
	printf("8��ѡ�����÷�:%.3f��",answer);
    return 0;
}


