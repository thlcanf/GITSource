// 试题描述
//    由键盘上输入1个正整数n。请用分支语句判断其是奇数还是偶数，若为奇数则输出“odd”，若为偶数则输出“even”。
// 输入
//    输入一个正整数n。
// 输出
//    输出“odd”或“even”（不输出引号）。
// 输入示例1
//    12
// 输出示例1
//    even
// 输入示例2
//    7
// 输出示例2
//    odd
// 数据范围
//    输入为int范围的整数
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
