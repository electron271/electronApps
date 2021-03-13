#include <iostream>
#include <conio.h>
int n;
int cn;
int main() {
	std::cout << "Please choose a number to count to\n";
	std::cin >> n;
	n++;
	while(n > cn)
	{
		std::cout << cn << " ";
		cn++;
	}
	std::cout << "\nFinished counting\n";
	_getch();
}