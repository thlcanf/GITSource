// ��������
//    ��Ҷ�֪����������ֵ���Է������ݸ������ߣ�Ҳ�б�Ҫ����ʹ��ָ�������Ϊ���������䵱��������ֵ�ķ����������������������������ĺ�����
//    void fun(int a, int b, int *sum, int *diff, int *product, float *divide)
//    ���������У�������������a��b��Ȼ����ô˺���������ѧ�ϵ�a + b��a - b��a * b��a / b���������ֵ����������Ľ��ͨ�������ĺ��ĸ�����������������������������У���������������ֵ����������Ҫ��С�������뱣��2λ��Ч���֣��������룩�����㲹�㡣
// ����
//    ������������a��b����һ���ո������
// ���
//    ������ĿҪ�����a + b��a - b��a * b��a / b��ֵ���ڽ�����ֵ֮����һ���ո��������������Ҫ��С�������뱣��2λ��Ч���֣��������룩�����㲹�㡣
// ����ʾ��
//    2 5
// ���ʾ��
//    7 -3 10 0.40
// ���ݷ�Χ
//    ����Ϊint��Χ�������������Ϊint��Χ��������float��Χ�ĸ�����

#include <stdio.h>
void fun(int a, int b, int *sum, int *diff, int *product, float *divide)
{
    *sum = a + b;
    *diff = a - b;
    *product = a * b;
    *divide = ((double)a) / b;
}
int main()
{
    int a, b;
    int x, y, z;
    float d;
    scanf("%d %d", &a, &b);
    fun(a, b, &x, &y, &z, &d);
    printf("%d %d %d %.2f", x, y, z, d);
    return 0;
}


//�������
// int main()
// {
//     int a, b;
//     scanf("%d %d",&a,&b);
//     float c;
//     c=a/b;
//     printf("%f",c);
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     fun(a, b);
// }
// void fun(int a, int b)
// {
//     int s,d,p;
//     float di;
//     int *sum;
//     int *diff;
//     int *product;
//     float *divide;
//     s = (a + b);
//     d = (a - b);
//     p = (a * b);
//     di = (a *1.0)/ b;
//     sum=&s;
//     diff=&d;
//     product=&p;
//     divide=&di;
//     printf("%d %d %d %.2f", *sum, *diff, *product, *divide);
// }