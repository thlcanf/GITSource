// 试题描述
//    从键盘输入数N和M，请使用循环来输出N行由数M组成的图形。
// 输入
//    输入两个整数N和M，两数间用空格隔开。
// 输出
//    输出相关数字图形。
// 输入示例
//    4 35
// 输出示例
//    35
//    3535
//    353535
//    35353535
// 数据范围
//    输入为int范围的整数

//参考代码：
// #include<stdio.h> 
// int main()
//{
// 	int n;
// 	int i,j,k;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=n-i;j++){
// 			printf(" ");
// 		}
// 		for(k=1;k<=i;k++){
// 			printf("%d",k);
// 		}
// 		for(k=i-1;k>0;k--){
// 			printf("%d",k);
// 		}
// 		printf("\n");
// 	}
// 	for(i=n-1;i>0;i--){
// 			for(j=1;j<=n-i;j++){
// 			printf(" ");
// 		}
// 		for(k=1;k<=i;k++){
// 			printf("%d",k);
// 		}
// 		for(k=i-1;k>0;k--){
// 			printf("%d",k);
// 		}
// 		printf("\n");	
// 	}
// }


#include<stdio.h>
int main()
{
    int a,b,i=1,j=1,n,m;
    scanf("%d %d",&a,&b);
    while (i<=a)
    {
        while(j<=i)
        {
            printf("%d",b);
            j=j+1;
        }
        j=1;
        i=i+1;
        printf("\n");
    }
    return 0;
}