#include <iostream>
using namespace std;

int main()
{
	int a, b;

	for (a = 0; a <7; a++)//행
	{
		for (b = 0; b <=a; b++)//숫자
		{
			cout << b+1;
		}
		for (b = 6; b >a; b--)//별
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}