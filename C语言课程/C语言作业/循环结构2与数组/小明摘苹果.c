// 试题描述
//    有一天走到了一片苹果林，里面每颗树上都结有不同数目的苹果，小明身上只能拿同一棵树上的苹果，他每到一棵果树前都会把自己身上的苹果扔掉并摘下他所在树上的苹果并带走（假设小明会走过每一棵苹果树），问在小明摘苹果的整个过程中，他身上携带的最多苹果数与最小苹果数的差是多少？请使用循环实现。
// 输入
//    输入包含m + 1行：
//    第一行是两个正整数m和n，以空格分开。即苹果林中有果树的行数和列数。
//    第二行至第m + 1行每行均有n个整数（即每颗树上的苹果数）。
//    且题目要求0 < m，n < 50。
// 输出
//    输出一个整数（小明摘苹果的整个过程中，他身上携带的最多苹果数与最小苹果数的差）。
// 输入示例
//    4 3
//    2 6 5
//    1 3 7
//    5 3 5
//    1 7 12
// 输出示例
//    11
// 数据范围
//    对于100%的数据，0 < m，n < 50

#include <stdio.h>
int main()
{
    int num[2500], a, b, i, n = 1, max, s[50], r[50], min, d;
    scanf("%d %d", &a, &b);
    while (n <= a)
    {
        for (i = 0; i < b; i++)
        {
            scanf("%d", &num[i]);
        }
        s[n] = num[1];
        r[n] = num[1];
        for (i = 0; i < b; i++)
        {
            if (num[i] > s[n])
            {
                s[n] = num[i];
            }
        }
        for (i = 0; i < b; i++)
        {
            if (num[i] < s[n])
            {
                r[n] = num[i];
            }
        }
        n = n + 1;
    }
    max = s[1];
    min = r[1];
    for (i = 1; i <= a; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
    }
    for (i = 1; i <= a; i++)
    {
        if (r[i] < min)
        {
            min = r[i];
        }
    }
    d = max - min;
    printf("%d", d);
    return 0;
}


#include <stdio.h>
int main()
{
    int num[50], a, b, i, n = 1, max, s[50], r[50], min;
    scanf("%d %d", &a, &b);
    while (n <= a)
    {
        for (i = 0; i < b; i++)
        {
            scanf("%d", &num[i]);
        }
        s[n] = num[0];
        r[n] = num[0];
        for (i = 0; i < b; i++)
        {
            if (num[i] > s[n])
            {
                s[n] = num[i];
            }
        }
        for (i = 0; i < b; i++)
        {
            if (num[i] <= r[n])
            {
                r[n] = num[i];
            }
        }
        n = n + 1;
    }
    max = s[1];
    min = r[1];
    for (i = 1; i <= a; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
        }
    }
    for (i = 1; i <= a; i++)
    {
        if (r[i] < min)
        {
            min = r[i];
        }
    }
    printf("%d", max - min);
    return 0;
}