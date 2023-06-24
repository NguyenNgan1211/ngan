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
	std::cin>>n;
	std::cout<<"n = "<<n<<std::endl;
	std::cout<<"n! = "<<giaithua(n);
}
