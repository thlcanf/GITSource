// 试题描述
//    编写函数ReadScore()和Average()，输入某班学生某门课的成绩（最多不超过40人），当输入为负值时，表示输入结束，用函数编程统计成绩高于平均分的学生人数。
// 输入
//    输入若干个整数，相邻两项之间用一个空格隔开。
// 输出
//    输出成绩高于平均分的学生人数。
// 输入示例
//    70 90 58 -5
// 输出示例
//    1
// 数据范围
//    输入和输出均为int范围的整数


#include <stdio.h>
int main()
{
    int s[41], n, t;
    int ReadScore(int s[]);
    int Average(int s[], int n);
    n = ReadScore(s);
    t = Average(s, n);
    printf("%d", t);
    return 0;
}
int ReadScore(int s[])
{
    int i = -1;
    while (s[i] >= 0)
    {
        i = i + 1;
        scanf("%d", &s[i]);
    }
    return i;
}
int Average(int s[], int n)
{
    int sum = 0;
    int i = 0, t = 0;
    int average = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + s[i];
    }
    average = sum / n;
    for (i = 0; i < n; i++)
    {
        if (s[i] > average)
        {
            t++;
        }
    }
    return t;
}