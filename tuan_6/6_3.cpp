#include <iostream>
#include <string>
int Dem(std::string s){
	int dem = 0;
	for(int i= 0; i<s.length(); i++){
		if(s[i] == ' ')
		dem += 1;
	}
	return dem;
}
int main(){
	std::string s;
	std::cout<<"Nhap chuoi ";
	getline(std::cin,s);
	std::cout<<"So cach trong "<<Dem(s);
}
