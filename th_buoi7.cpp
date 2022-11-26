#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void NhapMang(int *a, int n);
void XuatMang(int *a, int n);
void Giatriln(int *a, int n);
void Tinhtich(int *a, int n);
void insonguyento(int *a, int n);
void TongNT(int *a,int n);
void nhapx(int *a, int n);
void sapxep(int *a, int n);
int main()
{
    int n;
 
    do {
        printf( "\nNhap so luong phan tu cua mang: " );
        scanf( "%d", &n );
 
        if (n <= 0) {
            printf( "So luong phan tu cua mang khong hop le." );
        }
    } while ( n <= 0 );
 
    int *a = (int *)malloc(n * sizeof(int *));
    NhapMang( a, n );
    printf( "\nMang vua nhap la: " );
    XuatMang( a, n );
    Giatriln( a,n) ;
    Tinhtich( a, n);
    insonguyento(a,n);
    TongNT(a,n);
    nhapx(a,n);
    sapxep(a,n);
    free(a);
    getch();
}

void NhapMang(int *a, int n)
{
    for (int ii = 0; ii < n; ii++)
    {
        printf("\nNhap vao a[%d] = ", ii);
        scanf("%d", &a[ii]);
    }
}

void XuatMang(int *a, int n)
{
    for (int ii = 0; ii < n; ii++)
    {
        printf("%4d", a[ii]);
    }
}

void Giatriln(int *a, int n)
{
	int max=0 ,i;
for (int ii =0; ii<n; ii++)
if (a[ii]>max)
max = a[ii];
printf("\n So phan tu lon nhat la la %d", max);
}

void Tinhtich(int *a, int n)
{
	int tich=1;
   for (int ii=0; ii<n; ii++)
   tich = tich*a[ii];
   printf("\n Tich cac phan tu la %d", tich);
}

int kiemtra_NT(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}

void insonguyento(int *a, int n)
{
	printf("\nCac so nguyen to co trong mang la: \n");
    for(int ii=0;ii<n;ii++)
        if(kiemtra_NT(a[ii]))
            printf("%5d",a[ii]);
}
void TongNT(int *a,int n)
{
	int ii;
 int snt=0;
  for(ii=0;ii<n;ii++)
{
 if(kiemtra_NT(a[ii]))
 {
snt+=a[ii];
 }
}
printf("\nTong cac so nguyen to trong mang la: %d \n",snt);
}

void nhapx(int *a, int n)
{
	printf("Nhap vao gia tri cho x: ");
   scanf("%d", &n);
  
   printf("\n Vi tri cua x trong mang la: \n");
   for (int i = 0;i<n;i++)
   {
   	if(a[i]==n)
   	{
   		printf("%d \t",i);
    }
   }
   
}
   
void sapxep(int *a, int n)
{
	int tg;
    for(int ii = 0; ii < n - 1; ii++){
        for(int j = ii + 1; j < n; j++){
            if(a[ii] > a[j]){
                tg = a[ii];
                a[ii] = a[j];
                a[j] = tg;        
            }
        }
    }
    
    
    printf("\nMang da sap xep la: ");
    for(int ii = 0; ii < n; ii++){
        printf("%5d", a[ii]);
    }
}
