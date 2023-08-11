#include <iostream>
#include <random>
#include <Windows.h>

int main()
{
	srand(time(NULL));
	short health = 100;
	health -= 50;
	std::cout << "Health: " << health << std::endl;
	return 0;
}