// ��������
//    ��дMyStrcat()������������ϵͳ�ṩ���ַ������Ӻ���strcat()�����ʵ���ַ������ӵĹ��ܡ�
// ����
//    ����������У�
//    ��һ�����ַ��������Ȳ�����20��
//    �ڶ���Ҳ���ַ��������Ȳ�����20��
// ���
//    ������Ӻ���ַ�����
// ����ʾ��
//    Very good!
//    Hello
// ���ʾ��
//    Very good!Hello
// ���ݷ�Χ
//    ���������Ϊ�ַ��������������ַ������Ȳ�����20

#include<stdio.h>
int main()
{
    MyStrcat();
    return 0;
}
int MyStrcat()
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