#include <iostream>
using namespace std;

int main()
{
	int i;
	int arr[5];

	for (i = 0; i < 5; i++)
	{
		cout << "������ �Է����ּ���:";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		if (arr[i] == 5)
		{
			cout << "5�� �Է��Ͽ�����! ��ǻ�� ��" << endl;
			break;
		}
	}
	if(arr[i]!=5)
	cout << "�γ����� ���մϴ�. ����� ��" << endl;
				
	return 0;
}