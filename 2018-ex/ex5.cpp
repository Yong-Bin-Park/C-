#include <iostream>
using namespace std;

int main()
{
	int i, sum=0;

	while (true)
	{
		cout << "������ �Է��Ͻÿ�:";
		cin >> i;

		sum += i;

		if (i == 0)
		{
			cout << "�հ�=" << sum << endl;
			break;
		}
	}

	return 0;
}