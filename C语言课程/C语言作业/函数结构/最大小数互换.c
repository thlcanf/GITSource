// ��������
//    ��д����FindMax()������10���������ú�����̽����е����������С��λ�û�����Ȼ���������������顣
// ����
//    ����10����������������֮����һ���ո������
// ���
//    �������������飬��������֮����һ���ո������
// ����ʾ��
//    1 2 3 4 5 6 7 8 9 10
// ���ʾ��
//    10 2 3 4 5 6 7 8 9 1
// ���ݷ�Χ
//    ����������Ϊint��Χ������


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



//�����룺
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

