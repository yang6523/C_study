//// 多分支
////整数符号
//#include<stdio.h>
//int main(){
//    int a;
//    scanf("%d",&a);
//    if(a>0)   printf("+");
//    if(a==0)  printf("0");
//    if(a<0)   printf("-");
//    return 0;
//}
// 
////超市促销
//#include<stdio.h>
//int main(){
//    double g,y;
//    scanf("%lf",&g);
//    if(g<5)         y=1.8*g;
//    if(g>=5&&g<10)  y=1.6*g;
//    if(g>=10&&g<20) y=1.4*g;
//    if(g>=20)       y=1.0*g;
//    printf("%lf",y);
//    return 0;
//}
////一元二次方程
//#include<math.h>
//int main(){
//    double a,b,c,deta,x1,x2;
//    scanf("%lf %lf %lf",&a,&b,&c);
//    deta=b*b-4*a*c;
//    if(deta>0){
//        x1=(-b+sqrt(deta))/(2*a);
//        x2=(-b-sqrt(deta))/(2*a);
//        printf("x1=%lf\n" , x1);
//        printf("x2=%lf\n" , x2);
//    }
//    else if(deta==0){  
//        printf("x1=x2=%lf" ,(-b)/(2*a));
//    }
//    else{
//        printf("This equation has no real root!");
//}
//    return 0;
//}
////三角形
//#include<stdio.h>
//int main()
//{
//    int a,b,c,max,mid,min;
//    scanf("%d%d%d",&a,&b,&c);
//    max = (a>b?a:b)>c?(a>b?a:b):c;
//    min = (a<b?a:b)<c?(a<b?a:b):c;
//    if(a+b>c&&a+c>b&&b+c>a)
//    {
//        if ((a>b&&a<c)||(a>c&&a<b)){
//            mid = a;
//    }
//        else if((b>a&&b<c)||(b>c&&b<a)){
//            mid = b;
//    }
//        else{
//            mid = c;
//    }
//        if(min*min+mid*mid==max*max) printf("Right triangle");
//        else if(min*min+mid*mid>max*max) printf("Acute triangle");
//        else if(min*min+mid*mid<max*max) printf("Obtuse triangle");
//    }
//    else
//    {
//        printf("Not triangle");
//    }
//    return 0;
//}
////计算邮资
//#include<stdio.h>
//int main()
//{
//    int g,k,basic=8,add=5,cost;
//    char ch;
//    scanf("%d %s",&g,&ch);
//    if (g<1000)
//    {
//        if(ch=='y') printf("%d",basic+add);
//        else if(ch=='n') printf("%d",basic);
//    }
//    else if (g>1000)
//    {
//        k = (g-1000)/500 == 0?1:(g-1000)/500;
//        cost = k*4+8;
//        if (ch=='y') printf("%d",cost+add);
//        else if (ch=='n') printf("%d",cost);
//    }
//    return 0;
//}
////骑车与走路
//#include <stdio.h>
//
//int main()
//{
//    int l;
//    scanf("%d",&l);
//    if (l>100) printf("Bike");
//    else if (l<100) printf("Walk");
//    else if (l==100) printf("All");
//	return 0;
//}
//
////判断能否被3，5，7整除
//#include <stdio.h>
//
//int main()
//{
//    int x,a=3,b=5,c=7;
//    scanf("%d",&x);
//    if (x%3==0&&x%5==0&&x%7==0)
//    {
//        printf("3 5 7");
//    }
//    else if(x%3==0&&x%5==0)
//    {
//        printf("3 5");
//    }
//    else if(x%3==0&&x%7==0)
//    {
//        printf("3 7");
//    }
//    else if(x%5==0&&x%7==0)
//    {
//        printf("5 7");
//    }
//
//
//
//    else if(x%3==0&&x%5!=0&&x%7!=0)
//    {
//        printf("3");
//    }
//    else if(x%3!=0&&x%5==0&&x%7!=0)
//    {
//        printf("5");
//    }
//    else if(x%3!=0&&x%5!=0&&x%7==0)
//    {
//        printf("7");
//    }
//
//
//
//    else if(x%3!=0&&x%5!=0&&x%7!=0)
//    {
//        printf("n");
//    }
//	return 0;
//}
////冰天雪地金山银山
//#include<stdio.h>
//int main()
//{
//    int age,cost;
//    char sex,ch;
//    scanf("%d %c %c",&age,&sex,&ch);
//    if(age<=11 || ch=='C'||ch=='X'||age>=70&&sex=='M'||age>=65&&sex=='F')
//    //免费的情况
//        cost = 0;
//    else if(age>=12&&age<=18||age>=60&&age<=69&&sex=='M'||age<=64&&age>=55&&sex=='F')
//    //付费的情况
//    {
//        cost = 120;
//    }
//    else
//    {
//        cost = 180;
//    }
//    printf("%d",cost);
//    return 0;
//}

