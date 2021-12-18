#include <iostream>
using namespace std;

int main()
{
	int n, printvalue = 0, oldvalue = 1;
	int temp;

	cout << "몇 항까지 구할까요:";
	cin >> n;

	for (int j = 3; j <= n+2; j++)
	{
		temp = printvalue;
		printvalue = printvalue + oldvalue;
		oldvalue = temp;
		cout << temp << " ";
	}
	cout << endl;
	return 0;
}