// ��������
//    �Ӽ���������N��M����ʹ��ѭ�������N������M��ɵ�ͼ�Ρ�
// ����
//    ������������N��M���������ÿո������
// ���
//    ����������ͼ�Ρ�
// ����ʾ��
//    4 35
// ���ʾ��
//    35
//    3535
//    353535
//    35353535
// ���ݷ�Χ
//    ����Ϊint��Χ������

//�ο����룺
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