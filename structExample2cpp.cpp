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
	{"Áõ±¸", 25, "ÄĞ"},
	{"¹ØÓğ", 24, "ÄĞ"},
	{"ÕÅ·É", 23, "ÄĞ"},
	{"²Ü²Ù", 27, "ÄĞ"},
	{"õõ²õ", 20, "Å®"},
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