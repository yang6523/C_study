////�����������(���ض�ֵ����)
////���ASCII��
//#include<stdio.h>
//int main(){
//    char c;
//    while(1){                  //�˴�������������Զ�������ѭ�� 
//        scanf("%c",&c);        //��ȡһ���ַ�c
//        if(c=='#') break;      //��c=='#'����������ѭ�� 
//        printf("%c-%d\n",c,c); //���һ�н�� 
//    } 
//    return 0;
//}
////ˮ�ɻ���
//#include<stdio.h>
//int main(){
//    int n,i;
//    int a,b,c;
//    while(scanf("%d",&n),n!=0){  //��������n,��0ֹͣѭ��
//        a=n/100;                   //��ȡ��λ���� 
//        b=n%100/10;                //��ȡʮλ���� 
//        c=n%10;                    //��ȡ��λ���� 
//        if( n == a*a*a + b*b*b + c*c*c ) //����ˮ�ɻ�������
//            printf("Yes\n");
//        else
//            printf("No\n");   
//  }
//  return 0;  
//}
////������ֺ�
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
////ʶ������
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





