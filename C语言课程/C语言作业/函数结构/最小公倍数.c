// 试题描述
//    采用穷举法，用函数编程实现计算两个正整数的最小公倍数（Least Common Multiple, LCM）的函数，在主函数中调用该函数计算并输出从键盘任意输入的两个整数的最小公倍数。
// 输入
//    输入两个正整数，两项之间用一个空格隔开。
// 输出
//    输出最小公倍数。
// 输入示例
//    16 24
// 输出示例
//    48
// 数据范围
//    输入输出均为int范围的正整数


#include <stdio.h>
int main()
{
    int t, x, y;
    int lcm(int x, int y);
    scanf("%d %d", &x, &y);
    t = lcm(x, y);

    printf("%d", t);
    return 0;
}
int lcm(int x, int y)
{
    int i, m;
    if (x > y)
    {
        m = x;
    }
    else
    {
        m = y;
    }
    for (i = m ; i > 0; i++)
    {
        if ((i % x == 0) && (i % y == 0))
        {

            break;
        }
    }

    return i;
}