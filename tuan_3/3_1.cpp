#include <iostream>
int main(){
	int n,s=0;
	int a[100];
	std::cout<<"Nhap so phan tu "<<std::endl;
	std::cin>>n;
	std::cout<<"Nhap mang";
	for (int i =0 ; i<n; i++){
		std::cin>>a[i];
		s += a[i];
	}
	std::cout<<"Tong cua mang la "<<s<<std::endl;
	std::cout<<"Trung binh cong cua mang la "<<(s/n);

}
