#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 100; i++)
	{
		while (i == 0)
		{
			cout << 0 << endl;
			i++;
		}
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	return 0;
}
//i % 7 == 0 || i % 10 == 7 || i / 10 == 7