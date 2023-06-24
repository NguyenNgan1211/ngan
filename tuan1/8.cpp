#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Nhap a, b,c: ";
	cin>>a>>b>>c;
	int max = (a>b) ? (a>c ? a:c):(b>c? b :c);// so sanh a,b, dung so sanh a,c , sai so sanh b,c
	cout<<"So lon nhat trong a,b,c la "<<max;	
}
