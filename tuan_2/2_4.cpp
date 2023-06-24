#include <iostream>
#include <math.h>
int main(){
	float s=200.000f;
	for(int i= 1; i<=30;i++){
		s+=1.000f*i;
	}
	std::cout<<"So tien tiet kiem sau 1 thang la "<<s;
}
