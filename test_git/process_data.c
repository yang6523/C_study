////处理多组数据(以特定值结束)
////输出ASCII码
//#include<stdio.h>
//int main(){
//    char c;
//    while(1){                  //此处不做阻拦，永远允许进入循环 
//        scanf("%c",&c);        //读取一个字符c
//        if(c=='#') break;      //若c=='#'成立，跳出循环 
//        printf("%c-%d\n",c,c); //输出一行结果 
//    } 
//    return 0;
//}
////水仙花数
//#include<stdio.h>
//int main(){
//    int n,i;
//    int a,b,c;
//    while(scanf("%d",&n),n!=0){  //读入整数n,遇0停止循环
//        a=n/100;                   //提取百位数字 
//        b=n%100/10;                //提取十位数字 
//        c=n%10;                    //提取个位数字 
//        if( n == a*a*a + b*b*b + c*c*c ) //满足水仙花数条件
//            printf("Yes\n");
//        else
//            printf("No\n");   
//  }
//  return 0;  
//}
////输出数字和
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//int main()
//{
//    char str[100];
//    int num = 0;
//    scanf("%99s",&str);
//    for(int i = 0;str[i] != '\0';i++)
//    {
//        if(isdigit(str[i]))
//        {
//            num += str[i] - '0';
//        }
//    }
//    printf("%d",num);
//    return 0;
//}
////识别整数
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[100];
//    int num = 0,a=0;
//    scanf("%99s",&str);
//
//    for(int i=0;str[i] != '.';i++)
//    {
//        if(str[i] > '0' && str[i] <= '9')
//        {
//            num = str[i] - '0';
//            a = 1;
//            printf("%d",num);
//        }
//
//
//    }
//    if(a==0)
//    {
//        printf("0");
//    }
//    return 0;
//}





