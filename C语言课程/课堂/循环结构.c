// 100-200�����������
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
// 	if (flag)//�˴�����ָflag=1����ָ��ֵ0��1�������˼��ָ��ֵΪ1��
// 	{
// 		printf("����");
// 	}
// 	else
// 	{
// 		printf("����");
// 	}
// 	return 0;
// }



// goto���,��������
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
//         a=j/1000;  			/*�����λ��*/
//         b=j/100-a*10;
//         c=j/10-a*100-b*10;
//         d=j-a*1000-b*100-c*10;
//     /*��һ����λ����֮��10���ڶ�����λ����֮��12 */
//         if(a+c==10&&b*d==12)
//     {
//         printf("%d ",j);  	/*�����������������*/
//     }
// 	}
// }


// //���Լ��
// #include <stdio.h>
// void main()
// {  int a, b, x, y, r;
//     scanf("%d%d",&a,&b); 		/*������֪��*/
//     x = a;
//     y = b; 		/*ѭ����ֵ������ԭֵa  b  */
//     while (y != 0) 	/*ѭ������*/
//     {        r = x % y; 	/*���ȡ��*/
//     x = y;
// 	y = r; 	/*�����ı�ѭ����������y��ֵ*/
//     }
//     printf("���Լ��=%d\n",x); 	/*������*/    
// }


// ������Ҫ���ӡ������ͼ�Σ�
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
