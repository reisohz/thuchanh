#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include <cstdlib>
int main()
{ char s[50], s2[50], key;
while(true)
{
system("cls");
printf("************************************\n");
printf("**      THAO TAC TREN CHUOI        **\n");
printf("** 1. Nhap va chuan hoa chuoi      **\n");
printf("** 2. Dem so tu trong  	chuoi      **\n");
printf("** 3. Ghep chuoi                   **\n");
printf("** 4. Kiem tra doi xung            **\n");
printf("** 5. In chuoi dao nguoc           **\n");
printf("** 0. Thoat                        **\n");
printf("*************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
//goi ham de thuc hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 2:
//goi ham thuc de hien cong viec tuong ung
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 3:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung

getch();

break;

case 4:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
break;
case 5:
printf("\nBam phim bat ky de tiep tuc!");
//goi ham thuc de hien cong viec tuong ung
getch();
break;
case 0:
exit(1);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
}
