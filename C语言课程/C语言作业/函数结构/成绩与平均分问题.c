// ��������
//    ��д����ReadScore()��Average()������ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ���������Ϊ��ֵʱ����ʾ����������ú������ͳ�Ƴɼ�����ƽ���ֵ�ѧ��������
// ����
//    �������ɸ���������������֮����һ���ո������
// ���
//    ����ɼ�����ƽ���ֵ�ѧ��������
// ����ʾ��
//    70 90 58 -5
// ���ʾ��
//    1
// ���ݷ�Χ
//    ����������Ϊint��Χ������


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