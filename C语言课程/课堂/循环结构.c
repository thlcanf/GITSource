// 100-200间的所有素数
// #include "math.h"
// #include <stdio.h>
// void main()
// {int m,n=0,k,i;
//     for(m=101;m<=200;m=m+2)
//     { if(n%10==0)printf("\n");
//     k=sqrt(m);
//     for(i=2;i<=k;i++)
//     if(m%i==0)break;
//     if(i>=k+1){printf("%d   ",m);n=n+1;}
//     }
// }



// #include<stdio.h>
// int main()
// {
// 	int a,flag=1;
// 	scanf("%d",&a);
// 	if (a>0)
// 	{
// 		flag=0;
// 	}
// 	if (flag)//此处就是指flag=1；是指真值0或1，这个意思是指真值为1；
// 	{
// 		printf("负数");
// 	}
// 	else
// 	{
// 		printf("正数");
// 	}
// 	return 0;
// }



// goto语句,尽量不用
// #include <stdio.h>
// void main()
// {   int i=1,sum=0;
//     loop:sum=sum+i;
//             i=i+2;
//         if(i<100)goto loop;
//     printf("sum=%d\n",sum);
// }



// #include <stdio.h>
// void main()
// {int j,a,b,c,d,i;
//     for(j=1000;i<=9999;i++)
//     {   
//         a=j/1000;  			/*分离各位数*/
//         b=j/100-a*10;
//         c=j/10-a*100-b*10;
//         d=j-a*1000-b*100-c*10;
//     /*第一、三位数字之和10，第二、四位数字之积12 */
//         if(a+c==10&&b*d==12)
//     {
//         printf("%d ",j);  	/*满足条件，输出该数*/
//     }
// 	}
// }


// //最大公约数
// #include <stdio.h>
// void main()
// {  int a, b, x, y, r;
//     scanf("%d%d",&a,&b); 		/*输入已知量*/
//     x = a;
//     y = b; 		/*循环初值，保留原值a  b  */
//     while (y != 0) 	/*循环条件*/
//     {        r = x % y; 	/*相除取余*/
//     x = y;
// 	y = r; 	/*迭代改变循环条件变量y的值*/
//     }
//     printf("最大公约数=%d\n",x); 	/*输出结果*/    
// }


// 按如下要求打印出如下图形：
// 5
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// #include <stdio.h>
// void main()
// {
//     int i, j, k,m,n;
//     char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     scanf("%d",&n);
//     for (i = 0; i<=n-1; i++)
//     {
//         for (j = 0;j<=n-2-i; j++)
//         {
//             printf(" ");
//         }
//         for (k = 0; k <= (2 * i)/2; k++)
//         {
//             printf("%c",a[k]);
//         }
//         for ( m=k-2; m>=0;m--)
//         {
//             printf("%c",a[m]);
//         }
        
//         printf("\n");
//     }
// }
