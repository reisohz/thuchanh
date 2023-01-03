#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien
{
	char Masv[50];
	char Hotensv[50];
	char Phai[50];
	float Diemtoan[50];
	float Diemvan[50];
	float DiemAV[50];
	float KQHT;
	char Xeploai[50];	
};

typedef struct SinhVien SINHVIEN;
void Sapxep(SINHVIEN a[], int n);
void Nhapsv(SINHVIEN &x);
void NhapsvN(SINHVIEN a[], int n);
void Xuatsv(SINHVIEN);
void XuatsvN(SINHVIEN a[], int n);


int main()
{
	int n, key;
	SINHVIEN x, a[10];
	while(true)
	{
		system("cls");
		printf("*********************************************************\n");
		printf("**           CHUONG TRINH QUAN LY SINH VIEN            **\n");
		printf("**           1. Nhap DS sinh vien                      **\n");
		printf("**           2. In DS KQHT sinh vien tang dan          **\n");
		printf("**           0. Thoat                                  **\n");
		printf("*********************************************************\n");
		
		
		printf("\n  \t\t AN PHIM CHON: ");
		scanf("%d",&key);
		
		
		switch(key)
		{
			case 1:
				
				getch();
				break;
				
			case 2:
				
				getch();
				break;
				
			case 0:
				
				exit(1);
				
			default:
				printf("\nKhong co chuc nang nay!");
				printf("\nAn phim bat ki de tiep tuc!");
				getch();
				break;
			
				
		}
	}
}


void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\nNhap ma sv: ");
	gets(x.Masv);
	
	fflush(stdin);
	printf("\nNhap ho ten: ");
	gets(x.Hoten);
	
    fflush(stdin);
	printf("\nNhap phai: ");
	gets(x.Phai);
	
	fflush(stdin);
	printf("\nNhap diem Toan: ");
	gets(x.Diemtoan);
	
	fflush(stdin);
	printf("\nNhap diem Van: ");
	gets(x.Diemvan);
	
	fflush(stdin);
	printf("Nhap diem Anh Van: ");
	gets(x.DiemAV)
	
	
	do
	{
		printf("\n Nhap KQHT: ");
		scanf("%f", &x.KQHT);
	}while(x.KQHT<0||x.KQHT>4);
	
	fflush(stdin);
	if (x.KQHT<=1.5)
	{strcpy(x.Xeploai,"Yeu");}
	else
	if (x.KQHT<=2.5)
	{strcpy(x.Xeploai,"Trung binh");}
	else
	if (x.KQHT<=3.0)
	{strcpy(x.Xeploai,"Kha");}
	else
	if (x.KQHT<=3.8)
	{strcpy(x.Xeploai,"Gioi");}
	else
	{strcpy(x.Xeploai,"Xuat sac");}
	
	
}

void NhapsvN(SINHVIEN a[], int n)
{
	for (int i=0;i<n;i++)
	{
		printf("\nNhap sinh vien thu %d",i+1);
		Nhapsv(a[i]);
		
	
	}
}

void Xuatsv(SINHVIEN X)
{
	printf("|%5s|%-18s|%-6s|%10d|%-11s|%12.1f|%-10s|%-10s|",x.Masv,x.Hotensv,x.Phai,x.Diemtoan,x.Diemvan,x.DiemAV,x.KQHT,x.Xeploai);
		
}

void XuatsvN(SINHVIEN a[], int n)
{system("cls");

printf("\n\n|------------------------------------------------------------------------------------\n");
     printf("|Ma SV| Ho ten sinh vien | Phai | Diem toan | Diem van | Diem AV | KQHT | Xep loai |");
     
     
    for(int i=0;i<n;i++)
    {
  printf("\n|------|------------------|------|-----------|----------|---------|------|----------|\n");
  
  Xuatsv(a[i]);
    }
     
}

void Sapxep(SINHVIEN a[], int n)
{
	SINHVIEN tmp;
	for (int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;++j)
		{
			
		}
	}
}



