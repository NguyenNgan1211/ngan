#include <iostream>
void Giam(int a[], int n){
	int temp;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] < a[j]){
		            temp=a[i];
               		a[i]=a[j];
                	a[j]=temp;
			}
		}
	}
}
void Tang(int a[], int n){
	int temp;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] > a[j]){
		            temp=a[i];
               		a[i]=a[j];
                	a[j]=temp;
			}
		}
	}
}
void PrintArr(int a[], int n){
	for(int i=0;i<n;i++)
    	std::cout<<" "<<a[i];
}
int main(){
	int n;
	int a[100];
	std::cout<<"So phan tu "<<std::endl;
	std::cin>>n;
	std::cout<<"Nhap mang";
	for (int i =0 ; i<n; i++){
		std::cin>>a[i];
	}
	std::cout<<"Sap xep mang giam dan ";
	Giam(a,n);
	PrintArr(a,n);
	std::cout<<std::endl<<"Sap xep mang tang dan ";
	Tang(a,n);
	PrintArr(a,n);
	
}
	
