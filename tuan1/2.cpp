#include <conio.h>
#include <stdio.h>
int main()
{ 
	int a, b;
	printf("Nhap hai so a, b = ");
	scanf("%d%d", &a, &b);
	printf("\nTong hai so %5d va %5d la %5d", a, b, a + b);
	printf("\nHieu hai so %5d va %5d la %5d", a, b, a - b);
	printf("\nTich hai so %5d va %5d la %5d", a, b, a * b);
	printf("\nThuonghaiso%5dva%5dla%5.2f",a,b,(float)a/b);//ép kieu
	getch(); //doc ky tu ban phim
	return 0;
}
