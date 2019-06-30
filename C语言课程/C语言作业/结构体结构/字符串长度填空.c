// 试题描述
//    阅读程序，按要求在空白处填写适当的表达式或语句，使程序完整并符合题目要求。
//    下面MyStrlen()函数的功能是计算指针p所指向的字符串的长度。
// #include <stdio.h>
// unsigned int MyStrlen(char *p)
// {
//    unsigned int len;
//    len = 0;
//    for(; *p !=    ①   ; p++)
//    {
//       len    ②   ;
//    }
//    return    ③   ;
// }
// int main()
// {
//    char str[21];
//    gets(str);
//    printf("%d", MyStrlen(str));
//    return 0;
// }
//    注意：请务必提交完整的程序代码，不要修改代码框架。

#include <stdio.h>
unsigned int MyStrlen(char *p)
{
    unsigned int len;
    len = 0;
    for (; *p !='\0' ; p++)
    {
        len =len + 1;
    }
    return len;
}
int main()
{
    char str[21];
    gets(str);
    printf("%d", MyStrlen(str));
    return 0;
}