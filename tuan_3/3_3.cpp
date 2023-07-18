#include <iostream>
int main(){
	int n, dem = 0;
	int a[100];
	std::cout<<"So phan tu "<<std::endl;
	std::cin>>n;
	std::cout<<"Nhap mang";
	for (int i =0 ; i<n; i++){
		std::cin>>a[i];
		if (a[i] > 0)
			dem += 1;
	}
	std::cout<<"Mang co "<<dem<<" so duong";
}
	
