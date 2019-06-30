// 试题描述
//    看到两个标准格式的时间，有小时，有分钟，有秒，格式如：hh:mm:ss，即 时:分:秒。
//    你想知道，这两个时间之间相差多少吗？
// 输入
//    输入包含两行：
//    第一行是第一个“时:分:秒”格式的时间。
//    第二行是第二个“时:分:秒”格式的时间。
//    且本题保证第一个时间一定大于第二个时间！
// 输出
//    输出两个时间之间的秒数差。
// 输入示例
//    01:10:10
//    00:30:30
// 输出示例
//    2380
// 数据范围
//    输入为合法时间，输出为int范围的整数
#include<stdio.h>
int main()
{
    int a,m,f,s,r;
    scanf("%d",&a);
    m=(a%3600)%60;
    f=(a%3600)/60;
    s=a/3600;
    printf("%02d:%02d:%02d",s,f,m);
    printf("\n");
    return 0;
}
