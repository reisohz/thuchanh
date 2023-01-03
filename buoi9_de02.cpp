#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <ctype.h>
using namespace std;
int Nhapchuoi(char s[50]);
int xoakt(char s[50]);
int xoa(char s[50]);
int demkt(char s[50]);
int demtu(char s[50]);
int chuanhoa(char s[50]);
int dem(char *s,char t);



int Nhapchuoi(char s[50])
{
	printf("\n Nhap chuoi: ");
	gets(s);
}




int xoa(char s[50], int vitrixoa)
{
	int n=strlen(s);
 	for(int i=vitrixoa;i<n;i++)
 	s[i]=s[i+1];
 	s[n-1]='\0';
}


int xoakt(char s[50])
{
	{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,i);
		i--;
	}
	if(s[0]==' ')
	xoa(s,0);
	if(s[strlen(s)-1]==' ')
	xoa(s,strlen(s)-1);
	
}
}



int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' '&& s[i+1]!=' ')
		s[i+1]=s[i+1]-32;
	}
	
}

int dem(char s[50],char t)
{
 int dem=0;
 for(int i=0;i<=strlen(s);i++)
 {
 if(s[i]==t) dem=dem+1;  
 }
 return dem;
}


int main(){
 char s[50],key;
 char t;
	while(true)
	{
		system("cls");
		printf("******************************************\n");
		printf("**         NHAP CHUAN HOA CHUOI         **\n");
		printf("**      1. Nhap va chuan hoa chuoi      **\n");
		printf("**      2. Nhap va dem ky tu            **\n");
		printf("**      0. Thoat                        **\n");
		printf("******************************************\n");
        
		fflush(stdin);
		printf("\n  \t\t AN PHIM CHON: ");
		scanf("%d",&key);
				
		switch(key)
		{
			case 1:
				fflush(stdin);
				Nhapchuoi(s);
				chuanhoa(s);
				printf("\n Chuoi chuan hoa: ");
	            puts(s);
				getch();
				break;
			case 2:
				fflush(stdin);
				printf("vui long 1 ky tu: ");
                scanf("%c",&t);
                printf("%c ",t);
                printf("so lan xuat hien cua ky tu %c la: %d",t,dem(s,t));
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
