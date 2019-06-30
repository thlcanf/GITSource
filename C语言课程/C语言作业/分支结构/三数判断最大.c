// 试题描述
//    由键盘上输入三个整数，请输出其中的最大值。
// 输入
//    输入三个整数，邻近两数之间用一个空格隔开。且保证整数属于int范围。
// 输出
//    输出三个整数中最大的一个。
// 输入示例
//    1 35 -47
// 输出示例
//    35
// 数据范围
//    输入和输出均为int范围的整数
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b)
    {
        a = b;
    }
    else
    {
        a = a;
    }
    if (a <= c)
    {
        a = c;
    }
    else
    {
        a = a;
    }
    printf("%d", a);
    return 0;
}
