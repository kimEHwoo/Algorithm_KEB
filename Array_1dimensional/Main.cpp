//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	int a[10];
//	
//	for (int i = 1; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//	int max = 0;
//	int index = 1;
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//			index = i;
//		}
//	}
//	cout << max << endl;
//	cout << index;
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int score[1000];
	int N;
	int max = -1;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> score[i];

		if (max < score[i])
		{
			max = score[i];
		}
	}

	float total = 0;
	for (int i = 0; i < N; i++)
	{
		total += score[i];
	}
	float average = (total*100) / (max * N);

	cout << average;

	return 0;
}