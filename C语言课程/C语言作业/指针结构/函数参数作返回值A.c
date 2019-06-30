// 试题描述
//    大家都知道函数返回值可以返回数据给调用者，也有必要掌握使用指针变量作为函数参数充当函数返回值的方法。请你帮助叮当定义形如下面的函数：
//    void fun(int a, int b, int *sum, int *diff, int *product, float *divide)
//    在主函数中，输入两个整数a和b，然后调用此函数计算数学上的a + b、a - b、a * b和a / b四种运算的值，四种运算的结果通过函数的后四个参数返回主函数；最后在主函数中，输出这四种运算的值。除法运算要求小数点后必须保留2位有效数字（四舍五入），不足补零。
// 输入
//    输入两个整数a和b，用一个空格隔开。
// 输出
//    按照题目要求输出a + b、a - b、a * b和a / b的值，邻近的数值之间用一个空格隔开。除法运算要求小数点后必须保留2位有效数字（四舍五入），不足补零。
// 输入示例
//    2 5
// 输出示例
//    7 -3 10 0.40
// 数据范围
//    输入为int范围的整数，输出均为int范围的整数和float范围的浮点数

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


//错误代码
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