#include<stdio.h>
int timUSCLN(int a, int b){
	if (b==0) return a;
	return timUSCLN(b, a%b);
}
int main(){
	int a, b;
	printf("Nhap so nguyen duong a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b: ");
	scanf("%d", &b);
	// tim uoc so chung lon nhat
	printf("USCLN cua %d va %d la: x=%d", a, b, timUSCLN(a,b));
}
