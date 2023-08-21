#include <iostream>
int main(){
	int n;
	std::cout<<"Nhap n: ";
	std::cin>>n;
	int *arr = new int [n];
	std::cout<<"Nhap cac phan tu ";
	for(int i=0 ; i<n; i++){
		std::cin>>arr[i];
	}
	std::cout<<"Hien thi phan tu ";
	for(int i=0 ; i<n; i++){
		std::cout<<arr[i]<<" ";
	}
	
}
	
	
