#include <iostream>
int main(){
	int n,m,a[10][10], s = 0 ;
	std::cout<<"n = ";
	std::cin>>n;
	std::cout<<"m = ";
	std::cin>>m;
	if (n = m){
		for(int i = 0; i < n; i++ ){
			for(int j = 0; j < m; j++){
				std::cout<<"a [ "<<i<<" ] [ "<<j<<" ] = ";
				std::cin>>a[i][j];	
			}			
		} 
		for(int i = 0; i < n; i++ ){
			for(int j = 0; j < m; j++){
				if (i == j)
					 s += a[i][j];
			}
		}
		std::cout<<"Tong phan tu tren duong cheo chinh "<<s;
	}	
}
