#include <stdio.h>
struct date
{
    int month;
    int day;
    int year;
};
struct stud
{
    char cls[20];
    long num;
    char name[20];
    char sex;
    struct date birthday;
    float score;
}
s = {"computer003", 840160, "NinMing ",'F',{2,19,1990},81};
void main()
{
    printf("class:%s\nNO.:%ld\nname:%s\nsex:%c\nbirthday:%d/%d/%d\nscore:%5.1f\n", 
    s.cls, s.num, s.name, s.sex, s.birthday.month, s.birthday.day, s.birthday.year, s.score);
}


#define N 3
#include <stdio.h>
#include <math.h>
struct complex /*���帴���ṹ��*/
{
    float x; /*ʵ��*/
    float y; /*�鲿*/
    float m; /*������ģ*/
} 
cp[N], temp;
void main()
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        scanf("%f%f", &cp[i].x, &cp[i].y);
        cp[i].m = sqrt(cp[i].x * cp[i].x + cp[i].y * cp[i].y);
        /*���㸴����ģ*/
    }
    for (i = 0; i < N - 1; i++) /*��ģ�Ĵ�С����*/
        for (j = 0; j < N - 1 - i; j++)
        {
            if (cp[j].m > cp[j + 1].m)
            {
                temp = cp[j];
                cp[j] = cp[j + 1];
                cp[j + 1] = temp;
            }
        }
    printf("\nResult\n");
    for (i = 0; i < N; i++)
    {
        printf("%8.3f+%8.3fi\n", cp[i].x, cp[i].y);
    }
        
}
