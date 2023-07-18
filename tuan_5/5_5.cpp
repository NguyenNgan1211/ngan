#include <iostream>
#include <string>
int main()
{
	int dem = 0;
    std::string str;
    std::cout<<"Nhap chuoi ";
    std::getline(std::cin,str);
    for(int i=0 ; i< str.length(); i++){
    	if(str[i] == ' ')
    		dem += 1 ;
    }
    std::cout<<"So cach trong la "<<dem;
}

