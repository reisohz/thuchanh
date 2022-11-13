#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
int main()
{ int n, key;
while(true)
{
system("cls");
printf("********************************************************\n");
printf("**         CHUONG TRINH QUAN LY SINH VIEN             **\n");
printf("**            1. Nhap DS sinh vien                    **\n");  
printf("**            2. In danh sach sinh vien               **\n");
printf("**            3. Sap xep theo Kq cuoikhoa             **\n");
printf("**            4. In sinh vien Gioi, Xuat sac          **\n");
printf("**            5. Tim kiem sinh vien theo MASV         **\n");
printf("**            0. Thoat                                **\n");
printf("********************************************************\n");

     

printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);

 

switch(key)
{
case 1:
do{
printf("\nNHAP SO LUONG SINH VIEN: "); scanf("%d", &n);
}while(n <= 0);

 

//qoi ham de thuc hien cong viec
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;

case 2:
//go%i hom thuc de hien cong viec
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;

case 3:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec
getch();
break;

case 4:
printf("\nBam phim bat ky de tiep tuc");
//goi ham thuc de hien cong viec
break;

case 5:
printf("\nBam phim bat ky de tiep tuc");
//goi ham thuc de hien cong viec
getch();
break;

case 0:
exit(1);

default:
printf("\nkhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}
 

 

