#include <stdio.h>
 int main(){
 	unsigned char a =10, b =4; // a: 1010, b:0100
 	printf("He co so 10:\n");
    printf("a & b = %u\n", a & b); // 0000
    printf("a | b = %u\n", a | b); //1110
    printf("a ^ b = %u\n", a ^ b); //1110
    printf("a << 1 = %u\n", a << 1);//0001 0100
    printf("a >> 1 = %u\n", a >> 1);//0101

    printf("Ho co so 8:\n");
    printf("a & b = %o\n", a & b);
    printf("a | b = %o\n", a | b);
    printf("a ^ b = %o\n", a ^ b);
    printf("a << 1 = %o\n", a << 1);
    printf("a >> 1 = %o\n", a >> 1);
}
