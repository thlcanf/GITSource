// 试题描述
//    输入某班学生某门课的成绩（最多不超过40人，具体人数由用户键盘输入），用函数编程统计不及格人数。
// 输入
//    输入包含两行：
//    第一行是一个整数n，表示班级人数。
//    第二行是n个整数，表示n个学生的成绩，相邻两项之间用一个空格隔开。
// 输出
//    输出不及格人数。
// 输入示例
//    3
//    70 90 58
// 输出示例
//    1
// 数据范围
//    输入和输出均为int范围的整数


#include<stdio.h>
int main()
{
	int t=0,n,i,s[40];
	int count(int x);
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&s[i]);
	}
	for ( i = 0; i < n; i++)
	{
		if (count(s[i])==1)
		{
			t=t+1;
		}
		
	}
	
	printf("%d",t);
	return 0;
}
int count(int x)
{
	
	if (x<60)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}