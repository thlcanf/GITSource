// ��������
//    ��д����ReadScore()��FindMax()������ĳ��ѧ��ĳ�ſεĳɼ���ѧ�ţ���಻����40�ˣ���������Ϊ��ֵʱ����ʾ����������ú������ͨ���������������Ԫ�ص��±꣬���Ҳ�����ɼ�����߷ּ����Ӧ��ѧ��ѧ�š�
//    ��ʾ��Ϊ�˼����⣬ѧ�ſ�����long���ʹ洢��
// ����
//    ���������С�ÿ�о�����������������֮����һ���ո�������ֱ����ĳѧ���ĳɼ���ѧ�š����һ������������������ʾ���������
// ���
//    �����߳ɼ��͸�ѧ����ѧ�ţ�����֮����һ���ո������
// ����ʾ��
//    89 15011101
//    87 15011102
//    100 15011103
//    76 15011104
//    -1 -1
// ���ʾ��
//    100 15011103
// ���ݷ�Χ
//    ����������Ϊlong��Χ������

#include<stdio.h>
int main()
{
    int s[41],i,n,m,max;
    long num[41];
    int ReadScore(int s[],long num[]);
    int Findmax(int s[],int n);
    n=ReadScore(s,num);
    max=Findmax(s,n);
    for ( i = 0; i < n; i++)
    {
        if (s[i]==max)
        {
            m=num[i];
        }
        
    }
    printf("%d %d",max,m);
    return 0;
}
int ReadScore(int s[],long num[])
{
    int i=-1;
    do
    {
        
        i=i+1;
        scanf("%d %ld",&s[i],&num[i]);
    }while (s[i]>=0&&num[i]>0);
    
    return i;
}
int Findmax(int s[],int n)
{
    int max,i;
    max=s[0];
    for ( i = 0; i < n; i++)
    {
        if (s[i]>max)
        {
            max=s[i];
        }
        
    }
    return max;
}