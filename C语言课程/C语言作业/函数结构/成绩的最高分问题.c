// 试题描述
//    编写函数ReadScore()和FindMax()，输入某班学生某门课的成绩和学号（最多不超过40人），当输入为负值时，表示输入结束，用函数编程通过返回数组中最大元素的下标，查找并输出成绩的最高分及其对应的学生学号。
//    提示：为了简化问题，学号可以用long类型存储。
// 输入
//    输入若干行。每行均有两个整数，两项之间用一个空格隔开，分别代表某学生的成绩和学号。最后一行输入两个负数，表示输入结束。
// 输出
//    输出最高成绩和该学生的学号，两项之间用一个空格隔开。
// 输入示例
//    89 15011101
//    87 15011102
//    100 15011103
//    76 15011104
//    -1 -1
// 输出示例
//    100 15011103
// 数据范围
//    输入和输出均为long范围的整数

#include<stdio.h>
int main()
{
    int s[41],i,n,m,max;
    long num[41];
    int ReadScore(int s[],long num[]);
    int Findmax(int s[],int n);
    n=ReadScore(s,num);
    max=Findmax(s,n);
    for ( i = 0; i < n; i++)
    {
        if (s[i]==max)
        {
            m=num[i];
        }
        
    }
    printf("%d %d",max,m);
    return 0;
}
int ReadScore(int s[],long num[])
{
    int i=-1;
    do
    {
        
        i=i+1;
        scanf("%d %ld",&s[i],&num[i]);
    }while (s[i]>=0&&num[i]>0);
    
    return i;
}
int Findmax(int s[],int n)
{
    int max,i;
    max=s[0];
    for ( i = 0; i < n; i++)
    {
        if (s[i]>max)
        {
            max=s[i];
        }
        
    }
    return max;
}