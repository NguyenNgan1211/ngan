#include <iostream>
int Max(int a[],int n){
	int max = a[0];
	for(int i = 0; i <n ; i++){
		if ( a[i]> max)
		max= a[i];
	}
	return max;
}
int Min(int a[],int n){
	int min = a[0];
	for(int i = 0; i <n ; i++){
		if ( a[i] < min)
		min = a[i];
	}
	return min;
}
int main(){
	int n, a[20];
	std::cout<<"Nhap n ";
	std::cin>>n;
	for(int i = 0; i <n ; i++){
		std::cout<<"a [ "<<i<<" ] ";
		std::cin>>a[i]; 
	}
	std::cout<<"Max: "<<Max(a,n)<<std::endl;
	std::cout<<"Min: "<<Min(a,n);
}
