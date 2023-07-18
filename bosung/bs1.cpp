#include <iostream>
int main(){
	int a,b;
	std::cout<<"Nhap a va b ";
	std::cin>>a>>b;
	if(a==0){
		if(b==0)
			std::cout<<"Phuong trinh vo so nghiem";
		else
			std::cout<<"Phuong trinh vo nghiem";
	}
	else 
		std::cout<<"Phuong trinh co nghiem la "<<(float)(-b/a);
}
