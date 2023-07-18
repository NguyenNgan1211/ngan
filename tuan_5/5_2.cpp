#include <iostream>
#include <string>
int main()
{
    std::string str;
    std::cout<<"Nhap chuoi ";
    std::cin>>str;
    for(int i=0 ; i< str.length(); i++){
    	if((str[i] >= 'A')  && (str[i] <= 'Z'))
    		str[i] += 32 ;
    }
    std::cout<<str;
}

