// //数据输入int整数型（整型变量）
// #define PI 3.1415926(赋值)
// #include<stdio.h>
// int main()
// {
// 	int a,b;
// 	scanf("%d",&a);
// 	b=PI*a;
// 	printf("%d",b);
// 	return 0;
// }
//此为int整数输入，注意scanf()内的"%d"以及"&a",刚刚输入时有错误！
//同时，输出b时记得用"%d",b不可用printf("b\n")这个是输出b，属于低级错误



// // //数据输入float实型变量输入
// #include<stdio.h>
// int main()
// {
// 	float x,y,z,m,n,d;//单精度实型变量(七位有效数字)
// 	scanf("%f",&x);
// 	y=z=m=n=d=23.67*x;
// 	printf("%.0f,%.2f,%.4f,%.7f,%.9f\n",y,z,m,n,d);//注意float精度为七位有效数字，虽然可以输出9位小数，但是精度有着错误，此后小数均为凑数！
// 	return 0;
// }


// //数据输入double实型变量输入
// #include<stdio.h>
// int main()
// {
// 	double a,b,c,d;
// 	scanf("%lf",&a);
// 	b=c=d=2.34567*a;
// 	printf("%.0lf,%.3lf,%.8lf",b,c,d);//double输出精度较高！可达16位有效数字！
// 	return 0;
// }


// //算术运算符
// #include<stdio.h>
// int main()
// {
// 	int a=5,b,c,d,f;
// 	b=++a;//a增1后再参加其他运算
// 	printf("%d\n",a );
// 	c=--a+1;//a减1后再参加其他运算
// 	printf("%d\n",a );
// 	d=a+++1;//a参与运算后，a的值再增1
// 	printf("%d\n",a );
// 	f=a--;//a参与运算后，a的值再减1
// 	printf("%d\n",a );
// 	printf("%d,%d,%d,%d",b,c,d,f);
// 	return 0;
// }
// //输出结果为6,5,6,5,6,6,6
// //此处需注意一点：每次计算完后a的值是会变的！


// //强制转换
// #include<stdio.h>
// int main()
// {
// 	double a=1.23456789;
// 	printf("%f,%ld,%d\n",(float) a,(long) a,(int) a );//..必需加上强制转换符，否则就会随机生成数字(除了%lf)
// 	return 0;
// }
// //原代码：double a=1.23456789,b,c,d;
// //	     b=float(a);
// //	     c=long(a);
// //	     d=int(a);
// //	     printf("......")    //此处是错误的，因为你原先就使用了double a，b，c，d，
// //	                           因此最后再将a的各类强制转换数值赋值给b,c,d,得出来的都要经过
// //	                           double型转换，因此相当于进行了两次转换，最后结果为“0.000000”,
// //	                           即经过了两次转换！而若用以上代码则输出结果为：“1.234568,1,1”


// //数值运算
// 
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     c = (a = 10, b = 20, a + b);//注意这句语句，
//     printf("%d\n", c);
//     return 0;
// }



// //while循环
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
//N(3+4,5+6)  这个不是7*11=77，应该为3+4*5+6=29；