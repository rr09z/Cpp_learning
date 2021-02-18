#include <iostream>
using namespace std;
//version1

int main()
{
	int number=5;
	int arr[5];
	int n1, n2, n3, n4, n5;
	int temp = 0;
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "please input the elements in the array." << endl;
	cin >> n1;
	arr[0] = n1;
	cin >> n2;
	arr[1] = n2;
	cin >> n3;
	arr[2] = n3;
	cin >> n4;
	arr[3] = n4;
	cin >> n5;
	arr[4] = n5;
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//temp = arr[0];
	//arr[0] = arr[4];
	//arr[4] = temp;
	//temp = arr[1];
	//arr[1] = arr[3];
	//arr[3] = temp;
	for (size_t i = 0; i < 5; i++)
	{
		if (start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
		else
		{
			break;
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	

}