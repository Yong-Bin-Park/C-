#include <iostream>
using namespace std;

int main()
{
	int a, b;

	for (a = 0; a <7; a++)//��
	{
		for (b = 0; b <=a; b++)//����
		{
			cout << b+1;
		}
		for (b = 6; b >a; b--)//��
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}