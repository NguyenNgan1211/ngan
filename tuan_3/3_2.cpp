#include <iostream>
int main(){
	int n;
	int a[100];
	std::cout<<"So phan tu "<<std::endl;
	std::cin>>n;
	std::cout<<"Nhap mang";
	for (int i =0 ; i<n; i++){
		std::cin>>a[i];
	}
	int  max = a[0];
	for (int i =0 ; i<n; i++){
		if( max < a[i]) 
			max =a[i];
	}
	int min = a[0];
	for (int i =0 ; i<n; i++){
		if( min > a[i]) 
			min =a[i];
	}
	std::cout<<"Max cua mang la "<<max<<std::endl;
	std::cout<<"Min cua mang la "<<min;
}
