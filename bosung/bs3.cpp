#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
	int giaithua(int n){
		if (n==1)
			return 1;
		return n*giaithua(n-1);
	}
int main(){
	int n;
	std::cout<<"n = ";
	std::cin>>n;
	do{
		std::cout<<"Nhap lai n = ";
		std::cin>>n;
	}
	while (n <0);
	std::cout<<"n! = "<<giaithua(n);
}
