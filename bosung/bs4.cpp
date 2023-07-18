#include <iostream>
#include <math.h>
int main(){
	float  x;
	std::cout<<"Diem tong ket cua sv: ";
	std::cin>>x;
	if(x>= 8.0){
		std::cout<<"Xep loai gioi ";
	}
	else if((x< 8.0) && (x >= 6.5)){
		std::cout<<"Xep loai kha ";
	}
	else if((x< 6.5) && (x >= 5.0)){
		std::cout<<"Xep loai tb ";
	}
	else if(x < 5.0){
		std::cout<<"Xep loai yeu ";
	}
}
