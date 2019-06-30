// 试题描述
//    由键盘上输入一个三角形的三条边长（均为正整数）。请判断是否为等腰三角形？是输出“TRUE”，否则输出“FALSE”。
// 输入
//    输入三个正整数，邻近两数之间用一个空格隔开。且保证整数属于int范围。
// 输出
//    根据题意输出“TRUE”或“FALSE”（不输出引号）。
// 输入示例1
//    4 5 4
// 输出示例1
//    TRUE
// 输入示例2
//    1 1 1
// 输出示例2
//    TRUE
// 输入示例3
//    3 4 5
// 输出示例3
//    FALSE
// 数据范围
//    输入为int范围的整数
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a)&&(a==b||a==c||b==c))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}

