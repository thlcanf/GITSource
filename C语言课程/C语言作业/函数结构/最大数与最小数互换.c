#include<stdio.h>
int main()
{
    int s[10],i,max,min,t[10];
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
    int min;
    max=s[0];
    for ( i = 0; i < 10; i++)
    {
        if (s[i]>max)
        {
            max=s[i];
        }
        
    }
    
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
