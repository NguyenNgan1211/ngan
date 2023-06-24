#include <iostream>
#include <math.h>
int main(){
	int n;
	float s=0.0f;
	std::cin>>n;
	std::cout<<"n = "<<n<< std::endl;
	for(int i= 1; i<=n; i++){
		s+= 1.0f/i;
	}
	std::cout<<"S = "<<s;
}
