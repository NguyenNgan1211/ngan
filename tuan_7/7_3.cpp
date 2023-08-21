#include <iostream>
void Dem(int *a){
	std::string n;
	int dem =0;
	std::cout<<"Nhap chuoi ";
    std::getline(std::cin,n);
    for(int i = 0;i <n.length(); i++){
    	if((n[i] != NULL) && (n[i] != ' '))
    		dem += 1;
    }
    std::cout<<"So ky tu trong chuoi "<<dem;
}
int main(){
	int a;
	Dem(&a);
}
    	
