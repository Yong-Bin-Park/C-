#include <iostream>
using namespace std;

int main()
{
	int com, user;

	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3):";
	cin >> user;

	com = rand() % 3 + 1;
	cout <<"��ǻ��:" <<com << endl;
	if (com == 1)
	{
		if (user == 1)
		{
			cout << "�����ϴ�." << endl;
		}
		else if (user == 2)
		{
			cout << "user ��!" << endl;
		}
		else
			cout << "��ǻ�� ��!" << endl;
	}
	if (com == 2)
	{
		if (user == 1)
		{
			cout << "��ǻ�� ��!" << endl;
		}
		else if (user == 2)
		{
			cout << "�����ϴ�." << endl;
		}
		else
			cout << "user ��!" << endl;
	}
	if (com == 3)
	{
		if (user == 1)
		{
			cout << "user ��!" << endl;
		}
		else if (user == 2)
		{
			cout << "��ǻ�� ��!" << endl;
		}
		else
			cout << "�����ϴ�." << endl;
	}
	return 0;
}