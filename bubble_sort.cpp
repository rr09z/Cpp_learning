#include <iostream>
using namespace std;

int main()
{
	//ц╟ещеепР
	int arr[9] = { 3,2,5,7,1,8,6,9,4 };

	cout << "before sorting:" << endl;
	for (size_t i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//algorithm part
	for (size_t i = 0; i < 9 - 1; i++)
	{
		for (size_t j = 0; j < 9-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "after sorting:" << endl;
	for (size_t i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
}