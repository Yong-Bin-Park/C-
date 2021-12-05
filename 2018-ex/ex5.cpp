#include <iostream>
using namespace std;

int main()
{
	int i, sum=0;

	while (true)
	{
		cout << "정수를 입력하시오:";
		cin >> i;

		sum += i;

		if (i == 0)
		{
			cout << "합계=" << sum << endl;
			break;
		}
	}

	return 0;
}