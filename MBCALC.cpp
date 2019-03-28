#include <iostream>
using namespace std;

int main(){
   std::cout << "Welcome to MBCALC!"<< endl;
   std::cout << "What operation do you need: " << endl;
   
   std::cout << "1.Addition" << endl;
   std::cout << "2.Subtraction" << endl;
   std::cout << "3.Multiplication" << endl;
   std::cout << "4.Division"<< endl;
   std::cout << "5.Square roots(COMING SOON)!"<< endl;
   
   int answer;
   std::cin >> answer;
   
   if(answer == 1){
   	std::cout<< "Okay input your first Number: " << endl;
   	int number;
   	std::cin >> number;
   	std::cout<< "Okay input your second Number: " << endl;
   	int number2;
   	std::cin >> number2;
   	std::cout<< "Here is your number: " << number + number2 << endl;
   }else if(answer == 2){
   	std::cout<< "Okay input your first Number: " << endl;
   	int number3;
   	std::cin >> number3;
   	std::cout<< "Okay input your second Number: " << endl;
   	int number4;
   	std::cin >> number4;
   	std::cout<< "Here is your number: " << number3 - number4 << endl;
   }else if(answer == 3){
   	std::cout<< "Okay input your first Number: " << endl;
   	int number5;
   	std::cin >> number5;
   	std::cout<< "Okay input your second Number: " << endl;
   	int number6;
   	std::cin >> number6;
   	std::cout<< "Here is your number: " << number5 * number6 << endl;
   }else if(answer == 4){
   	std::cout<< "Okay input your first Number: " << endl;
   	int number7;
   	std::cin >> number7;
   	std::cout<< "Okay input your second Number: " << endl;
   	int number8;
   	std::cin >> number8;
   	std::cout<< "Here is your number: " << number7 / number8 << endl;
   }
   
   
   
   
   
   return 0;
}
