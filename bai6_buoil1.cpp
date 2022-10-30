#include<stdio.h>
int kiemtraSNT(int n);

//ham main cho phep nhap so nguyen n
int main()
{
	int n;
		printf("Nhap so nguyen n= ");
		scanf("%d", &n);

    kiemtraSNT(n);
}
int kiemtraSNT(int n)
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
	
}

