//ָ�����ά����
// #include <stdio.h>
// void main()
// {
//     int i;
//     int a[4][3] = {{1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12}};
//     int *p = &a[0][0];
//     for (i = 0; i < 12; i++)
//         printf("%3d", *(p + i)); //ע����p+i��a[0][0],a[0][1],a[0][2],a[1][0]......�����p+0,p+1,p+2,p+3...
// }

// #include <stdio.h>
// void main()
// {
//     int i, j, x[4][3] = {{1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12}};
//     int(*p)[3];
//     p = x; /*��ָ�볣��x��ֵ����ָ�����p*/
//     for (i = 0; i < 4; i++)
//         for (j = 0; j < 3; j++)
//             printf("%3d", *(*(p + i) + j));//..ע��˾�
// }

// #include<stdio.h>
// void main()
// {	int i,j,x[4][3] = {{1,5,9},{2,6,10},{3,7,11},{4,8,12}};
// 	int (*p)[3];
// 	p=x;	/*��ָ�볣��x��ֵ����ָ�����p*/
// 	for(i = 0;i < 12;i++)
// 		printf("%3d", *(*p+i) );
// }

//��ĳ��һά��������Ԫ�������ֵ���±꣬�÷���ָ��ֵ�ĺ�����ʵ�֡�
// #include <stdio.h>
// #include <stdlib.h>
// int *MaxValue(int t[], int n)
// {
//     int *p = t;
//     int i;
//     for (i = 0; i < n; i++)
//         if (*p < t[i])
//             p = &t[i];
//     return p;
// }
// void main()
// {
//     int x[5][5], j, *pl = x[0];
//     int(*px)[5] = x;
//     for (j = 0; j < 25; j++)
//         *pl++ = rand();
//     for (j = 0; j < 5; j++, px++)
//     {
//         pl = MaxValue(*px, 5);
//         printf("%d\t", *pl);
//     }
// }

// ��ָ�����鸳ֵ
// #include <stdio.h>
// void main()
// {
//     int x[3] = {123, 456}, y[2][2] = {7, 8, 9}, z = 10, i;
//     int *px[5];
//     px[0] = x;
//     px[1] = &x[1];
//     px[2] = y[0];
//     px[3] = &y[1][0];
//     px[4] = &z;
//     for (i = 0; i < 5; i++)
//         printf("%d\t", *px[i]);
// }

// ָ��ָ���ָ��
// int x=5;//����x��ַΪ2000��
// int *p1=&x;//����p1��ַΪ3000��p1Ϊ5��
// int **p2;//����p2��ַΪ4000��
// p2=&p1,//����p2ָ����p1�ĵ�ַ����Ϊ3000��
// #include <stdio.h>
// void main()
// {
//     int x[5] = {1, 3, 5, 7, 9}, y[2][2] = {2, 4, 6, 8}, z = 10;
//     int *px, *py, *pz, **p;
//     int i, j;
//     pz = &z;
//     p = &pz;
//     printf("*pz = %d\t**p = %d\t*(*p) = %d\n", *pz, **p, *(*p));
//     px = x;
//     p = &px;
//     for (i = 0; i < 5; i++)
//         printf("%d\t", *(*p + i));
//     printf("\n");
//     py = y[0];
//     p = &py;
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//             printf("%d\t", *(*p + i * 2 + j));
//         printf("\n");
//     }
//     for (i = 0; i < 2; i++)
//     {
//         py = y[i];
//         p = &py;
//         for (j = 0; j < 2; j++)
//             printf("%d\t", *(*p + j));
//         printf("\n");
//     }
// }


// ����Fibonacci����ǰ20��
// #include<stdio.h>
// void main()
// {	int *px,x[20] = {1,1},i;	
// 	void GenFib(int *m);
// 	px=x;	
// 	GenFib(px);
// 	for(i = 0;i < 20;i++)
// 		printf("%d  ",x[i]);
// }
// void GenFib(int *m)
// {	int i;
// 	for(i=2;i<20;i++)
// 		*(m+i)= *(m+i-1)+*(m+i-2);
// }


// ����ָ������Сд��ĸת��Ϊ��д��ĸ
// #include <stdio.h>
// #include<string.h>
// void main()
// {
//     char *t;
//     t="Beijing University Of";
//     while (*t!='\0')
//     {
//         if ((*t>='A') && (*t<='Z'))
//         {
//             putchar(*t);
//         }
//         else
//         {
//             if ((*t>='a') && (*t<='z'))
//             {
//                 putchar(*t-32);
//             }
//             else
//             {
//                 putchar(*t);
//             }
            
//         }
//         t++;
//     }
// }
