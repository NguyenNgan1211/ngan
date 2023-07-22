#include <iostream>
void print(int a[],int n){
	for(int i = 0 ; i< n; i++){	
		std::cout<<a[i]<<" ";
	}
}
void Inc(int a[],int n){
	for(int i = 0 ; i< n-1; i++){
		for(int j= i+ 1; j <n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i]= a[j];
				a[j] = temp;
			}												
		}
	}
}
void Dec(int a[],int n){
	for(int i = 0 ; i< n-1; i++){
		for(int j= i+ 1; j <n;j++){
			if(a[i] < a[j]){
				int temp = a[i];
				a[i]= a[j];
				a[j] = temp;
			}												
		}
	}
}
int main(){
	int n, a[20];
	std::cout<<"Nhap n ";
	std::cin>>n;
	for(int i = 0; i <n ; i++){
		std::cout<<"a [ "<<i<<" ] ";
		std::cin>>a[i]; 
	}
	Inc(a,n);
	std::cout<<"Mang sx theo thu tu tang dan: ";
	print(a,n);
	std::cout<<std::endl;
	Dec(a,n);
	std::cout<<"Mang sx theo thu tu giam dan: ";
	print(a,n);
}
