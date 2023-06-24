#include <iostream>
#include <string>
std::string words(int number)
{
	if (number >= 1 && number <= 9) {
	std::string numbers[] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
	return numbers[number-1];
	}
	
	else if (number > 9) {
        if (number % 2 == 0) {
            return "even";
        } else {
            return "odd";
        }
    }
    return "";
}
int main(){
	int a,b;
	std::cin>>a>>b;
	if(a<=b ){
		for(int i = a ; i<= b; i++){
			std::cout<<words(i)<<std::endl;
	}
}
	else {
		std::cout<<words(a)<<std::endl;
		std::cout<<words(b)<<std::endl;
}
}
