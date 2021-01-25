#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int guess_number = 0;

	srand(unsigned(time(0)));
	number = rand() % 100;

	cout << "please input a number:" << endl;
	cin >> guess_number;

	if (guess_number > 100)
	{
		cout << "the number is out of range" << endl;
	}
	else
	{
		while (guess_number != number)
		{
			if (guess_number > number)
			{
				cout << "the number is too big!" << endl;
				cout << "please try another number again!" << endl;
				cin >> guess_number;
			}
			else
			{
				cout << "the number is too small!" << endl;
				cout << "please try another number again!" << endl;
				cin >> guess_number;
			}
		}
		cout << "Congratulations!" << endl;
	}

	return 0;
}