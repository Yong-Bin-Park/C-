#include <iostream>
using namespace std;

int main()
{
	int f;
	double c;

	for (f = 0; f <= 100; f++)
	{
		c = (f - 32.0)*5.0 / 9.0;
		if (f % 10 == 0)
		{
			cout << f << "         " << c << endl;
		}
	}
	return 0;
}