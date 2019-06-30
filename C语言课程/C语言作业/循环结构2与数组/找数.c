// 试题描述
//    数512具有这样的性质，它各位数字之和的三次方正好是原数512，即512 =（5 + 1 + 2）3。
//    由键盘输入两个正整数m和n，请你输出m和n之间所有符合条件的数。其中m和n是两位至四位的自然数（10 <= m <= n <= 9999）。请用循环实现。
// 输入
//    输入两个正整数m和n，用一个空格隔开（10 <= m <= n <= 9999）。
// 输出
//    输出若干行，每个符合条件的数占一行。请按照从小到大的顺序输出。
// 输入示例
//    500 520
// 输出示例
//    512
// 数据范围
//    对于100%的数据，10 <= m <= n <= 9999

//参考网站：https://blog.csdn.net/guozexiong/article/details/51357162
#include<stdio.h>
int main()
{
    int a,b,x,y,s[4],j,i,sum;
    scanf("%d %d",&a,&b);
    x=a;
    while(x<=b)
    {
        i=0;
        sum=0;
        y=x;
        do
        {
            s[i++]=y%10;
            y/=10;
        } while (0!=y);
        for ( j=0 ; j<i; j++)
        {
            sum=sum+s[j];
        }
        if (sum*sum*sum==x)
        {
            printf("%d\n",x);
        }
        x=x+1;
    }
    
    return 0;
}



//参考代码：
// #include <stdio.h>
// int main()
// {
//     int num = 0;                                
//     int buf[20] = {0}; //存放拆分的数字
//     int cnt = 0;
    
//     scanf("%d", &num);

//     do
//     {
//         buf[cnt++] = num % 10; //个位数存入数组
//         num /= 10;             //num值改变
//     } while (0 != num);

//     //打印数组
//     for (int i = cnt - 1; i >= 0; i--)
//     {
//         printf("%d ", buf[i]);
//     }
//     printf("\n");
//     return 0;
// }