#include <iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;

	cout << "n�� ���� �Է��Ͻÿ�:";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum += i*i;
	}
	cout << "��갪�� " << sum << "�Դϴ�." << endl;
	return 0;
}