// 试题描述
// 编写程序，将两个字符串连接起来。注意不可以使用strcat等系统提供的字符串函数。请使用数组实现。
// 输入
// 输入包含两行：
// 第一行是字符串，长度不超过20。
// 第二行也是字符串，长度不超过20。
// 输出
// 输出连接后的字符串。
// 输入示例
// Very good!
// Hello
// 输出示例
// Very good!Hello
// 数据范围
// 输入输出均为字符串，并且输入字符串长度不超过20

#include<stdio.h>
int main()
{
    char str[41];
    char str1[21];
    int i=0,j;
    gets(str);
    gets(str1);
    while (str[i]!='\0')
    {
        i++;
    }
    for ( j = 0; str1[j]!='\0'; j++)
    {
        str[i]=str1[j];
        i++;
    }
    str[i]='\0';
    printf("%s",str);
    return 0;
}