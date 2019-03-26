#include <iostream>
using namespace std;

int main(){
	std::cout << "Welcome to Addition-Calc v1.0!"<< std::endl;
	std::cout << "Enter a your first number to add: "<< std::endl;
    
    int numinput1;
    std::cin >> numinput1;
    std::cout << "Okay enter your second number: " << std::endl;
    int numinput2;
    std::cin >> numinput2;
    std::cout << "Here is your number: "<< std::endl;
    std::cout << numinput1 + numinput2;
    

	
  return 0;
}
