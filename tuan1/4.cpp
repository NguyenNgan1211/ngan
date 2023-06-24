#include <conio.h>
#include <stdio.h>
//#define PI 3.14
const float PI = 3.14f;
int main()
{
	float r, cv, dt;
	printf("Nhap r = ");
	scanf("%f", &r);
	cv = PI * r;
	dt = PI * r * r;
	printf("\nBan kinh = %5.2f", r);
	printf("\nChu vi = %5.2f", cv);
	printf("\nDien tich = %5.2f", dt);
	getch();
	return 0;
}
