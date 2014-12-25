#include <iostream>
using namespace std;
int main()
{
	int max = 1000;
	int count = 1;
	int sum = 0;
	while (count < max)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum = count + sum;
		}
		count++;
	}
	cout << sum << endl;
	return 0;
}
