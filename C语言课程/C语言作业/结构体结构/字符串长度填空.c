// ��������
//    �Ķ����򣬰�Ҫ���ڿհ״���д�ʵ��ı��ʽ����䣬ʹ����������������ĿҪ��
//    ����MyStrlen()�����Ĺ����Ǽ���ָ��p��ָ����ַ����ĳ��ȡ�
// #include <stdio.h>
// unsigned int MyStrlen(char *p)
// {
//    unsigned int len;
//    len = 0;
//    for(; *p !=    ��   ; p++)
//    {
//       len    ��   ;
//    }
//    return    ��   ;
// }
// int main()
// {
//    char str[21];
//    gets(str);
//    printf("%d", MyStrlen(str));
//    return 0;
// }
//    ע�⣺������ύ�����ĳ�����룬��Ҫ�޸Ĵ����ܡ�

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