#include <iostream>
void nhiphan(int n){
	std::string s;
	do{
		if(n % 2 == 0){
			s += '0';
		}
		if(n % 2 == 1){
			s += '1';
		}
		n /= 2;
	}
	while(n>0);
	//dao nguoc chuoi
	int i =0;
	int j = s.length() - 1;
	while ( i< j){
		char a = s[i];
		s[i] = s[j];
		s[j] = a;
		i++;
		j--;
	}
	std::cout<<"xau nhi phan "<<s;	
}	
int main(){
	int n;
	do {
		std::cout<<"Nhap n ";
		std::cin>>n;
	}
	while (n<0);
	nhiphan(n);
}
