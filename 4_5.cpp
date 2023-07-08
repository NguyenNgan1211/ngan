#include <iostream>
int main(){
	int n,m,a[10][10], b[10][10],c[10][10];
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
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			std::cout<<"b [ "<<i<<" ] [ "<<j<<" ] = ";
			std::cin>>b[i][j];	
		}		
	} 
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			std::cout<<c[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
}
	
