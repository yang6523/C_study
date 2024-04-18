////多层循环
////九九乘法表
//#include<stdio.h>
//int main()
//{
//    int i,j,t;
//    for(i=1;i<=9;i++)
//    {
//        for(j=1;j<=i;j++)
//        {
//            t = i*j;
//            printf("%d*%d=%d",j,i,j*i);
//            if(j<i)
//                if(t<10) printf("  ");
//                else printf(" ");
//        }
//        printf("\n");
//    }
//    
//    
//    return 0;
//}
////区间内素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a,b,n,i,f,k;
//    scanf("%d%d",&a,&b);
//    k=0;
//    for(n=a;n<=b;n++)
//    {
//        //n是素数就输出
//        f=1;
//        for(i=2;i<=sqrt(n);i++)
//            if(n%i==0)
//            {
//                f=0;
//                break;
//            }
//        if(f==1)
//        {
//            ++k;
//            if(k>=2) printf(",");
//            printf("%d",n);
//        }
//    }
//    return 0;
//}
////素数个数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a,b,c,d,k,m;
//    scanf("%d%d",&a,&b);
//    k=0;
//    for(c=a;c<=b;c++)
//    {
//        m=1;
//        for(d=2;d<=sqrt(c);d++)
//        {
//            if(c%d==0)
//            {
//                m=0;
//            }
//        }
//        k=k+m;
//    }
//    printf("%d",k);
//    return 0;
//}
//


