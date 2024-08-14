#include <iostream>
/*
* Make a program that counts to 1'000'000'000 in c++
*/
int main()
{
	size_t n = 0;
	while (n < 1'000'000'000)
		n++;
	std::cout << n << std::endl;
}