#include <iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string gender;
};

struct hero heroarray[5] =
{
	{"����", 25, "��"},
	{"����", 24, "��"},
	{"�ŷ�", 23, "��"},
	{"�ܲ�", 27, "��"},
	{"����", 20, "Ů"},
};

void bubbleSort(struct hero heroarray[], int len)
{
	for (size_t i = 0; i < len-1; i++)
	{
		for (size_t j = 0; j < len-1-i; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				struct hero temp;
				temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}

		}
	}
};

int len = sizeof(heroarray) / sizeof(heroarray[0]);

int main()
{
	bubbleSort(heroarray, len);
	for (size_t i = 0; i < len; i++)
	{
		cout << "name: " << heroarray[i].name << " age: " << heroarray[i].age << " gender: " << heroarray[i].gender << endl;
	}
	return 0;
}