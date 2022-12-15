#include <iostream>
using namespace std;

int main()
{
	int gamemode = 0;

	printf ("Choose the game mode:\n");
	printf ("1. 01 Game\n");
	printf ("2. Exit\n");
	while (cin >> gamemode);
	{
		if (gamemode == 1)
		{
			printf ("1");
		}

		else if (gamemode == 2)
		{
			return 0;
		}

		else
		{
			printf ("Mode error.");
		}
	}

	return 0;
} 