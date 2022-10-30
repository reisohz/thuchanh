#include<stdio.h>
int KTNT(int n);
int TONGNT(int n);

//ham main cho phep nhap so nguyen n
int main()
{
	int n;
	do
	{
		
		printf("Nhap so nguyen n= ");
		scanf("%d", &n);
}while(n<0||n>20);
    KTNT(n);
    TONGNT(n);
return 0;
}
int KTNT(int n)
{
	int dem=0;
	for(int i=2;i<=n;i++)
	{
		if (n%i==0)
		dem++;
	}
	
	if(dem==1)
	printf("\n So %d la so nguyen to ",n);
	else
	printf("\n So %d khong phai la so nguyen to ", n);
return dem;
}

int TONGNT(int n)
{   int tong=0;

for(int j=2;j<=n;j++)
{
	if(KTNT(j)==1)
	{
	tong=tong+j;
    }   
}
	printf("\n Tong cac so nguyen to tu 1 den %d la:  %d",n, tong);	
return 0;

	
}

