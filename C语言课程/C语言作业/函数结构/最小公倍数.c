// ��������
//    ������ٷ����ú������ʵ�ּ�����������������С��������Least Common Multiple, LCM���ĺ��������������е��øú������㲢����Ӽ������������������������С��������
// ����
//    ��������������������֮����һ���ո������
// ���
//    �����С��������
// ����ʾ��
//    16 24
// ���ʾ��
//    48
// ���ݷ�Χ
//    ���������Ϊint��Χ��������


#include <stdio.h>
int main()
{
    int t, x, y;
    int lcm(int x, int y);
    scanf("%d %d", &x, &y);
    t = lcm(x, y);

    printf("%d", t);
    return 0;
}
int lcm(int x, int y)
{
    int i, m;
    if (x > y)
    {
        m = x;
    }
    else
    {
        m = y;
    }
    for (i = m ; i > 0; i++)
    {
        if ((i % x == 0) && (i % y == 0))
        {

            break;
        }
    }

    return i;
}