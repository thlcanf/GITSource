// ��������
// ����10����������̰��ֵ�˳�������������ʹ������ʵ�֡�
// ����
// �������ʮ�У�ÿ��Ϊһ�����������Ⱦ�������20��
// ���
// ���ֵ�˳�����������ÿ��Ϊһ��������
// ����ʾ��
// Slovak
// China
// Japan
// England
// Sweden
// Lithuania
// Monaco
// Croatia
// Malta
// Luxembourg
// ���ʾ��
// China
// Croatia
// England
// Japan
// Lithuania
// Luxembourg
// Malta
// Monaco
// Slovak
// Sweden
// ���ݷ�Χ
// ���������Ϊ�ַ��������������ַ������Ȳ�����20

#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	char s[10][20],t[20];
	for(i=0;i<10;i++)
    {
        gets(s[i]);
    }
		
	for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        if(strcmp(s[j],s[j+1])>0)
        {
			strcpy(t,s[j]);
            strcpy(s[j],s[j+1]);
            strcpy(s[j+1],t);
        }
    }
    
	for(i=0;i<10;i++)
		puts(s[i]);
	return 0;
}
//�Բ����
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[10][20],m[20];
//     int i;
//     for ( i = 0; i < 10; i++)
//     {
//         gets(s1[i]);
//     }
//     for ( i = 0; i < 8; i++)
//     {
        
//         if (strcmp(s1[i],s1[i+1])>0)
//         {
//             strcpy(m,s1[i]);
//             strcpy(s1[i],s1[i+1]);
//             strcpy(s1[i+1],m);
//         }
        
//     }
//     for ( i = 0; i < 10; i++)
//     {
//         puts(s1[i]);
//     }
//     return 0;

// }