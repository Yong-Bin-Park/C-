#include <iostream>
using namespace std;

int main()
{
	int win, n = 1000;
	double cash, bets;

	cout << "�ʱ� �ݾ� $50" << endl;
	cout << "��ǥ �ݾ� $250" << endl;

	win = rand() % 2 + 1;

	for (bets = 1; bets < n; bets++)
	{
		if ((double)rand() / win < 0.5)
			cash++;
		else
			cash--;
		cout << n << "����" << bets << "�� �¸�" << endl;
		cout << "�̱� Ȯ��=" << n / bets << endl;
	}
	return 0;
}