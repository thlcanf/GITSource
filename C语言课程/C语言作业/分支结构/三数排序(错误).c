#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d,%d,%d",&a, &b, &c);
    if(a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if(a > c)
    {
        d = c;
        c = a;
        a = d;
    }
    if(c < b)
    {
        d = b;
        b = c;
        c = d;
    }
    printf("%d %d %d\n",a, b, c);
    return 0;
}

