#include <iostream>
int main(){
	int n,m,a[10][10];
	std::cout<<"n = ";
	std::cin>>n;
	std::cout<<"m = ";
	std::cin>>m;
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			std::cout<<"a [ "<<i<<" ] [ "<<j<<" ] = ";
			std::cin>>a[i][j];	
		}		
	} 
	int max = a[0][0];
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			if (max < a[i][j]) 
				max = a[i][j];
		}
	}
	int min = a[0][0];
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			if (min > a[i][j]) 
				min = a[i][j];
		}
	}
	std::cout<<"Max mang 2 chieu la "<<max<<std::endl;
	std::cout<<"Min mang 2 chieu la "<<min;
}
