#include <stdio.h>

#include "tutoring.h"


int plus(int a, int b)
{
	return a + b;
}

int readNumberFromConsole()
{
	int number;
	std::cin >> number;

	return number;
}

void game(int min, int max)
{
	int solution = min + (rand() % max);

	printf("rentre un chiffre de %d a %d : ", min, max);
	int answer = readNumberFromConsole();

	if (answer < min || answer > max)
	{
		printf("HEILLE! ENTRE %d ET %d", min, max);
	}
	else if (answer == solution)
	{
		std::cout << "you win!";
	}
	else
	{
		std::cout << "you lose... the solution was : ";
		std::cout << solution;
	}

	std::cout << std::endl;
}

int main()
{
	while (true)
	{
		game(1, 2 + (rand() % 1000));
	}

	//if (x < 0)
	//{
	//	std::cout << "negatif";
	//}
	//else if (x > 0)
	//{
	//	if (x == 10)
	//	{
	//		std::cout << "win!";
	//	}

	//	std::cout << "positif";
	//}
	//else
	//{
	//	std::cout << "zero";
	//}

	return 0;
}
