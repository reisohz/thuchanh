#include <stdio.h>
 
int main()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
 
    printf("a = %d \nb = %d\n", a, b);
 
    int temp = a;
    a = b;
    b = temp;
 
    printf("Sau khi hoan vi:\na = %d\nb = %d\n", a, b);
    return 0;
}
