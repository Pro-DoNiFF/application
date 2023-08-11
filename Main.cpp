#include <iostream>
#include <random>
#include <Windows.h>

int main()
{
	srand(time(NULL));
	short health = 100;
	short damages[] = { 5, 10, 15, 20, 25, 30, 50, 100 };

	health -= damages[rand() % 8];
	std::cout << "Health: " << health << std::endl;
	return 0;
}