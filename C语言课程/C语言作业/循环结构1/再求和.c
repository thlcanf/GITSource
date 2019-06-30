// 试题描述
//    用循环计算1*3 + 5*7 + 9*11 + …… + 597*599的和。
// 输入
//    无输入。
// 输出
//    输出1*3 + 5*7 + 9*11 + …… + 597*599的和，值在int范围内
#include<stdio.h>
int main()
{
    int a=1,b=3,sum=0;
    while (a<=597)
    {
        sum=sum+a*b;
        a=a+4;
        b=b+4;
    }
    printf("%d",sum);
    return 0;
}