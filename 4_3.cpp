#include <iostream>
int main(){
	int n,m,a[10][10], dem = 0 ;
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
			if( (a[i][j] % 2 == 0) && (a[i][j] > 0) )
				dem += 1;
		}
	}
	std::cout<<"So cac phan tu duong chan "<<dem;
}
