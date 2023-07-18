#include <iostream>
#include <math.h>
int main(){
	int n;
	float s=0.0f;
	std::cout<<"n = ";
	std::cin>>n;
	do {
        std::cout << "Nhap n (n > 0): ";
        std::cin >> n;
    } while (n <= 0);
    for (int i = 1; i <= n; ++i) {
        s += 1.0 / i;
    }
    std::cout << "Tong s = " << s << std::endl;
	}
