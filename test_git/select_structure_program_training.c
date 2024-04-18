////选择结构程序训练
////一元二次方程
//#include<stdio.h>
//#include<math.h>
//int main(){
//    double a,b,c,deta,x1,x2,p,q;
//    scanf("%lf%lf%lf", &a, &b, &c);   //输入一元二次方程的系数a，b，c 
//    deta=b*b-4*a*c;                   //求出deta的值 
//    if(deta==0.0){                    //deta==0 
//        printf("x1=x2=%lf", -b/(2*a));//输出两个相等的实根
//    }
//    else if(deta>0){                  //deta>0
//        x1=(-b+sqrt(deta))/(2*a);     //求出两个不相等的实根 
//        x2=(-b-sqrt(deta))/(2*a);
//        printf("x1=%lf,x2=%lf", x1, x2);
//    }
//    else{                             //deta<0
//        p=-b/(2*a);                   //求出两个共轭复根的实部虚部
//        q=sqrt(fabs(deta))/(2*a);
//        printf("x1=%lf+%lfi\n", p, q);//输出两个复根
//        printf("x2=%lf-%lfi", p, q);
//    }
//    return 0;
//}
////计算机出题你来答
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a,b,c;
//    char ch1[] = "GOOD!",ch2[] = "SORRY!",ch;
//    char ll;
//    scanf("%d%c%d=%d",&a,&ll,&b,&c);
//    switch(ll){
//        case '+':
//            if (a+b==c) printf("%s",ch1);
//            else printf("%s",ch2);
//            break;
//        case '-':
//            if (a-b==c) printf("%s",ch1);
//            else printf("%s",ch2);
//            break;
//        case '*':
//            if (a*b==c) printf("%s",ch1);
//            else printf("%s",ch2);
//            break;
//        case '/':
//            if (a/b==c) printf("%s",ch1);
//            else printf("%s",ch2);
//            break;
//        default:
//            printf("%s",ch2);
//            break;
//    }
//    return 0;
//}


