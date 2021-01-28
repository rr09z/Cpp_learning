#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x = 1;
	int y = 1;
	int z = 1;
	int result = 0;
	while (x<10)
	{
		while (y<10)
		{
			while (z<10)
			{
				result = x * 100 + y * 10 + z;
				if ((pow(x,3)+pow(y,3)+pow(z,3)) == result)
				{
					cout << pow(x, 3) + pow(y, 3) + pow(z, 3) << endl;
				}
				z++;
			}
			z = 0;
			y++;
		}
		y = 0;
		x++;
	}
	return 0;
}