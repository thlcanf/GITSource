// //��������int�����ͣ����ͱ�����
// #define PI 3.1415926(��ֵ)
// #include<stdio.h>
// int main()
// {
// 	int a,b;
// 	scanf("%d",&a);
// 	b=PI*a;
// 	printf("%d",b);
// 	return 0;
// }
//��Ϊint�������룬ע��scanf()�ڵ�"%d"�Լ�"&a",�ո�����ʱ�д���
//ͬʱ�����bʱ�ǵ���"%d",b������printf("b\n")��������b�����ڵͼ�����



// // //��������floatʵ�ͱ�������
// #include<stdio.h>
// int main()
// {
// 	float x,y,z,m,n,d;//������ʵ�ͱ���(��λ��Ч����)
// 	scanf("%f",&x);
// 	y=z=m=n=d=23.67*x;
// 	printf("%.0f,%.2f,%.4f,%.7f,%.9f\n",y,z,m,n,d);//ע��float����Ϊ��λ��Ч���֣���Ȼ�������9λС�������Ǿ������Ŵ��󣬴˺�С����Ϊ������
// 	return 0;
// }


// //��������doubleʵ�ͱ�������
// #include<stdio.h>
// int main()
// {
// 	double a,b,c,d;
// 	scanf("%lf",&a);
// 	b=c=d=2.34567*a;
// 	printf("%.0lf,%.3lf,%.8lf",b,c,d);//double������Ƚϸߣ��ɴ�16λ��Ч���֣�
// 	return 0;
// }


// //���������
// #include<stdio.h>
// int main()
// {
// 	int a=5,b,c,d,f;
// 	b=++a;//a��1���ٲμ���������
// 	printf("%d\n",a );
// 	c=--a+1;//a��1���ٲμ���������
// 	printf("%d\n",a );
// 	d=a+++1;//a���������a��ֵ����1
// 	printf("%d\n",a );
// 	f=a--;//a���������a��ֵ�ټ�1
// 	printf("%d\n",a );
// 	printf("%d,%d,%d,%d",b,c,d,f);
// 	return 0;
// }
// //������Ϊ6,5,6,5,6,6,6
// //�˴���ע��һ�㣺ÿ�μ������a��ֵ�ǻ��ģ�


// //ǿ��ת��
// #include<stdio.h>
// int main()
// {
// 	double a=1.23456789;
// 	printf("%f,%ld,%d\n",(float) a,(long) a,(int) a );//..�������ǿ��ת����������ͻ������������(����%lf)
// 	return 0;
// }
// //ԭ���룺double a=1.23456789,b,c,d;
// //	     b=float(a);
// //	     c=long(a);
// //	     d=int(a);
// //	     printf("......")    //�˴��Ǵ���ģ���Ϊ��ԭ�Ⱦ�ʹ����double a��b��c��d��
// //	                           �������ٽ�a�ĸ���ǿ��ת����ֵ��ֵ��b,c,d,�ó����Ķ�Ҫ����
// //	                           double��ת��������൱�ڽ���������ת���������Ϊ��0.000000��,
// //	                           ������������ת�������������ϴ�����������Ϊ����1.234568,1,1��


// //��ֵ����
// 
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     c = (a = 10, b = 20, a + b);//ע�������䣬
//     printf("%d\n", c);
//     return 0;
// }



// //whileѭ��
// #include<stdio.h>
// int main()
// {
// 	int i;
// 	i=1;
// 	while(i<=60)
// 	{
// 		printf("*");
// 		i=i+1;
// 	}
// 	printf("\n");
// 	return 0;
// }

// void main()
// {
// 	int i=1,sum=0;
// 	while(i<=100)
// 	{
// 		sum=sum+i;
// 		i++;
// 	}
// 	printf("sum=%d\n",sum );
// }


// #include<stdio.h>
// int main()
// {
// 	float x,sum;
// 	sum=0.0;
// 	scanf("%f",&x);
// 	while (x>0.0)
// 	{
// 		sum=sum+x;
// 		scanf("%f",&x);
// 	}
// 	printf("sum=%f\n",sum );
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	float x,sum;
// 	sum=0.0;
// 	do
// 	{
// 		scanf("%f",&x);
// 		sum=sum+x;
// 	}while(x>0.0);
// 	printf("sum=%f\n",sum-x);
// 	return 0;
// }

//#define N(x,y) x*y
//N(3+4,5+6)  �������7*11=77��Ӧ��Ϊ3+4*5+6=29��