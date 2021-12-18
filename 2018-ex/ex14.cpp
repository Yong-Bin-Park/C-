#include <iostream>
using namespace std;

int main()
{
	int a, b, result;
	char code;
	
	cout << "연산의 종류:";
	cin >> code;
	cout << "숫자를 입력하시오:";
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
	cout << "계산의 결과 :" << result << endl;

	return 0;
}