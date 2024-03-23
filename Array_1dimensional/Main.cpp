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
	float score[1001];
	int N;
	int sum_real=0;
	float average_real;
	int max = 0;

	cout << "시험 본 과목의 개수: ";
	cin >> N;

	cout << "각 과목의 실제 성적: ";

	for (int i = 1; i <= N; i++)
	{
		cin >> score[i];
		sum_real += score[i];
		
		if (score[i] > max)
		{
			max = score[i];
		}
	}
	average_real = sum_real / N;

	float average_lie = 0;
	float sum_lie = 0;
	
	for (int i = 1; i <= N; i++)
	{
		score[i] = score[i] / max * 100;
		sum_lie += score[i];
	}
	
	average_lie = sum_lie / N;

	cout << average_real << endl << average_lie;

	return 0;
}