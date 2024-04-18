////循环
////从1加到N的和
//#include <stdio.h>
//int main()
//{
//    int n,s,i;
//    scanf("%d",&n);
//    s = 0;
//    for(i=1;i<=n;i++){
//        s = s+i;
//    }
//    printf("%d",s);
//    return 0;
//}
//// 找奇数(输出奇数)
//#include <stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        if(i%2==1){
//            if (i>1) printf(",");
//            printf("%d",i);
//        }
//    }
//    return 0;
//}
//// 找约数(输出约数)
//#include <stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        if(n%i==0){
//            printf("%d",i);
//            if (i<n) printf(" ");
//        }
//    }
//    return 0;
//}
////素数判断
//#include <stdio.h>
//int main()
//{
//    int a,b,c,i;
//    scanf("%d",&a);
//    b=0;
//    for(i=1;i<=a;i++){
//        if(a%i==0)
//            b++;
//    }
//    if(b==2){
//        printf("YES");
//    }
//    else
//        printf("NO");
//    return 0;
//}
//// 乘方计算
//#include <stdio.h>
//int main()
//{
//    int a,n,i,result=1;
//    scanf("%d %d",&a,&n);
//    for(i=1;i<=n;i++){
//        result *= a;
//    }
//    printf("%d",result);
//    return 0;
//}
////神奇的迭代
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//    int n,i=0;
//    double x = 99999999;
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//        x = sqrt(x+2);
//    }
//    printf("x[%d]=%.10f",n,x);
//    return 0;
//}
///*
//int main()
//{
//    double x = 9999999.0;
//    int n;
//    double epsilon = 1e-10; 
//    scanf("%d",&n);
//    for (int i = 0; i < n; ++i){
//        x = sqrt(x + 2);
//         if (fabs(x - 2) < epsilon) {
//             break;
//         }
//    }
//    printf("x的值为：%.10f\n", x);
//    return 0;
//}*/
////阶乘
//#include <stdio.h>
//int main()
//{
//    long long n,i,m=1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        m = m*i;
//        //printf("%d!=%d",n,m);
//    }
//    printf("%d!=%lld",n,m);
//    return 0;
//}
////e的近似值
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double deta,e=1.0,ex=1.0;
//    int under = 1.0;
//    scanf("%lf",&deta);
//    for(int i=1.0;ex > deta;i++)
//    {
//        under = under*i;
//        ex = 1.0/under;
//        e = e + ex;
//    }
//    printf("%.10lf",e);
//    return 0;
//}
////Fibonacci数列
//#include <stdio.h>
//
//int main()
//{
//    int i=1,b=1,c=1,m,n;
//    scanf("%d",&n);
//    if(n==1)
//    {
//        printf("1");
//    }
//    if(n==2)
//    {
//        printf("1,1");
//    }
//	if(n>2)
//    {
//        printf("1,1");
//        for(i=1;i<=n-2;i++)
//        {
//            m = b+c;
//            b = c;
//            c = m;
//            printf(",%d",m);
//        }
//    }
//	return 0;
//}
//








