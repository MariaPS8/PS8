#include <iostream>
#include <cstring>

int main(){
	
	std::cout << "Hello";
	int x;
	std::cin >> x;
	if( x > 0){
		std::string tmp;
		std::cin >> tmp;
		std::cout << tmp;
	}
}
