#include <iostream>
using namespace std;
//version1

int main()
{
	int number=5;
	int arr[5];
	int n1, n2, n3, n4, n5;
	int t1, t2 = 0;
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
	t1 = arr[0];
	arr[0] = arr[4];
	arr[4] = t1;
	t2 = arr[1];
	arr[1] = arr[3];
	arr[3] = t2;
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

}