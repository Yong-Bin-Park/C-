#include <iostream>
using namespace std;

int main()
{
	int a, b, result;
	char code;
	
	cout << "������ ����:";
	cin >> code;
	cout << "���ڸ� �Է��Ͻÿ�:";
	cin >> a  >> b;
	switch (code)
	{
	case '+':
		result=a + b;
		break;
	case '-':
		result=a - b;
		break;
	case '*':
		result=a*b;
		break;
	case '/':
		result=a / b;
		break;
	}
	cout << "����� ��� :" << result << endl;

	return 0;
}