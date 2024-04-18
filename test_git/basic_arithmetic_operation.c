////基本算术运算 
////勾股定理
//#include<stdio.h>
//int main()
//{
//    int n,a,b,c; 
//    scanf("%d",&n);
//    a=2*n+1;
//    b=2*n*(n+1);
//    c=b+1;
//    printf("(%d,%d,%d)",a,b,c);
//    return 0;
//}
////苹果装盘
//#include<stdio.h>
//int main()
//{
//    int x,y;
//    scanf("%d",&x);
//    y = (x+1)/2;
//    printf("%d",y);
//    return 0;
//}
////计算并联电阻的阻值
//#include<stdio.h>
//int main()
//{
//    float r1,r2,R;
//    scanf("%f %f",&r1,&r2);
//    R = 1/((1/r1)+(1/r2));
//    printf("%.2lf",R);
//    return 0;
//}
////三阶行列式
//#include<stdio.h>
//int main()
//{
//    int a1,a2,a3,b1,b2,b3,c1,c2,c3,m;
//    scanf("%d %d %d\n%d %d %d\n%d %d %d\n",&a1,&a2,&a3,&b1,&b2,&b3,&c1,&c2,&c3);
//    m = a1*b2*c3+a2*b3*c1+b1*c2*a3-a3*b2*c1-b1*a2*c3-a1*b3*c2;
//    printf("%d",m);
//    return 0;
//}
////球的表面积和体积
//#include<stdio.h>
//#define PI 3.14159265
//int main()
//{
//    double r,S,V;
//    scanf("%lf",&r);
//    S = 4*PI*r*r;
//    V = 1.3333333333333333*PI*r*r*r;
//    printf("%.2lf %.2lf",S,V);
//    return 0;
//}
////等差数列末项计算
//#include<stdio.h>
//int main()
//{
//    int a1,a2,an,n;
//    scanf("%d%d%d",&a1,&a2,&n);
//    an = a1+(n-1)*(a2-a1);
//    printf("%d",an);
//    return 0;
//}
//// 三位数减肥
//#include<stdio.h>
//int main()
//{
//    char a,b,c;
//    scanf("%c%c%c",&a,&b,&c);
//    printf("%c%c",a,c);
//    return 0;
//}
////逆序后四位
//#include<stdio.h>
//int main()
//{
//    int num,x1,x2,x3,x4,a;
//    scanf("%d",&num);
//    x1 = num % 10;//得到个位数字
//    x2 = num % 100 / 10;//得到十位数字
//    x3 = num % 1000 / 100;//得到百位数字
//    x4 = num % 10000 / 1000;//得到千位数字
//    a = x1*1000+x2*100+x3*10+x4;
//    printf("%d",a);
//    return 0;
//}



