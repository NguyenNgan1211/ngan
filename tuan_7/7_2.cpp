#include <iostream>
void exchange(int *a, int *b){
	int temp = *a;
	*a= *b;
	*b= temp;
}
int main(){
	int n,m;
	std::cout<<"Nhap n: ";
	std::cin>>n;
	std::cout<<"Nhap m: ";
	std::cin>>m;
	int a = n;
	int b = m;
	exchange(&a,&b);
	std::cout<<a<<std::endl;
	std::cout<<b;
}
	
	
