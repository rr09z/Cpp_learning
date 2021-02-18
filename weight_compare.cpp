#include <iostream>

using namespace std;

int main() 
{
	int arr[5];
	int pig1, pig2, pig3, pig4, pig5;
	int max;
	cout << "please input the weight of five pigs." << endl;
	cin >> pig1;
	arr[0] = pig1;
	cin >> pig2;
	arr[1] = pig2;
	cin >> pig3;
	arr[2] = pig3;
	cin >> pig4;
	arr[3] = pig4;
	cin >> pig5;
	arr[4] = pig5;
	/*cout << arr[0] << endl;*/
	max = arr[0];
	for (size_t i = 0; i < 5; i++)
	{
		if (max>=arr[i+1])
		{
			max = max;
		}
		else
		{
			max = arr[i + 1];
		}
	}
	cout << max << endl;
}