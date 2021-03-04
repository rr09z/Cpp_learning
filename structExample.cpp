#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
	string name;
	int score;
};
struct teacher
{
	string name;
	struct student sarr[5];
};
void allocateSpace(struct teacher tarr[], int len)
{
	string nameSeed = "ABCDE";
	string snameSeed = "abcdefghijklmnopqrstuvwxyz";
	int z = 5;
	for (size_t i = 0; i < len; i++)
	{
		tarr[i].name = "Teacher_";
		tarr[i].name += nameSeed[i];
		for (size_t j = 0; j < 5; j++)
		{
			tarr[i].sarr[j].name = "Student_";
			tarr[i].sarr[j].name += snameSeed[i*z + j];
			int random = rand() % 51 + 50;
			tarr[i].sarr[j].score = random;
		}
	}
}

void printInfo(struct teacher tarr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		cout << tarr[i].name << endl;
		for (size_t j = 0; j < 5; j++)
		{
			cout << "\t"<<tarr[i].sarr[j].name << ": " << tarr[i].sarr[j].score << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	struct teacher tarr[3];
	int len = sizeof(tarr) / sizeof(tarr[0]);
	allocateSpace(tarr, len);
	printInfo(tarr, len);
	

	system("pause");
	return 0;
}