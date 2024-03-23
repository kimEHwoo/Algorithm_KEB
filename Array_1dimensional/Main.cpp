#include <iostream>
using namespace std;

int main() 
{
	int a[10];
	
	for (int i = 1; i < 10; i++)
	{
		cin >> a[i];
	}

	int max = 0;
	int index = 1;

	for (int i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			index = i;
		}
	}
	cout << max << endl;
	cout << index;

	return 0;
}