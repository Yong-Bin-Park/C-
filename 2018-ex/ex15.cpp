#include <iostream>
using namespace std;

int main()
{
	int com, user;

	cout << "°¡À§, ¹ÙÀ§, º¸ Áß¿¡ ÇÏ³ª¸¦ ¼±ÅÃÇÏ½Ã¿À(1, 2, 3):";
	cin >> user;

	com = rand() % 3 + 1;
	cout <<"ÄÄÇ»ÅÍ:" <<com << endl;
	if (com == 1)
	{
		if (user == 1)
		{
			cout << "ºñ°å½À´Ï´Ù." << endl;
		}
		else if (user == 2)
		{
			cout << "user ½Â!" << endl;
		}
		else
			cout << "ÄÄÇ»ÅÍ ½Â!" << endl;
	}
	if (com == 2)
	{
		if (user == 1)
		{
			cout << "ÄÄÇ»ÅÍ ½Â!" << endl;
		}
		else if (user == 2)
		{
			cout << "ºñ°å½À´Ï´Ù." << endl;
		}
		else
			cout << "user ½Â!" << endl;
	}
	if (com == 3)
	{
		if (user == 1)
		{
			cout << "user ½Â!" << endl;
		}
		else if (user == 2)
		{
			cout << "ÄÄÇ»ÅÍ ½Â!" << endl;
		}
		else
			cout << "ºñ°å½À´Ï´Ù." << endl;
	}
	return 0;
}