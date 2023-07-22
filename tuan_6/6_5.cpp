#include <iostream>
int Max(int a[20][20],int n, int m){
	int max = a[0][0];
	for(int i = 0; i <n ; i++){
		for(int j = 0; j <m ; j++){
			if ( a[i][j]> max)
			max= a[i][j];
		}
	}
	return max;
}
int Min(int a[20][20],int n, int m){
	int min = a[0][0];
	for(int i = 0; i <n ; i++){
		for(int j = 0; j <m ; j++){
			if ( a[i][j] < min)
			min = a[i][j];
		}
	}
	return min;
}
int main(){
	int n, a[20][20],m;
	std::cout<<"Nhap n ";
	std::cin>>n;
	std::cout<<"Nhap m ";
	std::cin>>m;
	for(int i = 0; i <n ; i++){
		for(int j = 0; j <m ; j++){
			std::cout<<"a [ "<<i<<" ] "<<" [ "<<j<<" ] ";
			std::cin>>a[i][j]; 
		}
	}
	std::cout<<"Max: "<<Max(a,n,m)<<std::endl;
	std::cout<<"Min: "<<Min(a,n,m);
}
