#include <conio.h>
#include <stdio.h>
int main()
{
	float a, b, max; //thieu;
	printf("Nhap hai so a, b = ");
	scanf("%f%f", &a, &b);
	max = a > b ? a : b; // sai bien Max-> max
	printf("\nSo lon nhat cua %5.2f va %5.2f la: %5.2f", a, b, max);
	getch();
	return 0;
}
