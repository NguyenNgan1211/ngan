#include <iostream>
#include <string>
int main()
{
	int dem = 0;
    std::string str;
    std::cout<<"Nhap chuoi ";
    std::cin>>str;
    for(int i=0 ; i< str.length(); i++){
    	if((str[i] >= 'a')  && (str[i] <= 'z') || (str[i] >= 'A')  && (str[i] <= 'Z') )
    		dem += 1 ;
    }
    std::cout<<"So chu cai la "<<dem;
}

