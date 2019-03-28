#include <iostream>
using namespace std;
 
int main(){
 
 std::cout << "Welcome to MBC Multiplication-Calc" << endl;
 std::cout << "Do you want to Multiply:" <<  endl;
 std::cout << "1.yes"<< endl;
 std::cout << "2.no"<< endl;
 
 
 int answer;
 std::cin >> answer;
 
 if(answer == 1){
 	std::cout << "Please Input your First Number: " << endl;
 	int number;
 	std::cin >> number;
 	std::cout << "Please Input your second Number: " << endl;
 	int number2;
 	std::cin >> number2;
 	std::cout << "Your Number is: " << number * number2 << endl;
 }else if(answer == 2){
 	std::cout << "Okay Bye Thanks for coming!" << endl;
 }
 
	return 45+90;
}

