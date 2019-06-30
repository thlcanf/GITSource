// 试题描述
//    用函数编程计算两整数的最大值，在主函数中调用该函数计算并输出从键盘任意输入的两个整数的最大值。
// 输入
//    输入两个整数，两项之间用一个空格隔开。
// 输出
//    输出最大值。
// 输入示例
//    12 3
// 输出示例
//    12
// 数据范围
//    输入输出均为int范围的整数

#include<stdio.h>
int main()
{
    int max,x,y;
    int MAX(int x,int y);
    scanf("%d %d",&x,&y);
    max=MAX(x,y);
    printf("%d",max);
}
int MAX(int x,int y)
{
    
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    
}