#include <iostream>
using namespace std;

int main()
{
	int i;
	int arr[5];

	for (i = 0; i < 5; i++)
	{
		cout << "정수를 입력해주세요:";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		if (arr[i] == 5)
		{
			cout << "5를 입력하였군요! 컴퓨터 승" << endl;
			break;
		}
	}
	if(arr[i]!=5)
	cout << "인내심이 강합니다. 사용자 승" << endl;
				
	return 0;
}