#include <iostream>
using namespace std;

int main()
{
	int win, n = 1000;
	double cash, bets;

	cout << "초기 금액 $50" << endl;
	cout << "목표 금액 $250" << endl;

	win = rand() % 2 + 1;

	for (bets = 1; bets < n; bets++)
	{
		if ((double)rand() / win < 0.5)
			cash++;
		else
			cash--;
		cout << n << "중의" << bets << "번 승리" << endl;
		cout << "이긴 확률=" << n / bets << endl;
	}
	return 0;
}