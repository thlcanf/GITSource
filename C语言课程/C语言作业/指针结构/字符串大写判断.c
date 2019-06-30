// 试题描述
//    输入一个不含空格的字符串，要求使用指针的方法遍历该字符串。并判断字符串是否全部为大写英文字母，是则输出“TRUE”，否则输出“FALSE”（不输出引号）。
// 输入
//    输入一个不含空格的字符串。输入不多于999个字符，以回车结束。
// 输出
//    根据题意输出“TRUE”或“FALSE”（不输出引号）。
// 输入示例1
//    APPLE
// 输出示例1
//    TRUE
// 输入示例2
//    Apple%
// 输出示例2
//    FALSE
// 数据范围
//     输入和输出均为字符串，输入字符串不多于999个字符

#include <stdio.h>
void main()
{
    char str[1000], *cp;
    int i = 0;
    gets(str);
    for (cp = str; *cp != '\0'; cp++)
    {
        if (*cp >= 'A' && *cp <= 'Z')
        {
            i = 0;
        }
        else
        {
            i = 1;
        }
    }
    if (i == 0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}