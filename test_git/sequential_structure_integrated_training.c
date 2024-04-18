////顺序结构综合训练
////计算分数的浮点数值
//#include<stdio.h>
//int main()
//{
//    double a,b,m;
//    scanf("%lf%lf",&a,&b);
//    m = a/b;
//    printf("%.9lf",m);
//    return 0;
//}
////日期格式强迫症
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//    int y,m,d;
//    char a_a,data[11];
//    scanf("%s",data);
//    sscanf(data,"%d%c%d%c%d",&y,&a_a,&m,&a_a,&d);
//    if(y < 100)
//    {
//        y += 1900;
//    }
//    printf("%04d-%02d-%02d",y,m,d);
//    return 0;    
//}
////辛巳蛇宝男
///*
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[100];
//    char a[4]="YES";
//    char b[4]="NO";
//	scanf("%s",str);
//	int num = str[16] - '0';
//	printf("%s",num%2?a:b);
//	return 0;
//}
//*/
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc ,char*argv[]){
//    long int a;
//    char b,c;
//    scanf("%ld%c%c",&a,&b,&c);
//    while(a/10%10==0)
//        {printf("YES");
//        return 0;}
//    while(a/10%10%2==0)
//        {printf("NO");
//        return 0;}
//        while(a/100000000%10000!=2002&&a/100000000%10000!=2001)
//        {
//            printf("NO");
//            return 0;
//        }
//        while(a/100000000%10000==2002)
//        {
//            while(a/1000000%100>=10)
//            {
//                    printf("NO");
//                    return 0;
//                }
//        while(a/1000000%10>2)
//        {
//            printf("NO");
//            return 0;
//        }
//        while(a/1000000%10==2 && a/10000%100000%100>=11)
//        {
//            printf("NO");
//            return 0;
//        }
//        break;
//        }
//        while(a/100000000%10000==2001)
//        {
//            while(a/1000000%100>=10)
//            {printf("YES");
//            return 0;}
//            while(a/1000000%10==1&&a/10000%100000%100<24)
//            {
//                printf("NO");
//                return 0;
//            }
//            break;
//    }
//    printf("YES");
//}
////捣蛋的乘法
//#include <stdio.h>
//
//int main ()
//{
//	int a,b,m,x,y,n,answer,a1,a2;
//	scanf("%d*%d",&a,&b);
//    m = a%1000/100;
//    n = a%10;
//    x = b/1000%10;
//    y = b/10%10;
//
//    a1 = m*10+n;
//    a2 = x*10+y;
//
//    answer = a1*a2;
//    printf("%d*%d=%d",a1,a2,answer);
//    return 0;
//}

