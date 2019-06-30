// 试题描述
//    编写函数FindMax()，输入10个整数，用函数编程将其中的最大数与最小数位置互换，然后输出互换后的数组。
// 输入
//    输入10个整数，相邻两项之间用一个空格隔开。
// 输出
//    输出互换后的数组，相邻两项之间用一个空格隔开。
// 输入示例
//    1 2 3 4 5 6 7 8 9 10
// 输出示例
//    10 2 3 4 5 6 7 8 9 1
// 数据范围
//    输入和输出均为int范围的整数


#include<stdio.h>
int main()
{
    int s[10],i,max;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&s[i]);
    }
    int Findmax(int s[]);
    Findmax(s);
    return 0;
}
int Findmax(int s[])
{
    int max,i,t[10];
    max=s[0];
    for ( i = 0; i < 10; i++)
    {
        if (s[i]>max)
        {
            max=s[i];
        }
        
    }
    int min;
    min=s[0];
    for ( i = 0; i < 10; i++)
    {
        if (s[i]<min)
        {
            min=s[i];
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        if (s[i]!=max&&s[i]!=min)
        {
            t[i]=s[i];
        }
        if (s[i]==min)
        {
            t[i]=max;
        }
        if (s[i]==max)
        {
            t[i]=min;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",t[i]);
    }
    return 0;
}



//另附代码：
// #include<stdio.h>
// int main()
// {
//     int s[10],i,max,min,t[10];
//     for ( i = 0; i < 10; i++)
//     {
//         scanf("%d",&s[i]);
//     }
//     int Findmax(int s[]);
//     Findmax(s);
//     return 0;
// }
// int Findmax(int s[])
// {
//     int max,i,t[10];

//     max=s[0];
//     for ( i = 0; i < 10; i++)
//     {
//         if (s[i]>max)
//         {
//             max=s[i];
//         }
        
//     }
//     int min;
//     min=s[0];
//     for ( i = 0; i < 10; i++)
//     {
//         if (s[i]<min)
//         {
//             min=s[i];
//         }
        
//     }
//     for ( i = 0; i < 10; i++)
//     {
//         if (s[i]!=max&&s[i]!=min)
//         {
//             t[i]=s[i];
//         }
//         if (s[i]==min)
//         {
//             t[i]=max;
//         }
//         if (s[i]==max)
//         {
//             t[i]=min;
//         }
//     }
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d ",t[i]);
//     }
// 	return 0;
// }

