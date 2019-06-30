// 试题描述
//    互联网上IP地址的表示方式为：x.y.z.m，其中x、y、z和m都是正整数。可以通过IP地址来区分同一局域网中的各个计算机。
//    请定义一个表示IP地址的结构体类型，其中含有四个成员，分别为四个int类型的整数。然后输入两个IP地址，我们根据前两个成员值是否相同判断它们是否处于同一个局域网中，根据判断，输出“TRUE”或者“FALSE”（不输出引号）。
// 输入
//    输入包含两行，分别是两个IP地址。
// 输出
//    依据题意，输出“TRUE”或者“FALSE”（不输出引号）。
// 输入示例
//    192.168.12.34
//    192.168.24.38
// 输出示例
//    TRUE
// 数据范围
//    输入为int范围内的整数和字符串，输出为字符串

#include<stdio.h>
struct line
{
    int x;
    int y;
    int m;
    int n;
}l[2];
int main()
{
    int i=0;
    for ( i = 0; i < 2; i++)
    {
        scanf("%d.%d.%d.%d",&l[i].x,&l[i].y,&l[i].m,&l[i].n);
    }
    if (l[0].x==l[1].x&&l[0].y==l[1].y)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}
